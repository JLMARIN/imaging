from PIL import Image
import select
import v4l2capture
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
    size_x, size_y = video.set_format(args[0][0], args[0][1])
    print "camera settings update:"
    print "    @resolution=" + str(size_x) + 'x' + str(size_y)


def setup(device, brt, exp_auto, exp_abs):
    # stop video capture if on before updating camera settings
    video.stop()

    # change camera resolution
    set_resolution(resolution)

    # configure camera settings using v4l2-ctl shell commands
    # build command
    command = 'v4l2-ctl' \
              + ' -d /dev/video' + str(device) \
              + ' -c brightness=' + str(brt) \
              + ',exposure_auto=' + str(exp_auto) \

    if exp_auto == 1:
        command = command + ',exposure_absolute=' + str(exp_abs)

    # execute shell command
    subprocess.call([command], shell=True)

    print "    @brightness=" + str(brt)
    print "    @exposure_auto=" + str(exp_auto)
    if exp_auto == 1:
        print "    @exposure_absolute=" + str(exp_abs)
    else:
        print "    @exposure_absolute=N/A"

    print "configuring..."

    # Create a buffer to store image data in. This must be done before
    # calling 'start' if v4l2capture is compiled with libv4l2. Otherwise
    # raises IOError.
    video.create_buffers(10)

    # Send the buffer to the device. Some devices require this to be done
    # before calling 'start'.
    video.queue_all_buffers()

    # Start the device. This lights the LED if it's a camera that has one.
    video.start()

    # Wait for the device to fill the buffer.
    select.select((video,), (), ())
    #time.sleep(3)


def capture_frame():
    capture_frame.count += 1
    capture_frame.name_count += 1

    image_data = video.read_and_queue()

    image = Image.frombytes("RGB", (resolution[0], resolution[1]), image_data)
    image.save("pics/frame%04d.jpg" % capture_frame.name_count)

    print "captured frame " + str(capture_frame.count) + " -> saved as: frame%04d.jpg" % capture_frame.name_count


capture_frame.count = 0
# get number of jpg files in pics folder to avoid rewriting
capture_frame.name_count = len(glob.glob('pics/*.jpg'))


if __name__ == '__main__':

    # read config xml file
    tree = ET.parse("config.xml")
    config = tree.getroot()

    # read camera settings from configuration xml file
    dev_id = int(config.find('CameraSettings/dev_id').text)
    brt = int(config.find('CameraSettings/brightness').text)
    exp_auto = int(config.find('CameraSettings/exposure_auto').text)
    exp_abs = int(config.find('CameraSettings/exposure_absolute').text)

    video = v4l2capture.Video_device("/dev/video" + str(dev_id))

    # configure logger
    setup_logger()

    print "> starting...  [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"

    # configure camera
    setup(dev_id, brt, exp_auto, exp_abs)

    print "> found " + str(capture_frame.name_count) + " image files in pics folder"

    rt = RepeatedTimer(1, capture_frame)

    try:
        while True:
            pass
    except KeyboardInterrupt:
        print "loop interrupted!"

    rt.stop()

    video.close()

    print "> program exit [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
