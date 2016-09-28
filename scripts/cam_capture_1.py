import cv2

#cv2.namedWindow("preview")
vc = cv2.VideoCapture(0)

if vc.isOpened():
    vc.set(3, 2592) # set frame width in pixels
    vc.set(4, 1944) # set frame height in pixels

if vc.isOpened():
    retval, frame = vc.read()
    cv2.imwrite("test.png", frame)
    
vc.release()

