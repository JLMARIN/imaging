import cv2
from customTimer import RepeatedTimer

# define resolution tuple in format (width,height). Uncomment the desired resolution
# resolution = (320, 240)
# resolution = (640, 480)
# resolution = (800, 600)
# resolution = (1024, 768)
# resolution = (1280, 720)
# resolution = (1280, 1024)
# resolution = (1600, 1200)
# resolution = (1920, 1080)
resolution = (2048, 1536)
# resolution = (2592, 1944)

frame = 0


def set_resolution(*args):
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, args[0][0])   # set frame width in pixels
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, args[0][1])  # set frame height in pixels


def setup():
    set_resolution(resolution)


def capture_frame():
    capture_frame.count += 1
    cv2.imwrite("pics/frame%04d.jpg" % capture_frame.count, frame)
    print "captured frame " + str(capture_frame.count)


capture_frame.count = 0

if __name__ == '__main__':

    vc = cv2.VideoCapture(0)

    if vc.isOpened():
        # configure camera
        setup()

        print "Starting..."
        rt = RepeatedTimer(1, capture_frame)

        try:
            while True:
                retval, frame = vc.read()
        except KeyboardInterrupt:
            print "loop interrupted!"

        rt.stop()

        vc.release()
        cv2.destroyAllWindows()

    print "program exit"
