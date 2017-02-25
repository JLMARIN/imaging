#!/bin/bash

# Usage: capture_loop_3

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
#
# Two programs are needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# define camera configuration variables
# ==================================================================================

# target device as an argument. Check with '$ v4l2-ctl --list-devices'
device=$1

# driver to use for communication with device
driver=v4l2src

# video format. Check with '$ v4l2-ctl -d /dev/video1 --list-formats'.
# Uncomment the desired option
input_format=image/jpeg
#input_format=video/x-raw

# frame sizes. Check with '$ v4l2-ctl -d /dev/video1 --list-formats-ext'.
# Uncomment the desired option
#resolution="width=320,height=240"
#resolution="width=640,height=480"
#resolution="width=800,height=600"
#resolution="width=1024,height=768"
#resolution="width=1280,height=720"
#resolution="width=1280,height=1024"
#resolution="width=1600,height=1200"
#resolution="width=1920,height=1080"
#resolution="width=2048,height=1536"
resolution="width=2592,height=1944"

# camera settings. Check options and values with '$ v4l2-ctl -d /dev/video1 --list-ctrls'

# default settings: 	brightness=8	/	exposure_auto=3		/	exposure_absoulte=N/A
# custom settings 1: 	brightness=12	/	exposure_auto=1		/	exposure_absoulte=15

#	brightness:
#		@ type		int
#		@ min		0
#		@ max		15
#		@ step		1
#		@ default	8
brightness=8
#	exposure_auto:
#		@ type		menu
#		@ min		0
#		@ max		3
#		@ default	3
#		@ options	1:manual mode
#		 			3:aperture priority mode
exposure_auto=3
#	exposure_absolute:
#		@ type		int
#		@ min		4
#		@ max		5000
#		@ step		1
#		@ default	625
#		@ note		used only when exposure_auto=1
exposure_absolute=15

# frames per second
fps=1/1

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./sessions/$timestamp\_gstreamer/$timestamp\_%04d.jpg

# ==================================================================================
# create session folder
# ==================================================================================
mkdir -p sessions/$timestamp\_gstreamer

# ==================================================================================
# run v4l2-ctl to configure camera settings
# ==================================================================================
if (( "$exposure_auto" == 3 )); then
# 	exposure_auto: 3 (aperture priority mode)
	v4l2-ctl -d $device \
	-c brightness=$brightness,exposure_auto=$exposure_auto
	echo \>\>\> camera configuration: brightness=$brightness, exposure_auto=$exposure_auto
else
# 	exposure_auto: 1 (manual mode)
	v4l2-ctl -d $device \
	-c brightness=$brightness,exposure_auto=$exposure_auto,exposure_absolute=$exposure_absolute
	echo \>\>\> camera configuration: brightness=$brightness, exposure_auto=$exposure_auto, exposure_absolute=$exposure_absolute
fi

# ==================================================================================
# run gstreamer and start a loop to capture and save images
# ==================================================================================

VSOURCE="$driver device=$device ! $input_format,$resolution"
VDECODE="videorate ! $input_format,framerate=$fps"
VSINK="multifilesink location=$output"

exec gst-launch-1.0 -e \
$VSOURCE \
! $VDECODE \
! $VSINK
