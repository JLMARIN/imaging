import cv2
import time

# define list of resolution tuples in format (width,height)
resolutions = [(320,240),   \
               (640,480),   \
               (800,600),   \
               (1024,768),  \
               (1280,720),  \
               (1280,1024), \
               (1600,1200), \
               (1920,1080), \
               (2048,1536), \
               (2592,1944)]

def set_resolution( *args ):
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, args[0][0])   # set frame width in pixels
    vc.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, args[0][1])  # set frame height in pixels

if __name__ == '__main__':
    vc = cv2.VideoCapture(0)

    if vc.isOpened():
        # set resolution
        set_resolution(resolutions[9])

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

