#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./gst_builder.sh [WIDTH] [HEIGHT] [FORMAT] [OUTPUT] [FRATE]
#
# [WIDTH]			Width of the frame in pixels (must match a valid resolution
#					setting together with the HEIGHT)
# [HEIGHT]			Height of the frame in pixels (must match a valid resolution
#					setting together with the WIDTH)
# [FORMAT]			Output format from the camera
#					(e.g. image/jpeg, video/x-raw, video/x-raw,format=GRAY8)
# [OUTPUT]			Output picture format
#					(e.g. jpg, png, tiff)
# [FRATE]			Output framerate from the camera
#					(e.g. 15/1)
# ----------------------------------------------------------------------------------
# Builds a gstreamer sub-command for camera frame capture based on the inputs 
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# take camera settings as arguments
WIDTH=$1
HEIGHT=$2
FORMAT=$3
OUTPUT=$4
FRATE=$5

# build source elements and caps
VCAPS="${FORMAT},width=${WIDTH},height=${HEIGHT},framerate=${FRATE}"

if [ "${FORMAT}" != "image/jpeg" ]; then
    if [ "${OUTPUT}" == "jpg" ]; then
    	VSINK="videoconvert ! jpegenc"
    fi
    if [ "${OUTPUT}" == "png" ]; then
    	VSINK="videoconvert ! pngenc"
    fi
    if [ "${OUTPUT}" == "tiff" ]; then
    	VSINK="videoconvert ! avenc_tiff"
    fi
fi

# build command with preliminary sink
GSTCMD="${VCAPS} ! ${VSINK}"

# echo command
echo ${GSTCMD}
