import cv2

vc = cv2.VideoCapture(0)

if vc.isOpened():
    vc.set(3, 2592) # set frame width in pixels (2592 max)
    vc.set(4, 1944) # set frame height in pixels (1944 max)
    vc.set(5, 15) # set frame rate

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

