#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./adjuster.sh [CAM SET] [CAM INDEX]
#
# [CAM SET]         predefined camera set. Check cameraList.json in 'setup' folder
#                   (e.g. 0, 1, ...)
# [CAM INDEX]       index of the camera to use
#                   (e.g. 0, 1, ...)
# ----------------------------------------------------------------------------------
# Creates and runs pipelines using gstreamer for real time image visualization and
# focus measurement from a camera output.
#
# This script is intended to be used with the USB Camera HUB board and the
# DMM 42BUC03-ML cameras from The Imaging Source.
#
# Additional programs needed for this script:
#   - v4l-utils ('$ sudo apt-get install v4l-utils')
#   - gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#   - jq        ('$ sudo apt-get install jq')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

CAMSET=$1
CAMINDEX=$2

OUTPUTRATE="2/1"

# ==================================================================================
# LOAD CAMERA USB ID FROM 'cameraList.json' FILE
# ==================================================================================
DEVICE="$( jq -r ".camera_array[$CAMSET].cam$CAMINDEX" "setup/cameraList.json" )"

# ==================================================================================
# LOAD CAMERA CONFIGURATION FROM 'cameraSetup.json' FILE
# ==================================================================================
CAMERA="$( jq -r ".cam" "setup/cameraSetup.json" )"
CONFIG="$( jq -r ".config" "setup/cameraSetup.json" )"
WIDTH="$( jq -r ".width" "setup/cameraSetup.json" )"
HEIGHT="$( jq -r ".height" "setup/cameraSetup.json" )"
FORMAT="$( jq -r ".format" "setup/cameraSetup.json" )"
FRATE="$( jq -r ".frate" "setup/cameraSetup.json" )"
PICFORMAT="$( jq -r ".output" "setup/cameraSetup.json" )"

# ==================================================================================
# CONFIGURE CAMERA AND BUILD GST COMMAND
# ==================================================================================
# run configuration script
../camera/${CAMERA}/config/config.sh ${DEVICE} "../camera/${CAMERA}/config/${CONFIG}.cfg" X $((i+1))

# remove short log fle
rm short_log.log

# build gst command
VCAPS="${FORMAT},width=${WIDTH},height=${HEIGHT},framerate=${FRATE}"

GSTCMD="v4l2src device=${DEVICE} ! ${VCAPS} ! tee name=t ! queue ! videoconvert ! autovideosink t. ! queue ! videorate ! ${FORMAT},framerate=${OUTPUTRATE} !videoconvert ! pngenc ! multifilesink location=tmp_img.png"

# ==================================================================================
# RUN gstreamer AND START PIPELINES
# ==================================================================================

# echo for debugging purposes
#echo gst-launch-1.0 -e ${GSTCMD}

# run command
gst-launch-1.0 -e ${GSTCMD} &

sleep 5

while (true)
do
    focus=`./measurefocus/fmeasure/fmeasure tmp_img.png`
    echo -ne "focus = $focus\r"
    sleep 1
done

rm tmp_img.png
