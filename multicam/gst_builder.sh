#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./gst_builder.sh [DEVICE] [WIDTH] [HEIGHT] [FORMAT] [OUTPUT] [FRATEOUT] [FRATEIN]
#
# [DEVICE]			for a list of devices run '$ v4l2-ctl --list-devices'
#					(e.g. /dev/video0)
# [WIDTH]			Width of the frame in pixels (must match a valid resolution
#					setting together with the HEIGHT)
# [HEIGHT]			Height of the frame in pixels (must match a valid resolution
#					setting together with the WIDTH)
# [FORMAT]			Output format from the camera
#					(e.g. image/jpeg, video/x-raw, video/x-raw,format=GRAY8)
# [OUTPUT]			Output picture format
#					(e.g. jpg, png, tiff)
# [FRATEOUT]		Output framerate from gst sub-command
#					(e.g. 1/1)
# [FRATEIN]			Output framerate from the camera [optional]
#					(e.g. 15/1)
# ----------------------------------------------------------------------------------
# Builds a gstreamer sub-command for camera frame capture based on the inputs 
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# take camera settings as arguments
DEVICE=$1
WIDTH=$2
HEIGHT=$3
FORMAT=$4
OUTPUT=$5
FRATEOUT=$6

if [ -z "$7" ]; then
    FRATEIN="null"
else
    FRATEIN="$7"
fi

# build source elements and caps
VELEM="v4l2src device=${DEVICE}"
VCAPS="${FORMAT},width=${WIDTH},height=${HEIGHT}"

if (( "${FRATEIN}" != "null" )); then
    VCAPS="${VCAPS},framerate=${FRATEIN}"
fi

# build final source
VSOURCE="${VELEM} ! ${VCAPS}"

# build preliminary sink
VSINK="videorate ! ${FORMAT},framerate=${FRATEOUT}"

if [ "${FORMAT}" != "image/jpeg" ]; then
    if [ "${OUTPUT}" == "jpg" ]; then
    	VSINK="${VSINK} ! videoconvert ! jpegenc"
    fi
    if [ "${OUTPUT}" == "png" ]; then
    	VSINK="${VSINK} ! videoconvert ! pngenc"
    fi
    if [ "${OUTPUT}" == "tiff" ]; then
    	VSINK="${VSINK} ! videoconvert ! avenc_tiff"
    fi
fi

# build command with preliminary sink
GSTCMD="${VSOURCE} ! ${VSINK}"

# echo command
echo ${GSTCMD}
