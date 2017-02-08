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


# define resolution tuples in format (width, height)
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

# initialize global variable for device id
dev_id = 0

# define global name 'frame' before using
frame = 0

# define array of counter values for camera settings update
capture_duration_sec = 10
video_on = False
video_duration_sec = 30


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


def setup(device, res, brt, exp_auto, exp_abs):
    # change camera resolution
    set_resolution(res)

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


def capture_frame():
    capture_frame.iter += 1

    if capture_frame.iter > capture_frame.iter_top:
        capture_frame.enable = 0

    if capture_frame.enable:
        capture_frame.count += 1
        capture_frame.name_count += 1

        image_data = video.read_and_queue()

        image = Image.frombytes("RGB", (resolution[0], resolution[1]), image_data)
        image.save("pics/frame%04d.jpg" % capture_frame.name_count)

        print "captured frame " + str(capture_frame.count) + " -> saved as: frame%04d.jpg" % capture_frame.name_count


def capture_loop(device, delay_ms, duration_sec, res, brt, exp_auto, exp_abs):
    setup(device, res, brt, exp_auto, exp_abs)

    capture_frame.enable = 1
    capture_frame.iter = 0
    capture_frame.iter_top = duration_sec / (delay_ms / 1000)

    rt = RepeatedTimer(delay_ms / 1000, capture_frame)

    try:
        while capture_frame.enable:
            pass
    except KeyboardInterrupt:
        capture_loop.keepGoing = 0
        print "loop interrupted!"

    rt.stop()


capture_frame.enable = 0
capture_frame.iter = 0
capture_frame.iter_top = 0
capture_frame.count = 0
# get number of jpg files in pics folder to avoid rewriting
capture_frame.name_count = len(glob.glob('pics/*.jpg'))

capture_loop.keepGoing = 1


if __name__ == '__main__':

    # read config xml file
    tree = ET.parse("config.xml")
    config = tree.getroot()

    dev_id = int(config.find('CameraSettings/dev_id').text)

    # configure logger
    setup_logger()

    print "> starting...  [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
    print "> found " + str(capture_frame.name_count) + " image files in pics folder"

    # =============> video capture section
    if video_on is True:
        print "> starting video capture"

        print "> recording..."

        # t_end = time.time() + video_duration

        # while time.time() < t_end:

        print "> video capture finished"

    # =============> end of video capture section

    # =============> image capture section
    print "> starting picture capture"

    # -------- configuration 1
    if capture_loop.keepGoing and True:
        video = v4l2capture.Video_device("/dev/video" + str(dev_id))
        resolution = res_2592_1944
        capture_loop(dev_id, 1000, capture_duration_sec, resolution, 8, 3, 4)
        video.close()
        del video

    # -------- configuration 2
    if capture_loop.keepGoing and True:
        video = v4l2capture.Video_device("/dev/video" + str(dev_id))
        resolution = res_2048_1536
        capture_loop(dev_id, 1000, capture_duration_sec, resolution, 8, 3, 4)
        video.close()
        del video

    # -------- configuration 3
    if capture_loop.keepGoing and True:
        video = v4l2capture.Video_device("/dev/video" + str(dev_id))
        resolution = res_2592_1944
        capture_loop(dev_id, 1000, capture_duration_sec, resolution, 8, 1, 4)
        video.close()
        del video

    # -------- configuration 4
    if capture_loop.keepGoing and True:
        video = v4l2capture.Video_device("/dev/video" + str(dev_id))
        resolution = res_2048_1536
        capture_loop(dev_id, 1000, capture_duration_sec, resolution, 8, 1, 40)
        video.close()
        del video

    # =============> end of image capture section

    print "> program exit [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
