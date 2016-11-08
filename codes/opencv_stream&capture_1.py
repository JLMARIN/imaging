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


if __name__ == '__main__':

    vc = cv2.VideoCapture(0)

    if vc.isOpened():
        # set resolution
        set_resolution(resolution)

        count = 0

        while True:
            retval, frame = vc.read()
            rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2BGRA)

            cv2.imshow('frame', rgb)

            key = cv2.waitKey(1)
            if key & 0xFF == ord('s'):
                out = cv2.imwrite("frame%04d.jpg" % count, frame)
                count += 1

            if key & 0xFF == ord('q'):
                break

        vc.release()
        cv2.destroyAllWindows()

    print "program exit"
