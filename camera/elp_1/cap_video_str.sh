#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./cap_video_str.sh [DEVICE] [CONFIG FILE] [RECORDING TIME]
#
# [DEVICE]			for a list of devices run '$ v4l2-ctl --list-devices'
#					(e.g. /dev/video0)
# [CONFIG FILE]		name of configuration file to use without extension. Check
#					configuration files (.cfg) in 'config' folder
#					(e.g. config0)
# [RECORDING TIME]	recording time of the video capture in mm:ss format
#					(e.g. 00:30)
# ----------------------------------------------------------------------------------
# Configures a UVC compatible device and records a video
# in a local folder.
#
# Additional programs needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- streamer ('$ sudo apt-get install streamer')
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
DRIVER=libv4l

# video format. Check with '$ v4l2-ctl -d /dev/video1 --list-formats'.
FORMAT=jpeg

# frame sizes. Check with '$ v4l2-ctl -d /dev/video1 --list-formats-ext'.
# Uncomment the desired option
#RESOLUTION=320x240
#RESOLUTION=640x480
RESOLUTION=800x600
#RESOLUTION=1024x768
#RESOLUTION=1280x720
#RESOLUTION=1280x1024
#RESOLUTION=1600x1200
#RESOLUTION=1920x1080
#RESOLUTION=2048x1536
#RESOLUTION=2592x1944

# record time as an argument (in m:ss format)
RECTIME=$3

# timestamp and output name for files
TIMESTAMP=$(date +"%y%m%d-%H%M%S")
FOLDER=./sessions/${TIMESTAMP}
OUTPUT=${FOLDER}/${TIMESTAMP}\_video.avi

# ==================================================================================
# CREATE SESSION FOLDER
# ==================================================================================
mkdir -p sessions
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
echo "*                     recording time      = ${RECTIME}"
echo "* Saving video to: ${FOLDER}"
echo "**"

exec streamer \
-D ${DRIVER} \
-c ${DEVICE} \
-s ${RESOLUTION} \
-f ${FORMAT} \
-t ${RECTIME} \
-b 30 \
-o ${OUTPUT}
