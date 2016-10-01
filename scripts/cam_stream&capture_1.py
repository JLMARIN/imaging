import cv2

mode = 0 # 0: res(1280x1024), 1: res(2592x1944)

vc = cv2.VideoCapture(0)

if vc.isOpened():
    if mode == 0:
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 1280) # set frame width in pixels
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1024) # set frame height in pixels
    elif mode == 1:
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 2592) # set frame width in pixels (2592 max)
        vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1944) # set frame height in pixels (1944 max)

while True:
    retval, frame = vc.read()
    rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2BGRA)

    cv2.imshow('frame', rgb)

    key = cv2.waitKey(1)
    if key & 0xFF == ord('s'):
        out = cv2.imwrite('capture.jpg', frame)

    if key & 0xFF == ord('q'):
        break

vc.release()
cv2.destroyAllWindows()

print "program exit"

