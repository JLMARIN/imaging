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
