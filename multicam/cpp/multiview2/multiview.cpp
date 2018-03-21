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

using namespace cv;
using namespace std;


string cameraList[12];


int main ( int argc, char** argv )
{
    system("v4l2-ctl -d /dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710685-video-index0 -c exposure_absolute=60,privacy=1");
    system("v4l2-ctl -d /dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710675-video-index0 -c exposure_absolute=400,privacy=1");
    system("v4l2-ctl -d /dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710674-video-index0 -c exposure_absolute=500,privacy=1");
    
    int     wKey        = -1;
    
    Mat frame1, frame2, frame3;

    // open cameras
    VideoCapture cap1("v4l2src device=/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710685-video-index0 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink");
    VideoCapture cap2("v4l2src device=/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710675-video-index0 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink");
    VideoCapture cap3("v4l2src device=/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710674-video-index0 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink");

    // if not success, exit program
    if (!cap1.isOpened() || !cap2.isOpened() || !cap3.isOpened())  
    {
        printf("Cannot open cameras\n");
        return -1;
    }

    // create a window for display
    int width  = 480;
    int height = 360;
    namedWindow("Camera 1", WINDOW_NORMAL);
    namedWindow("Camera 2", WINDOW_NORMAL);
    namedWindow("Camera 3", WINDOW_NORMAL);
    resizeWindow("Camera 1", width, height);
    resizeWindow("Camera 2", width, height);
    resizeWindow("Camera 3", width, height);
    moveWindow("Camera 1", 0, 20);
    moveWindow("Camera 2", width, 20);
    moveWindow("Camera 3", 2*width, 20);

     while(wKey == -1 )
    {
        bool success1 = cap1.read(frame1);
        bool success2 = cap2.read(frame2);
        bool success3 = cap3.read(frame3); 

        // breaking the while loop if the frames cannot be captured
        if (!success1 || !success2 || !success3) 
        {
            printf("One the cameras is disconnected\n");
            break;
        }
        
        // show frame
        imshow("Camera 1", frame1);
        imshow("Camera 2", frame2);
        imshow("Camera 3", frame3);

        wKey =  waitKey(10);
    }

    cap1.release();
    cap2.release();
    cap3.release();
    destroyWindow("Camera 1");
    destroyWindow("Camera 2");
    destroyWindow("Camera 3");

    printf("\nProgram ended\n");

    return 0;
}