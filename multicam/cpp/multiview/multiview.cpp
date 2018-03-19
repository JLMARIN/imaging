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
    int     wKey        = -1;

    // open camera
    VideoCapture cap1("v4l2src device=/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710685-video-index0 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink");

    // if not success, exit program
    if (cap1.isOpened() == false)  
    {
        printf("Cannot open camera 1\n");
        return -1;
    }

    // create a window for display
    namedWindow("Camera 1", WINDOW_NORMAL);
    resizeWindow("Camera 1", 640, 480);

     while(wKey == -1 )
    {
        Mat frame;
        bool bSuccess = cap1.read(frame); // read a new frame from video 

        // breaking the while loop if the frames cannot be captured
        if (bSuccess == false) 
        {
            printf("Video camera is disconnected\n");
            break;
        }
        
        // show frame
        imshow("Camera 1", frame);

        wKey =  waitKey(10);
    }

    cap1.release();
    destroyWindow("Camera 1");

    printf("\nProgram ended\n");

    return 0;
}