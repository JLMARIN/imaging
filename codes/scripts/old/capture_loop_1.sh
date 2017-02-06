#!/bin/bash
#
# Usage: capture_loop_1
#
# Updates an image every few seconds and saves it in a 
# folder. Each time the image is updated a second script
# is invoked to copy the image and save it with filename
# that includes a time stamp.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/update.sh
#
rename=./rename_file.sh
#
exec fswebcam -c fswebcam_01.conf --exec $rename
#