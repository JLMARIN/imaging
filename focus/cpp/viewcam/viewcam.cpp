/**
 * Code for interfacing and visualizing the output of a camera from
 * The Imaging Source using opencv and without gstreamer
 * 
 * Based on code taken from
 * https://gist.github.com/TIS-Edgar/10f04501f49b6b3bf75e
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


using namespace cv;
using namespace std;

string cameraList[12];
const uint32_t focusUpdateRatePerSec = 10;

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
 * @brief   Focus measure implementation using the 'Variance of laplacian (Pech2000)'.
 *          Informatio taken from:
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
    parm.parm.capture.timeperframe.denominator = 10;
    v4l2_ioctl(fd, VIDIOC_S_PARM, &parm);
}


int main ( int argc, char** argv )
{
    int camIndex = 1; // default
    if( argc > 1)
    {
        camIndex = atoi(argv[1]);
    }

    IplImage* pOpenCVImage;
    Mat image;
    float focus = 0;

    CvSize ImageSize;
    unsigned char* ImageBuffer = NULL;
    int wKey = -1;

    uint8_t updateCount = 0;

    ImageSize.width = 1280;
    ImageSize.height = 960;

    loadCameraList();

    cvNamedWindow( (char*)"Camera", 1 );

    printf("Program started\n");

    pOpenCVImage = cvCreateImage(ImageSize , IPL_DEPTH_8U, 1 ); // Grayscale

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


    init_device(ImageSize.width, ImageSize.height);

    printf("Start capturing\n");

    start_capturing();

    while(wKey == -1 )
    {
        ImageBuffer = snapFrame();

        if( ImageBuffer != NULL )
        {
            memcpy( pOpenCVImage->imageData, ImageBuffer, pOpenCVImage->imageSize);
            
            image = cvarrToMat(pOpenCVImage);

            cvShowImage( (char*)"Camera", pOpenCVImage);

            if (++updateCount == tf.denominator / focusUpdateRatePerSec) {
                updateCount = 0;
                focus = fmeasure( image );
                cout << "\r" << focus;
                cout.flush();
            }

            wKey = cvWaitKey(10);
        }
        else
        {
            printf("No image buffer retrieved.\n");
            break;
        }
    }

    cvDestroyWindow( (char*)"Camera" );
    stop_capturing();
    uninit_device();
    close_device();

    printf("\nProgram ended\n");

    return 0;
}
