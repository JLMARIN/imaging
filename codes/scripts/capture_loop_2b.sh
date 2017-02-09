#!/bin/bash

# Usage: capture_loop_2b

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
# This version takes input arguments in order to configure
# the camera
#
# ARG 1 : target device
# ARG 2 : frame size
# ARG 3 : brightness
# ARG 4 : exposure_auto
# ARG 5 : exposure_absolute
# ARG 6 : number of frames
# ARG 7 : folder name
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

# ARG 1 : target device
device=$1
# ARG 2 : frame size
resolution=$2
# ARG 3 : brightness
brightness=$3
# ARG 4 : exposure_auto
exposure_auto=$4
# ARG 5 : exposure_absolute
exposure_absolute=$5
# ARG 6 : number of frames
num_frames=$6
# ARG 7 : folder name
out_folder=$7

# driver to use for communication with device
driver=libv4l

# video format. Check with '$ v4l2-ctl -d /dev/video1 --list-formats'.
# Uncomment the desired option
input_format=jpeg

# image quality. Sets the quality of the image and is a number from 0-100,
# with 100 being highest quality/largest filesize and 0 being the lowest
# quality/smallest filesize. Default is 75
quality=95

# frames per second
fps=1

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./sessions/$out_folder/$timestamp\_0000.jpeg

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
-t $num_frames \
-b 30 \
-j $quality \
-r $fps \
-o $output
