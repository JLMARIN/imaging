#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./live_video.sh [DEVICE] [CONFIGURATION FILE]
#
# [DEVICE]			for a list of devices run '$ v4l2-ctl --list-devices'
#					(e.g. /dev/video0)
# [CONFIG FILE]		name of configuration file to use without extension. Check
#					configuration files (.cfg) in 'config' folder
#					(e.g. config0)
# ----------------------------------------------------------------------------------
# Configures a UVC compatible device and shows a live video feed on screen.
#
# Additional programs needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# ==================================================================================
# LOAD CONFIGURATION FILE
# ==================================================================================

# target configuration file as an argument
CONFIG=$2

# load configuration file
source config/${CONFIG}.cfg

# ==================================================================================
# GSTREAMER SETTINGS
# ==================================================================================

# target device as an argument. Check with '$ v4l2-ctl --list-devices'
DEVICE=$1

# driver to use for communication with device
DRIVER=v4l2src

# video format. Check with '$ v4l2-ctl -d /dev/video1 --list-formats'.
FORMAT=video/x-raw,format=GRAY8

# frame sizes. Check with '$ v4l2-ctl -d /dev/video1 --list-formats-ext'.
# Uncomment the desired option
#RESOLUTION="width=320,height=240"
#RESOLUTION="width=640,height=480"
RESOLUTION="width=1280,height=960"

# frame per second on camera output (uncomment the desired option)
#	- 10fps is only available for 1280x960
#	- 60fps is only available for 320x240, 640x480
#FPS_CAM=60/1
FPS_CAM=30/1
#FPS_CAM=25/1
#FPS_CAM=15/1
#FPS_CAM=10/1

# frames per second for output video
FPS_VID=$FPS_CAM

# ==================================================================================
# RUN v4l2-ctl TO CONFIGURE CAMERA SETTINGS
# ==================================================================================
v4l2-ctl -d ${DEVICE} \
-c brightness=${BRIGHTNESS},gain=${GAIN},exposure_absolute=${EXPOSURE_ABSOLUTE}
echo "**"
echo "* v4l2-ctl settings:  brightness          = ${BRIGHTNESS}"
echo "*                     gain                = ${GAIN}"
echo "*                     exposure_absolute   = ${EXPOSURE_ABSOLUTE}"
echo "**"

# ==================================================================================
# RUN gstreamer AND START VIDEO FEED
# ==================================================================================
echo "**"
echo "* gstreamer settings: resolution          = ${RESOLUTION}"
echo "*                     framerate           = ${FPS_VID}"
echo "* Press CTRL+C to end script"
echo "**"

# echo for debugging purposes (true : enabled, false : disabled)
if (false); then
	echo gst-launch-1.0 -e ${DRIVER} device=${DEVICE} \
		! ${FORMAT},${RESOLUTION},framerate=${FPS_CAM} \
		! videorate ! ${FORMAT},framerate=${FPS_VID} \
		! videoconvert ! autovideosink
fi

# -e switch makes gst to close properly when exited with CTRL+C
exec gst-launch-1.0 -e ${DRIVER} device=${DEVICE} \
	! ${FORMAT},${RESOLUTION},framerate=${FPS_CAM} \
	! videorate ! ${FORMAT},framerate=${FPS_VID} \
	! videoconvert ! autovideosink
