# live video feed from the cameras (working)
gst-launch-1.0 v4l2src device=/dev/video1 ! video/x-raw,width=640,height=480 ! videoconvert ! xvimagesink
gst-launch-1.0 v4l2src device=/dev/video1 ! video/x-raw,width=640,height=480 ! videoconvert ! autovideosink
gst-launch-1.0 tcamsrc serial=47610022 ! video/x-raw,format=GRAY8,width=640,height=480 ! videoconvert ! autovideosink
gst-launch-1.0 v4l2src device=/dev/video1 ! video/x-raw,format=GRAY8,width=640,height=480 ! videoconvert ! autovideosink

# using video test source
gst-launch-1.0 -v -e videotestsrc pattern=snow ! video/x-raw,width=320,height=180,framerate=5/1 ! autovideosink
gst-launch-1.0 -v -e videotestsrc pattern=gradient ! video/x-raw,width=320,height=180,framerate=5/1 ! autovideosink
gst-launch-1.0 -v -e videotestsrc pattern=smpte ! video/x-raw,width=320,height=180,framerate=5/1 ! autovideosink

# videomixer example 1
gst-launch-1.0 \
videotestsrc pattern=1 ! \
video/x-raw,format=AYUV,framerate=10/1,width=100,height=100 ! \
videobox border-alpha=0 top=-70 bottom=-70 right=-220 ! \
videomixer name=mix sink_0::alpha=0.7 sink_1::alpha=0.5 ! \
videoconvert ! xvimagesink \
videotestsrc ! \
video/x-raw,format=AYUV,framerate=5/1,width=320,height=240 ! mix.

# videomixer example 2 (order matters: bottom-right corner first and then inverted z pattern)
gst-launch-1.0 \
videomixer name=mix ! \
videoconvert ! xvimagesink \
videotestsrc pattern=ball ! video/x-raw,width=320,height=180,framerate=15/1 ! videobox border-alpha=0 top=-180 left=-320 ! mix. \
videotestsrc pattern=gradient ! video/x-raw,width=320,height=180,framerate=5/1 ! videobox border-alpha=0 top=-180 left=0 ! mix. \
videotestsrc pattern=smpte ! video/x-raw,width=320,height=180,framerate=5/1 ! videobox border-alpha=0 top=0 left=-320 ! mix. \
videotestsrc pattern=snow ! video/x-raw,width=320,height=180,framerate=10/1 ! videobox border-alpha=0 top=0 left=0 ! mix.

# videomixer example 3
# see return warning below. Video was slow and it's possibly a computer 'too slow' issue. There was no timestamping
gst-launch-1.0 \
videomixer name=mix ! \
videoconvert ! xvimagesink \
videotestsrc pattern=gradient ! video/x-raw,format=AYUV,framerate=5/1,width=640,height=360 ! mix. \
v4l2src device=/dev/video1 ! video/x-raw,width=320,height=240 ! videobox border-alpha=0 top=0 left=0 ! mix.

# WARNING: from element /GstPipeline:pipeline0/GstXvImageSink:xvimagesink0: A lot of buffers are being dropped.
# Additional debug info:
# gstbasesink.c(2854): gst_base_sink_is_too_late (): /GstPipeline:pipeline0/GstXvImageSink:xvimagesink0:
# There may be a timestamping problem, or this computer is too slow.

# added queue and removed buffer limits. Still get slow video and dropped buffers. But CPU load is still low.
# Apparently, the muzer is the problem.
gst-launch-1.0 \
videomixer name=mix ! \
videoconvert ! autovideosink \
videotestsrc pattern=gradient ! video/x-raw,format=AYUV,framerate=5/1,width=640,height=360 ! queue ! mix. \
v4l2src device=/dev/video1 ! video/x-raw,width=320,height=240 ! videobox border-alpha=0 top=0 left=0 ! \
queue max-size-buffers=0 max-size-time=0 max-size-bytes=0 ! mix.

# example of 2 individual pipelines with independent sources (2 cameras) and sinks (frame capture as jpeg).
# It seems to work properly. Note: folders 'cam1' and 'cam2' must exist
gst-launch-1.0 -e \
v4l2src device=/dev/video1 ! image/jpeg,width=800,height=600 \
! videorate ! image/jpeg,framerate=1/1 ! multifilesink location="cam1/image-%06d.jpg" \
v4l2src device=/dev/video0 ! video/x-raw,width=640,height=480 \
! videorate ! video/x-raw,framerate=1/1 ! videoconvert ! jpegenc ! multifilesink location="cam2/image-%06d.jpg"

# example of 3 individual pipelines with independent sources (3 cameras) and sinks (frame capture as jpeg).
# It seems to work properly. Note: folders 'cam1' 'cam2' and 'cam3' must exist
gst-launch-1.0 -e \
v4l2src device=/dev/video1 ! image/jpeg,width=800,height=600 \
! videorate ! image/jpeg,framerate=1/1 ! multifilesink location="cam1/image-%06d.jpg" \
v4l2src device=/dev/video0 ! video/x-raw,width=640,height=480 \
! videorate ! video/x-raw,framerate=1/1 ! videoconvert ! jpegenc ! multifilesink location="cam2/image-%06d.jpg" \
tcamsrc serial=47610022 ! video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1 \
! videoconvert ! jpegenc ! multifilesink location="cam3/image-%06d.jpg"
