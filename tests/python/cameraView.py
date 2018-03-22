import cv2
import numpy as np

cap = cv2.VideoCapture("v4l2src device=/dev/video0 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 ! videoconvert ! appsink")

while(True):
    ret, frame = cap.read()
    cv2.imshow("frame", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
