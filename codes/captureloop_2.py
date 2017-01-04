import cv2
import glob
import sys
import time
import os
from customTimer import RepeatedTimer
from time import sleep

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

frame = len(glob.glob('*.jpg'))


class Tee:
    def __init__(self, out1, out2):
        self.out1 = out1
        self.out2 = out2

    def write(self, *args, **kwargs):
        self.out1.write(*args, **kwargs)
        self.out2.write(*args, **kwargs)


def setup_logger():
    timestr = time.strftime("%Y%m%d-%H%M%S")
    file_name = os.path.splitext(sys.argv[0])[0]
    sys.stdout = Tee(open("logs/" + file_name + "-" + timestr + ".txt", "w"), sys.stdout)


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
        # configure logger
        setup_logger()

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
