gst-launch-1.0 -e v4l2src device=/dev/video1 \
! video/x-raw,width=1280,height=960 \
! videoconvert ! pngenc ! filesink location=frame01.png

gst-launch-1.0 -e v4l2src device=/dev/video1 \
! video/x-raw,width=1280,height=960 \
! videoconvert ! jpegenc ! filesink location=frame02.jpg

gst-launch-1.0 -e v4l2src device=/dev/video1 \
! image/jpeg,width=1280,height=960 \
! filesink location=frame03.jpg

gst-launch-1.0 -e v4l2src device=/dev/video1 \
! video/x-raw,width=1280,height=960 \
! videoconvert ! avenc_tiff ! filesink location=frame04.tiff


gst-launch-1.0 -e v4l2src device=/dev/video1 \
! video/x-raw,width=1280,height=960 \
! videoconvert ! pnmenc ! filesink location=frame05.pnm

