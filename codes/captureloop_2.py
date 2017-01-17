import cv2
import glob
import sys
import time
import os
import subprocess
import xml.etree.ElementTree as ET
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
# resolution = (2048, 1536)
resolution = (2592, 1944)

# define global name 'frame' before using
frame = 0


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
    sys.stdout = Tee(open("logs/" + timestr + "-" + file_name + ".txt", "w"), sys.stdout)


def set_resolution(*args):
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, args[0][0])   # set frame width in pixels
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, args[0][1])  # set frame height in pixels
    print "camera settings update:"
    print "    @resolution=" + str(args[0][0]) + 'x' + str(args[0][1])


def setup(device, chg_set_flag):
    set_resolution(resolution)

    if chg_set_flag is True:
        # retrieve camera configuration values from config.ini file
        brt = int(config.find('CameraSettings/brightness').text)
        exp_auto = int(config.find('CameraSettings/exposure_auto').text)
        exp_abs = int(config.find('CameraSettings/exposure_absolute').text)

        # configure camera settings using v4l2-ctl as a shell command
        command = 'v4l2-ctl' \
                  + ' -d /dev/video' + str(device) \
                  + ' -c brightness=' + str(brt) \
                  + ',exposure_auto=' + str(exp_auto) \
                  + ',exposure_absolute=' + str(exp_abs)

        # execute shell command
        subprocess.call([command], shell=True)

        print "    @brightness=" + str(brt)
        print "    @exposure_auto=" + str(exp_auto)
        print "    @exposure_absolute=" + str(exp_abs)


def capture_frame():
    capture_frame.count += 1
    capture_frame.name_count += 1
    cv2.imwrite("pics/frame%04d.jpg" % capture_frame.name_count, frame)
    print "captured frame " + str(capture_frame.count) + " -> saved as: frame%04d.jpg" % capture_frame.name_count


capture_frame.count = 0
# get number of jpg files in pics folder to avoid rewriting
capture_frame.name_count = len(glob.glob('pics/*.jpg'))


if __name__ == '__main__':

    # read config xml file
    tree = ET.parse("config.xml")
    config = tree.getroot()

    dev_id = int(config.find('CameraSettings/dev_id').text)
    chg_set = int(config.find('CameraSettings/chg_set').text)

    vc = cv2.VideoCapture(dev_id)

    if vc.isOpened():
        # configure logger
        setup_logger()

        print "> starting...  [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"

        # configure camera
        setup(dev_id, chg_set)

        print "> found " + str(capture_frame.name_count) + " image files in pics folder"
        rt = RepeatedTimer(1, capture_frame)

        try:
            while True:
                retval, frame = vc.read()
        except KeyboardInterrupt:
            print "loop interrupted!"

        rt.stop()

        vc.release()
        cv2.destroyAllWindows()

    print "> program exit [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
