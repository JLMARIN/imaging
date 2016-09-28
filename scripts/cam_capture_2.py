import cv2

vc = cv2.VideoCapture(0)

if vc.isOpened():
    vc.set(3, 1280) # set frame width in pixels
    vc.set(4, 720) # set frame height in pixels

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

