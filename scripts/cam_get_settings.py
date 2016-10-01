import cv2

vc = cv2.VideoCapture(0)

if vc.isOpened():
    # setup
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 2592)
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1944)
    # read and print setup
    print "resolution = " , vc.get(cv2.cv.CV_CAP_PROP_FRAME_WIDTH), "x" , vc.get(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT)
    #print "FPS = " , vc.get(cv2.cv.CV_CAP_PROP_FPS)
    #print "codec = " , vc.get(cv2.cv.CV_CAP_PROP_FOURCC)
    #print "format = " , vc.get(cv2.cv.CV_CAP_PROP_FORMAT)
    print "brightness = " , vc.get(cv2.cv.CV_CAP_PROP_BRIGHTNESS)
    
vc.release()
 
