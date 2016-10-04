import cv2

# NOTE: this code only works with OpenCV version 3.0.0 or higher

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
    vc.set(cv2.CAP_PROP_FRAME_WIDTH, args[0][0])   # set frame width in pixels
    vc.set(cv2.CAP_PROP_FRAME_HEIGHT, args[0][1])  # set frame height in pixels
 
def read_settings():
	print "resolution = " , int(vc.get(cv2.CAP_PROP_FRAME_WIDTH)), "x" , int(vc.get(cv2.CAP_PROP_FRAME_HEIGHT)), " / FPS = " , vc.get(cv2.CAP_PROP_FPS)
    #print "codec = " , vc.get(cv2.CAP_P,ROP_FOURCC)
    #print "format = " , vc.get(cv2.CAP_PROP_FORMAT)
    #print "brightness = " , vc.get(cv2.CAP_PROP_BRIGHTNESS)

def measure_single( index ):
	# set resolution
    set_resolution(resolutions[index])
    # read and print setup
    read_settings()

def measure_all():
	for res in resolutions:
		# set resolution
	    set_resolution(res)
	    # read and print setup
	    read_settings()

if __name__ == '__main__':
    vc = cv2.VideoCapture(1)

    if vc.isOpened():
        measure_single(0)
        #measure_all()
        vc.release()

	print "program exit"

