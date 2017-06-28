#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./cap_loop_tis.sh [DEVICE] [CONFIGURATION FILE] [SERIAL]
#
# [DEVICE]			for a list of devices run '$ v4l2-ctl --list-devices'
#					(e.g. /dev/video0)
# [CONFIG FILE]		name of configuration file to use without extension. Check
#					configuration files (.cfg) in 'config' folder
#					(e.g. config0)
# [SERIAL]			serial of the TIS camera (optional). If not provided, hardwired
#					value is used)
# ----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
#
# Additional programs needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#	- tiscamera software package (https://github.com/TheImagingSource/tiscamera)
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# serial of the camera
if [ -z "$3" ]; then
    SERIAL=47610022
else
    SERIAL="$3"
fi

# ==================================================================================
# GSTREAMER SETTINGS
# ==================================================================================

# target device as an argument. Check with '$ v4l2-ctl --list-devices'
DEVICE=$1

# driver to use for communication with device
DRIVER=tcamsrc

# frame sizes. Check with '$ v4l2-ctl -d /dev/video1 --list-formats-ext'.
# Uncomment the desired option
#RESOLUTION="width=320,height=240"
#RESOLUTION="width=640,height=480"
RESOLUTION="width=1280,height=960"

# frame per second on camera output (uncomment the desired option)
#	- 10fps is only available for 1280x960
#	- 60fps is only available for 320x240, 640x480
#FPS_CAM=60/1
#FPS_CAM=30/1
#FPS_CAM=25/1
#FPS_CAM=15/1
FPS_CAM=10/1

# timestamp and output name for files
TIMESTAMP=$(date +"%y%m%d-%H%M%S")
FOLDER=./sessions/${TIMESTAMP}
OUTPUT=${FOLDER}/${TIMESTAMP}\_frame_%04d.jpg

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
echo "*                     framerate           = ${FPS_CAM}"
echo "* Saving images to: ${FOLDER}"
echo "* Press CTRL+C to end script"
echo "**"

# There is a bug when using tcamsrc or tcambin where the use of videorate for changing
# the frame rate of a video feed does not work. So for now, only the native frame rates
# offered by the camera can be used

# echo for debugging purposes
echo gst-launch-1.0 -e ${DRIVER} serial=${SERIAL} \
	! video/x-raw,format=GRAY8,${RESOLUTION},framerate=${FPS_CAM} \
	! videoconvert ! jpegenc ! multifilesink location=${OUTPUT}

# -e switch makes gst to close properly when exited with CTRL+C
exec gst-launch-1.0 -e ${DRIVER} serial=${SERIAL} \
	! video/x-raw,format=GRAY8,${RESOLUTION},framerate=${FPS_CAM} \
	! videoconvert ! jpegenc ! multifilesink location=${OUTPUT}
