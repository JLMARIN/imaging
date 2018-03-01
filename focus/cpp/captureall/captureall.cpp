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

int main ( int argc, char** argv )
{   
    int camnum = 1; // default
    if( argc > 1)
    {
        camnum = atoi(argv[1]);
    }

    IplImage* pOpenCVImage;
    Mat image;
    float focus;

    CvSize ImageSize;
    unsigned char* ImageBuffer = NULL;
    int wKey = -1;

    ImageSize.width = 1280;
    ImageSize.height = 960;
    
    printf("Program started\n");

    loadCameraList();
    
    pOpenCVImage = cvCreateImage(ImageSize , IPL_DEPTH_8U, 1 ); // Grayscale

    for (int i=0; i<camnum; i++)
    {
        const char* cameraId = cameraList[i].c_str();
        
        int fd = open_device((char*)cameraId);

        configureCamera(fd);

        init_device(ImageSize.width, ImageSize.height);

        printf("Capturing from camera: %s\n", cameraId);

        start_capturing();

        ImageBuffer = snapFrame();

        if( ImageBuffer != NULL )
        {
            memcpy( pOpenCVImage->imageData, ImageBuffer, pOpenCVImage->imageSize);
            
            image = cvarrToMat(pOpenCVImage);

            stringstream imageFilename;
            imageFilename << "frame_cam" << i+1 << ".png";
            imwrite(imageFilename.str().c_str(), image);
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
