/**
 * Code for interfacing and visualizing the output of a camera from
 * The Imaging Source using opencv and without gstreamer
 * 
 * Based on code taken from
 * https://gist.github.com/TIS-Edgar/10f04501f49b6b3bf75e
 */

#include "v4ldevice.h"

#include <opencv2/opencv.hpp>

#include <iostream>
#include <stdio.h>

#include <libv4l2.h>
#include <linux/videodev2.h>

#include <math.h>       /* pow */

using namespace cv;

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
    ctrl.value = 10;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set trigger
    ctrl.id = V4L2_CID_PRIVACY;
    ctrl.value = 0;
    v4l2_ioctl(fd, VIDIOC_S_CTRL, &ctrl);

    // set frame rate
    struct v4l2_streamparm setfps;
    setfps.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    setfps.parm.capture.timeperframe.numerator = 1;
    setfps.parm.capture.timeperframe.denominator = 10;
    v4l2_ioctl(fd, VIDIOC_S_PARM, &setfps);
}

int main ()
{
    IplImage* pOpenCVImage;
    Mat image;
    float focus;

    CvSize ImageSize;
    unsigned char* ImageBuffer = NULL;
    int wKey = -1;

    ImageSize.width = 1280;
    ImageSize.height = 960;

    cvNamedWindow( (char*)"Camera", 1 );

    printf("Program started\n");

    pOpenCVImage = cvCreateImage(ImageSize , IPL_DEPTH_8U, 1 ); // Grayscale

    int fd = open_device((char*)"/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710685-video-index0");

    configureCamera(fd);

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
            //image = mat_frame(pOpenCVImage);

            cvShowImage( (char*)"Camera", pOpenCVImage);
            //imshow( "Camera", image);

            focus = fmeasure( image );
            printf("focus = %4.4f\r", focus);

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
