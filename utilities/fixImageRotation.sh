#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./fixImageRotation.sh [PATH] [CAMERA INDEX]
#
# [PATH]            path of the fodler containing the pictures
#                   (e.g. ../../saved\ sessions/clean\ sessions/spec3/folder)
# [CAMERA INDEX]    camera index of the set of pictures to fix
#                   (e.g. cam_1 or cam_2 or cam_3)
#-----------------------------------------------------------------------------------
# Finds pictures taken from a given camera inside a given folder and fixes
# orientation by rotating the image. The file is rewritten.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# take directory as argument 1
DIRECTORY=$1

# take camera index as argument 2
CAM=$2

# go into directory
cd "${DIRECTORY}"

# cycle through pictures and fix orientation
for i in *${CAM}.jpg; do
    convert $i -rotate 90 $i
    echo "-> fixed orientation of image: $i"
done

echo "done!"
