#!/bin/bash

# Usage: capture_loop_2

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
#
# Two programs are needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- streamer ('$ sudo apt-get install streamer')
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
driver=libv4l

# video format. Check with '$ v4l2-ctl -d /dev/video1 --list-formats'.
# Uncomment the desired option
input_format=jpeg

# frame sizes. Check with '$ v4l2-ctl -d /dev/video1 --list-formats-ext'.
# Uncomment the desired option
#resolution=320x240
#resolution=640x480
#resolution=800x600
#resolution=1024x768
#resolution=1280x720
#resolution=1280x1024
#resolution=1600x1200
#resolution=1920x1080
resolution=2048x1536
#resolution=2592x1944

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

# image quality. Sets the quality of the image and is a number from 0-100,
# with 100 being highest quality/largest filesize and 0 being the lowest
# quality/smallest filesize. Default is 75
quality=95

# frames per second
fps=1

# number of frames
frames=1000

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./sessions/$timestamp\_streamer/$timestamp\_0000.jpeg

# ==================================================================================
# create session folder
# ==================================================================================
mkdir -p sessions/$timestamp\_streamer

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
# run streamer and start a loop to capture and save images
# ==================================================================================

exec streamer \
-D $driver \
-c $device \
-s $resolution \
-f $input_format \
-t $frames \
-b 30 \
-j $quality \
-r $fps \
-o $output
