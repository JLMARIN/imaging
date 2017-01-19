import cv2
import time
import subprocess
import xml.etree.ElementTree as ET

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


def setup(device):
    set_resolution(resolution)

    # retrieve camera configuration values from config.ini file
    brt = int(config.find('CameraSettings/brightness').text)
    exp_auto = int(config.find('CameraSettings/exposure_auto').text)
    exp_abs = int(config.find('CameraSettings/exposure_absolute').text)

    # configure camera settings using v4l2-ctl as a shell command
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


if __name__ == '__main__':

    # read config xml file
    tree = ET.parse("config.xml")
    config = tree.getroot()

    dev_id = int(config.find('CameraSettings/dev_id').text)

    vc = cv2.VideoCapture(dev_id)

    if vc.isOpened():
        print "> starting...  [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"

        # configure camera
        setup(dev_id)

        count = 0

        while True:
            retval, frame = vc.read()
            rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2BGRA)

            cv2.imshow('frame', rgb)

            key = cv2.waitKey(1)
            if key & 0xFF == ord('s'):
                out = cv2.imwrite("pics/stream_capture%04d.jpg" % count, frame)
                print "captured frame " + str(count)
                count += 1

            if key & 0xFF == ord('q'):
                print "loop interrupted!"
                break

        vc.release()
        cv2.destroyAllWindows()

    print "> program exit [" + str(time.strftime("%Y%m%d-%H%M%S")) + "]"
