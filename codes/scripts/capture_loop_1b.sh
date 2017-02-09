#!/bin/bash

# Usage: capture_loop_1b

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
#	- ffmpeg ('$ sudo apt-get install ffmpeg')
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

# video quantizer scale. Sets the quality of the video and is a number from 2-31,
# with 1 being highest quality/largest filesize and 31 being the lowest
# quality/smallest filesize. The range 2-5 is a good balance.
compression=5

# frames per second
fps=1

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./sessions/$out_folder/$timestamp\_%4d.jpg

# filter expression
filter="fps=$fps, drawtext=fontfile=/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf: fontsize=30: text='$timestamp\_%{eif\:n+1\:d}': x=0: y=h-(1*lh): fontcolor=white: box=1: boxcolor=0x00000999"
#filter="fps=$fps"

# configure log file
export FFREPORT=file=sessions/$out_folder/$timestamp.log:level=32

# ==================================================================================
# run v4l2-ctl to configure camera settings
# ==================================================================================
if (( "$exposure_auto" == 3 )); then
# 	exposure_auto: 3 (aperture priority mode)
	v4l2-ctl -d $device \
	-c brightness=$brightness,exposure_auto=$exposure_auto
	echo camera configuration: brightness=$brightness, exposure_auto=$exposure_auto
else
# 	exposure_auto: 1 (manual mode)
	v4l2-ctl -d $device \
	-c brightness=$brightness,exposure_auto=$exposure_auto,exposure_absolute=$exposure_absolute
	echo camera configuration: brightness=$brightness, exposure_auto=$exposure_auto, exposure_absolute=$exposure_absolute
fi

# ==================================================================================
# run ffmpeg and start a loop to capture and save images
# ==================================================================================
exec ffmpeg -f v4l2 \
-s $resolution \
-i $device \
-vframes $num_frames \
-qscale:v $compression \
-vf "$filter" \
-report \
$output
