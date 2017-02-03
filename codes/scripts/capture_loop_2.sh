#!/bin/bash
#
# Usage: capture_loop_2
#
# Updates an image every few seconds and saves it in a 
# folder. Each time the image is updated a second script
# is invoked to copy the image and save it with filename
# that includes a time stamp.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/update.sh
#
device=/dev/video1
video_codec=mjpeg
width=2592
height=1944
compression=5
fps=1
timestamp=$(date +"%y%m%d-%H:%M:%S")
output=./pics/frame_$timestamp\_%4d.jpg
# run ffmpeg and start a loop to capture and save images
exec ffmpeg -f v4l2 -i $device \
-vcodec $video_codec \
-s $width\x$height \
-qscale:v $compression \
-vf fps=$fps \
$output
#