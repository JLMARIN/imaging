import numpy as np
import cv2

cap0 = cv2.VideoCapture("v4l2src device=/dev/video0 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink")
#cap1 = cv2.VideoCapture("v4l2src device=/dev/video2 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink")
#cap2 = cv2.VideoCapture("v4l2src device=/dev/video3 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink")
#cap3 = cv2.VideoCapture("v4l2src device=/dev/video4 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink")
#gst-launch-1.0 v4l2src device=/dev/video1 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=30/1 ! videoconvert ! ximagesink
while(True):
    # Capture frame-by-frame
    ret, frame0 = cap0.read()
 #   ret, frame1 = cap1.read()
 #   ret, frame2 = cap2.read()
 #   ret, frame3 = cap3.read()

    
    # Display the resulting frame
    cv2.imshow('frame0',frame0)
 #   cv2.imshow('frame1',frame1)
 #   cv2.imshow('frame2',frame2)
 #   cv2.imshow('frame3',frame3)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()
