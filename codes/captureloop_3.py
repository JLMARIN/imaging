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


def setup(device, width, height, pxlformat, brt, exp_auto, exp_abs):
    # configure camera settings using v4l2-ctl shell commands

    # build command
    command = 'v4l2-ctl' \
              + ' -d /dev/video' + str(device) \
              + ' --set-fmt-video=width=' + str(width) \
              + ',height=' + str(height) \
              + ',pixelformat=' + pxlformat \
              + ' -c brightness=' + str(brt) \
              + ',exposure_auto=' + str(exp_auto) \

    if exp_auto == 1:
        command = command + ',exposure_absolute=' + str(exp_abs)

    # execute shell command
    subprocess.call([command], shell=True)

    print "camera settings update:"
    print "    @resolution=" + str(width) + 'x' + str(height)
    print "    @pixel_format=" + pxlformat
    print "    @brightness=" + str(brt)
    print "    @exposure_auto=" + str(exp_auto)
    if exp_auto == 1:
        print "    @exposure_absolute=" + str(exp_abs)
    else:
        print "    @exposure_absolute=N/A"


def timer():
    timer.flag = True


timer.flag = False

frame_count = 0
# get number of jpg files in pics folder to avoid rewriting
frame_name_count = len(glob.glob('pics/*.jpg'))


if __name__ == '__main__':

    # read config xml file
    tree = ET.parse("config.xml")
    config = tree.getroot()

    # read camera settings from configuration xml file
    dev_id      =   int(config.find('CameraSettings/dev_id').text)
    pxl_fmt     =   config.find('CameraSettings/pixel_format').text
    brt         =   int(config.find('CameraSettings/brightness').text)
    exp_auto    =   int(config.find('CameraSettings/exposure_auto').text)
    exp_abs     =   int(config.find('CameraSettings/exposure_absolute').text)

    # configure logger
    setup_logger()

    print "> starting...  [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"

    # configure camera
    setup(dev_id, resolution[0], resolution[1], 'MJPG', brt, exp_auto, exp_abs)
    
    print "> found " + str(frame_name_count) + " image files in pics folder"
    
    rt = RepeatedTimer(1, timer)

    try:
        while True:
            if timer.flag is True:
                timer.flag = False
                frame_count += 1
                frame_name_count += 1

                filename = "pics/frame%04d.jpg" % frame_name_count
                command = "fswebcam -r 2592x1944 -d /dev/video1 " + str(filename)
                # execute shell command
                subprocess.call([command], shell=True)
                
                print "captured frame " + str(frame_count) + " -> saved as: frame%04d.jpg" % frame_name_count

    except KeyboardInterrupt:
        print "loop interrupted!"

    rt.stop()

    print "> program exit [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
