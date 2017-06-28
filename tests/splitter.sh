#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./splitter.sh [DEV1] [DEV2] [DEV3]
#
# [DEV1]			flag for device 1 (1:enabled / 0:disabled)
# [DEV2]			flag for device 2 (1:enabled / 0:disabled)
# [DEV3]			flag for device 3 (1:enabled / 0:disabled)
#
# ----------------------------------------------------------------------------------
# Creates  pipelines using gstreamer 
#
# Additional programs needed for this script:
#	- gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# take devices enable/disable flags as arguments
DEV1_EN=$1
DEV2_EN=$2
DEV3_EN=$3

# ==================================================================================
# DEFINE SOURCES
# ==================================================================================

# source settings for camera 1 (standard UVC camera -> laptop webcam)
VELEM1="v4l2src device=/dev/video0"
VCAPS1="video/x-raw,width=640,height=480,framerate=15/1"
VSOURCE1="${VELEM1} ! ${VCAPS1}"
VSINK1="videorate ! video/x-raw,framerate=1/1 ! videoconvert ! jpegenc ! multifilesink location=cam1/image-%06d.jpg"

# source settings for camera 2 (standard UVC camera)
VELEM2="v4l2src device=/dev/video1"
VCAPS2="image/jpeg,width=2592,height=1944"
VSOURCE2="${VELEM2} ! ${VCAPS2}"
VSINK2="videorate ! image/jpeg,framerate=1/1 ! multifilesink location=cam2/image-%06d.jpg"

# source settings for camera 3 (TIS camera with UVC mode on)
VELEM3="v4l2src device=/dev/video2"
VCAPS3="video/x-raw,format=GRAY8,width=1280,height=960,framerate=10/1"
VSOURCE3="${VELEM3} ! ${VCAPS3}"
VSINK3="videorate ! video/x-raw,framerate=1/1 ! videoconvert ! jpegenc ! multifilesink location=cam3/image-%06d.jpg"

# ==================================================================================
# CONSTRUCT GSTREAMER COMMAND
# ==================================================================================

GSTCMD=""

if (( "${DEV1_EN}" == 1 )); then
    GSTCMD="${GSTCMD} ${VSOURCE1} ! ${VSINK1}"
fi

if (( "${DEV2_EN}" == 1 )); then
    GSTCMD="${GSTCMD} ${VSOURCE2} ! ${VSINK2}"
fi

if (( "${DEV3_EN}" == 1 )); then
    GSTCMD="${GSTCMD} ${VSOURCE3} ! ${VSINK3}"
fi

# ==================================================================================
# RUN gstreamer AND START SIMULTANEOUS VIDEO LIVE FEED
# ==================================================================================

# echo for debugging purposes
echo gst-launch-1.0 -e ${GSTCMD}

# run command
exec gst-launch-1.0 -e ${GSTCMD}