#!/usr/bin/python
#
# python-v4l2capture
#
# This file is an example on how to capture a picture with
# python-v4l2capture.
#
# 2009, 2010 Fredrik Portstrom
#
# I, the copyright holder of this file, hereby release it into the
# public domain. This applies worldwide. In case this is not legally
# possible: I grant anyone the right to use this work for any
# purpose, without any conditions, unless such conditions are
# required by law.

#import Image
from PIL import Image
import select
import v4l2capture

# Open the video device.
video = v4l2capture.Video_device("/dev/video1")

# Configure size and format for the device
size_x, size_y = video.set_format(2592, 1944, fourcc='MJPG')

# Create a buffer to store image data in. This must be done before
# calling 'start' if v4l2capture is compiled with libv4l2. Otherwise
# raises IOError.
video.create_buffers(20)

# Send the buffer to the device. Some devices require this to be done
# before calling 'start'.
video.queue_all_buffers()

# Start the device. This lights the LED if it's a camera that has one.
video.start()

# Wait for the device to fill the buffer.
select.select((video,), (), ())

# Read frame and close video
image_data = video.read()
video.close()

# Save frame to file
image = Image.frombytes("YCbCr", (size_x, size_y), image_data)
image.save("v4l2cap_image.jpg")
print "Saved v4l2cap_image.jpg (Size: " + str(size_x) + " x " + str(size_y) + ")"
