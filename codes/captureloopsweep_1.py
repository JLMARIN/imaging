import cv2
import glob
import sys
import time
import os
import subprocess
import xml.etree.ElementTree as ET
from customTimer import RepeatedTimer

# define resolution tuples in format (width,height)
res_320_240 = (320, 240)
res_640_480 = (640, 480)
res_800_600 = (800, 600)
res_1024_768 = (1024, 768)
res_1280_720 = (1280, 720)
res_1280_1024 = (1280, 1024)
res_1600_1200 = (1600, 1200)
res_1920_1080 = (1920, 1080)
res_2048_1536 = (2048, 1536)
res_2592_1944 = (2592, 1944)

dev_id = 0

# define global name 'frame' before using
frame = 0

# define array of counter values for camera settings update
inc = 10
pic_interval = [0,
                inc,
                2 * inc,
                3 * inc,
                4 * inc,
                5 * inc,
                6 * inc,
                7 * inc,
                8 * inc,
                9 * inc,
                10 * inc]

video_duration = 10


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


def setup(device, res, setFlag, brt, exp_auto, exp_abs):
    set_resolution(res)

    if setFlag is True:
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
    if capture_frame.flag is True:
        capture_frame.count += 1
        capture_frame.name_count += 1
        cv2.imwrite("pics/frame%04d.jpg" % capture_frame.name_count, frame)
        print "captured frame " + str(capture_frame.count) + " -> saved as: frame%04d.jpg" % capture_frame.name_count
        capture_frame.check = True
    else:
        capture_frame.delay += 1
        if capture_frame.delay == 6:
            capture_frame.flag = True
            capture_frame.delay = 0


capture_frame.count = 0
capture_frame.delay = 0
capture_frame.flag = False
capture_frame.check = True
# get number of jpg files in pics folder to avoid rewriting
capture_frame.name_count = len(glob.glob('pics/*.jpg'))


if __name__ == '__main__':

    # read config xml file
    tree = ET.parse("config.xml")
    config = tree.getroot()

    dev_id = int(config.find('CameraSettings/dev_id').text)

    vc = cv2.VideoCapture(dev_id)

    if vc.isOpened():
        # configure logger
        setup_logger()

        print "> starting...  [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
        print "> found " + str(capture_frame.name_count) + " image files in pics folder"

        # =============> video capture section

        # Define the codec and create VideoWriter object
        fourcc = cv2.cv.CV_FOURCC('X', 'V', 'I', 'D')
        video = cv2.VideoWriter('video.avi', fourcc, 25.0, res_1280_1024)

        print "> starting video capture"

        setup(dev_id, res_1280_1024, False, 0, 0, 0)

        print "> recording..."

        t_end = time.time() + video_duration

        while time.time() < t_end:
            # read frame
            retval, frame = vc.read()
            # write frame
            video.write(frame)

        print "> video capture finished"

        # =============> end of video capture section

        print "> starting picture capture"

        rt = RepeatedTimer(1, capture_frame)

        try:
            while True:
                retval, frame = vc.read()

                if capture_frame.count in pic_interval and capture_frame.check is True:
                    if capture_frame.count == pic_interval[0]:
                        setup(dev_id, res_2592_1944, False, 0, 0, 0)
                    if capture_frame.count == pic_interval[1]:
                        setup(dev_id, res_2048_1536, False, 0, 0, 0)

                    if capture_frame.count == pic_interval[2]:
                        setup(dev_id, res_2592_1944, True, 10, 1, 20)
                    if capture_frame.count == pic_interval[3]:
                        setup(dev_id, res_2048_1536, True, 10, 1, 20)

                    if capture_frame.count == pic_interval[4]:
                        setup(dev_id, res_2592_1944, True, 8, 1, 20)
                    if capture_frame.count == pic_interval[5]:
                        setup(dev_id, res_2048_1536, True, 8, 1, 20)

                    if capture_frame.count == pic_interval[6]:
                        setup(dev_id, res_2592_1944, True, 10, 1, 10)
                    if capture_frame.count == pic_interval[7]:
                        setup(dev_id, res_2048_1536, True, 10, 1, 10)

                    if capture_frame.count == pic_interval[8]:
                        setup(dev_id, res_2592_1944, True, 8, 1, 10)
                    if capture_frame.count == pic_interval[9]:
                        setup(dev_id, res_2048_1536, True, 8, 1, 10)

                    if capture_frame.count == pic_interval[10]:
                        break

                    capture_frame.flag = False
                    capture_frame.check = False
                    print "> configuring..."

        except KeyboardInterrupt:
            print "loop interrupted!"

        rt.stop()

        print "> picture capture finished"

        vc.release()
        video.release()
        cv2.destroyAllWindows()

    print "> program exit [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
