import cv2

mode = 0 # 0: res(1280x1024), 1: res(2592x1944)

vc = cv2.VideoCapture(0)

if vc.isOpened():
    if mode == 0:
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 1280)
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1024)
    elif mode == 1:
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 2592)
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1944)
    # vc.set(cv2.cv.CV_CAP_PROP_FPS, 15) # set frame rate (is set automatically from the resolution setting)

count = 0

while count < 20:
    retval, frame = vc.read()
    cv2.imwrite("frame%04d.jpg" % count, frame)

    if cv2.waitKey(1) & 0xFF == ord('q'): # exit on 'q'
        break
	
    count +=1

vc.release()
cv2.destroyAllWindows()

print "program exit"

