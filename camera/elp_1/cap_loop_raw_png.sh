#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./cap_loop_raw.sh [DEVICE] [CONFIGURATION FILE]
#
# [DEVICE]			for a list of devices run '$ v4l2-ctl --list-devices'
#					(e.g. /dev/video0)
# [CONFIG FILE]		name of configuration file to use without extension. Check
#					configuration files (.cfg) in 'config' folder
#					(e.g. config0)
# ----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
#
# Additional programs needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# ==================================================================================
# GSTREAMER SETTINGS
# ==================================================================================

# target device as an argument. Check with '$ v4l2-ctl --list-devices'
DEVICE=$1

# driver to use for communication with device
DRIVER=v4l2src

# video format. Check with '$ v4l2-ctl -d /dev/video1 --list-formats'.
# Uncomment the desired option
#FORMAT=image/jpeg
FORMAT=video/x-raw

# frame sizes. Check with '$ v4l2-ctl -d /dev/video1 --list-formats-ext'.
# Uncomment the desired option
#RESOLUTION="width=320,height=240"
#RESOLUTION="width=640,height=480"
#RESOLUTION="width=800,height=600"
#RESOLUTION="width=1024,height=768"
#RESOLUTION="width=1280,height=720"
#RESOLUTION="width=1280,height=1024"
#RESOLUTION="width=1600,height=1200"
#RESOLUTION="width=1920,height=1080"
#RESOLUTION="width=2048,height=1536"
RESOLUTION="width=2592,height=1944"

# frames per second
FPS=1/1

# timestamp and output name for files
TIMESTAMP=$(date +"%y%m%d-%H%M%S")
FOLDER=./sessions/${TIMESTAMP}
OUTPUT=${FOLDER}/${TIMESTAMP}\_frame_%04d.png

# ==================================================================================
# CREATE SESSION FOLDER
# ==================================================================================
mkdir -p sessions/${TIMESTAMP}

# ==================================================================================
# CONFIGURE CAMERA SETTINGS
# ==================================================================================

# target configuration file as an argument
CONFIG=$2

# run configuration script
./config/config.sh ${DEVICE} "config/${CONFIG}.cfg"

# ==================================================================================
# RUN gstreamer AND START A LOOP TO CAPTURE AND SAVE IMAGES
# ==================================================================================
echo "**"
echo "* gstreamer settings: resolution          = ${RESOLUTION}"
echo "*                     framerate           = ${FPS}"
echo "* Saving images to: ${FOLDER}"
echo "* Press CTRL+C to end script"
echo "**"

# echo for debugging purposes (true : enabled, false : disabled)
if (false); then
	echo gst-launch-1.0 -e ${DRIVER} device=${DEVICE} \
		! ${FORMAT},${RESOLUTION} \
		! videorate ! ${FORMAT},framerate=${FPS} \
		! multifilesink location=${OUTPUT}
fi

# -e switch makes gst to close properly when exited with CTRL+C
exec gst-launch-1.0 -e ${DRIVER} device=${DEVICE} \
	! ${FORMAT},${RESOLUTION} \
	! videorate ! ${FORMAT},framerate=${FPS} \
	! videoconvert ! pngenc ! multifilesink location=${OUTPUT}
	