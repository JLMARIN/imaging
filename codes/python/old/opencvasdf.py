import cv2

cv2.namedWindow("preview")
vc0 = cv2.VideoCapture(0)
vc1 = cv2.VideoCapture(1)

if vc1.isOpened(): # See if opened or else use first camera
    vc = vc1
else:
    vc = vc0

if vc.isOpened(): # try to get the first frame
    rval, frame = vc.read()
else:
    rval = False


ss = 30
count = 0

while rval:
    cv2.imshow("preview", frame)
    cv2.imwrite("frame%d.jpg" % count, frame)     # save frame as JPEG file
    rval, frame = vc.read()
    key = cv2.waitKey(20)
    count +=1
    vc.set(5, (ss + count))
    if key == 27: # exit on ESC
        break
cv2.destroyWindow("preview")
vc.release()
print "succesfully exit"

