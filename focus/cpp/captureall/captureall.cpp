/**
 * Code for capturing a single frame from multiple cameras
 */

#include "v4ldevice.h"

#include <opencv2/opencv.hpp>

#include <libv4l2.h>
#include <linux/videodev2.h>

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>


using namespace cv;
using namespace std;

string cameraList[12];


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
    ctrl.value = 10;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set trigger
    ctrl.id = V4L2_CID_PRIVACY;
    ctrl.value = 0;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);
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
    int camnum = 1; // default
    if( argc > 1)
        camnum = atoi(argv[1]);

    unsigned char* ImageBuffer = NULL;
    int imageWidth = 1280;
    int imageHeight = 960;
    int wKey = -1;
    
    printf("Program started\n");

    loadCameraList();

    for (int i=0; i<camnum; i++)
    {
        const char* cameraId = cameraList[i].c_str();
        
        int fd = open_device((char*)cameraId);

        configureCamera(fd);

        init_device(imageWidth, imageHeight);

        printf("Capturing from camera: %s\n", cameraId);

        start_capturing();

        snapFrame();
        sleep(1);
        ImageBuffer = snapFrame();

        if( ImageBuffer != NULL )
        {
            // convert image buffer to matrix
            Mat img(imageHeight, imageWidth, CV_8UC1, &ImageBuffer[0]);

            stringstream imageFilename;
            imageFilename << "frame_cam" << i+1 << ".png";
            imwrite(imageFilename.str().c_str(), img);

            float focus = fmeasure( img );

            printf("focus = %.4f\n", focus);
        }
        else
        {
            printf("No image buffer retrieved.\n");
        }

        stop_capturing();
        uninit_device();
        close_device();
    }

    printf("\nProgram ended\n");

    return 0;
}
