/**
 * @brief   Code for interfacing and visualizing the output of a camera from
 *          The Imaging Source using opencv and a local v4l library (no gstreamer).
 *          The code also calculates a focus measure of the image in real time
 *          while displaying it in the video window.
 *          
 *          Based on code taken from
 *          https://gist.github.com/TIS-Edgar/10f04501f49b6b3bf75e
 * @param   Number of the camera to use according to the cameralist.txt file
 *          included with this code. Number is 1-indexed. Default is 1.
 * @param   If 1 the focus measures are saved in a local text file named
 *          'focus_log.txt'. Default is 0.
 * @example $./viewcam 4 1          (selects camera 4 and saves data to file)
 */

#include "v4ldevice.h"

#include <opencv2/opencv.hpp>

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <math.h>

#include <libv4l2.h>
#include <linux/videodev2.h>


#define FRAME_RATE              ( 10 )  // camera frame rate
#define FOCUSUPDATE_RATE        ( 10 )  // update rate focus measure in frames per second

using namespace cv;
using namespace std;


string cameraList[12];
FILE *f;


/**
 * @brief   Loads camera list from text file
 */
void loadCameraList(void)
{
    int i =0;
    string line;
    ifstream file("cameralist.txt");

    if(file.is_open())
    {
        while (!file.eof())
        {
            getline (file, line);
            cameraList[i] = line;
            //cout << cameraList[i] << endl;
            i++;
        }
        file.close();
    }
    else printf("Unable to open file\n");
}


/**
 * @brief   Configures camera
 * @param   File descriptor for open camera
 */
void configureCamera(int fd)
{
    struct v4l2_control ctrl;

    // set exposure
    ctrl.id = V4L2_CID_BRIGHTNESS;
    ctrl.value = 12;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set gain
    ctrl.id = V4L2_CID_GAIN;
    ctrl.value = 36;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set exposure
    ctrl.id = V4L2_CID_EXPOSURE_ABSOLUTE;
    ctrl.value = 3;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set trigger
    ctrl.id = V4L2_CID_PRIVACY;
    ctrl.value = 0;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set frame rate
    struct v4l2_streamparm parm;
    parm.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    parm.parm.capture.timeperframe.numerator = 1;
    parm.parm.capture.timeperframe.denominator = FRAME_RATE;
    v4l2_ioctl(fd, VIDIOC_S_PARM, &parm);
}


/**
 * @brief   Applyes a simple low filter
 * @param   Present raw value
 * @param   Previous filtered value
 * @param   Filtering factor between 0 and 1
 * @return  Present filtered value
 */
float low_pass_filter(float signal_in, float signal_out, float k)
{
    return (k * signal_in + (1-k) * signal_out);
}


/**
 * @brief   Filters data discarding value jumps above a threshold
 * @param   Previous value
 * @param   Current value
 * @param   Threshold
 * @return  Filtered value
 */
float difffilter(float prevVal, float val, float delta)
{
    if ( abs(val - prevVal) > delta)
        return prevVal;
    else
        return val;
}


/**
 * @brief   Focus measure implementation using the 'Variance of laplacian (Pech2000)'.
 *          Information taken from:
 *          - S. Pertuz et al., Analysis of focus measure operators for shape-from-focus.
 *            Pattern Recognition, 46(5):1415:1432, 2013
 * @param   Image to process
 * @return  Focus measure
 */
float fmeasure( const Mat &src )
{
    Point anchor( 0, 0 );
    double delta = 0;
    int ddepth = -1;
    Scalar mean, stddev;

    // laplacian filter kernel
    float kernel[3][3] = { {0.1667, 0.6667, 0.1667} , {0.6667, -3.3333, 0.6667} , {0.1667, 0.6667, 0.1667} };

    Mat ker = Mat( 3, 3, CV_32F, &kernel );
    Mat dst = Mat( src.size(), src.type() );

    // apply filter to image
    filter2D( src, dst, ddepth , ker, anchor, delta, BORDER_REPLICATE );

    // calculate standard deviation
    meanStdDev(dst, mean, stddev);

    // return focus measure as the standard deviation squared
    return static_cast<float>( pow(stddev.val[0], 2) );
}


int main ( int argc, char** argv )
{
    // default configurations
    int     camIndex    = 1;
    int     saveToText  = 0;

    if( argc > 1)
        camIndex = atoi(argv[1]);
    
    if( argc > 2)
        saveToText = atoi(argv[2]);

    float focus, focusFilt;
    bool firstIteration = true;

    unsigned char* ImageBuffer = NULL;
    int imageWidth = 1280;
    int imageHeight = 960;
    int wKey = -1;

    uint8_t updateCount = 0;

    loadCameraList();

    namedWindow( "Display window", WINDOW_AUTOSIZE ); // Create a window for display.

    printf("Program started\n");

    const char* cameraId = cameraList[camIndex-1].c_str();
        
    int fd = open_device((char*)cameraId);

    configureCamera(fd);

    struct v4l2_streamparm parm;
    parm.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    v4l2_ioctl(fd, VIDIOC_G_PARM, &parm);
    const struct v4l2_fract &tf = parm.parm.capture.timeperframe;

    printf("Frames per second: %.3f (%d/%d)\n",
            (1.0 * tf.denominator) / tf.numerator,
            tf.denominator, tf.numerator);


    init_device(imageWidth, imageHeight);

    printf("Start capturing\n");

    start_capturing();

    // if flag is set, open text file to save data
    if (saveToText)
        f = fopen("focus_log.txt", "w");

    while(wKey == -1 )
    {
        ImageBuffer = snapFrame();

        if( ImageBuffer != NULL )
        {
            // convert image buffer to matrix
            Mat img(imageHeight, imageWidth, CV_8UC1, &ImageBuffer[0]);

            // calculate focus
            if (++updateCount == tf.denominator / FOCUSUPDATE_RATE) {
                updateCount = 0;
                focus = fmeasure( img );
                if (firstIteration) {
                    firstIteration = false;
                    focusFilt = focus;
                }
                focusFilt = difffilter(focusFilt, focus, 20.00);
                if (saveToText)
                    fprintf(f, "%f\n", focusFilt);
            }

            // convert grey image to color image
            Mat img_rgb(img.size(), CV_8UC3);
            cvtColor(img, img_rgb, CV_GRAY2RGB);

            // display text overlay with focus measure
            stringstream stream;
            stream << focusFilt;
            string text = "focus=" + stream.str();
            putText(img_rgb, text, cvPoint(30,30), FONT_HERSHEY_DUPLEX, 1.2, CV_RGB(255,30,0), 1, CV_AA);
            
            // show image
            imshow("Display window", img_rgb);

            wKey =  waitKey(10);
        }
        else
        {
            printf("No image buffer retrieved.\n");
            break;
        }
    }

    destroyWindow( "Display window" );
    stop_capturing();
    uninit_device();
    close_device();
    if (saveToText)
        fclose(f);

    printf("\nProgram ended\n");

    return 0;
}