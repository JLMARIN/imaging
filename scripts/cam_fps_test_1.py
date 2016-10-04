import cv2
import time

mode = 0  # 0: res(1280x1024), 1: res(2592x1944)

if __name__ == '__main__':
    vc = cv2.VideoCapture(0)

    if vc.isOpened():
        if mode == 0:
            vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 1280)  # set frame width in pixels
            vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1024)  # set frame height in pixels
        elif mode == 1:
            vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, 2592)  # set frame width in pixels (2592 max)
            vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, 1944)  # set frame height in pixels (1944 max)

        # get(CV_CAP_PROP_FPS) doesn't work wtih webcams
        fps = vc.get(cv2.cv.CV_CAP_PROP_FPS)
        print "Frames per second using video.get(cv2.cv.CV_CAP_PROP_FPS): {0}".format(fps)

        # Number of frames to capture
        num_frames = 120

        print "Capturing {0} frames".format(num_frames)

        # Start time
        start = time.time()

        # Grab a few frames
        for i in xrange(0, num_frames):
            ret, frame = vc.read()

        # End time
        end = time.time()

        # Time elapsed
        seconds = end - start
        print "Time taken : {0} seconds".format(seconds)

        # Calculate frames per second
        fps = num_frames / seconds
        print "Estimated frames per second : {0}".format(fps)

        # Release video
        vc.release()
        cv2.destroyAllWindows()

    print "program exit"
