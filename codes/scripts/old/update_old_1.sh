#!/bin/bash
#
# Usage: update
#
# Updates an image every few seconds and saves it in a 
# folder. Each time the image is updated a second script
# is invoked to copy the image and save it with filename
# that includes a time stamp.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/update.sh
#
width=2592
height=1944
interval=1
output=/home/falcon/Documents/jorge/imaging/codes/scripts/pics/frame.jpg
capture=/home/falcon/Documents/jorge/imaging/codes/scripts/capture.sh
#
exec fswebcam -d /dev/video1 -p MJPEG \
--timestamp '%d %b %y %H:%M:%S (%Z)' \
-r $height\x$width \
--banner-colour '#FF000000' \
--line-colour '#FF000000' \
--exec $capture \
--loop $interval $output
#