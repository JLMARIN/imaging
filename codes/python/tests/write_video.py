import cv2

# define resolution tuple in format (width,height). Uncomment the desired resolution
# resolution = (320, 240)
# resolution = (640, 480)
# resolution = (800, 600)
# resolution = (1024, 768)
# resolution = (1280, 720)
resolution = (1280, 1024)
# resolution = (1600, 1200)
# resolution = (1920, 1080)
# resolution = (2048, 1536)
# resolution = (2592, 1944)


def set_resolution(*args):

    vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, args[0][0])   # set frame width in pixels
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, args[0][1])  # set frame height in pixels
    print "camera settings update:"
    print "    @resolution=" + str(args[0][0]) + 'x' + str(args[0][1])


vc = cv2.VideoCapture(1)

set_resolution(resolution)

# Define the codec and create VideoWriter object
fourcc = cv2.cv.CV_FOURCC('X', 'V', 'I', 'D')
video = cv2.VideoWriter('video.avi', fourcc, 15.0, resolution)

while(vc.isOpened()):
    ret, frame = vc.read()
    if ret is True:
        # write the frame
        video.write(frame)
        cv2.imshow('frame', frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break

# Release everything if job is finished
vc.release()
video.release()
cv2.destroyAllWindows()
