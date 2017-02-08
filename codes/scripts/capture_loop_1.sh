#!/bin/bash

# Usage: capture_loop_1

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
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

# target device (name may be different). Check with '$ v4l2-ctl --list-devices'
device=/dev/video3

# video format. Check with '$ ffmpeg -f v4l2 -list_formats all -i /dev/video1'
# or '$ v4l2-ctl -d /dev/video1 --list-formats-ext' for extended information.
# Uncomment the desired option
input_format=mjpeg
#input_format=yuyv422

# frame sizes. Check with '$ ffmpeg -f v4l2 -list_formats all -i /dev/video1'.
# Uncomment the desired option
#resolution=320x240
#resolution=640x480
#resolution=800x600
#resolution=1024x768
#resolution=1280x720
#resolution=1280x1024
#resolution=1600x1200
#resolution=1920x1080
#resolution=2048x1536
resolution=2592x1944

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

# video quantizer scale. Sets the quality of the video and is a number from 2-31,
# with 1 being highest quality/largest filesize and 31 being the lowest
# quality/smallest filesize. The range 2-5 is a good balance.
compression=5

# frames per second
fps=1

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./sessions/$timestamp/$timestamp\_%4d.jpg

# filter expression
#filter="fps=$fps, drawtext=fontfile=/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf: fontsize=30: text='$timestamp\_%{eif\:n+1\:d}': x=0: y=h-(1*lh): fontcolor=white: box=1: boxcolor=0x00000999"
filter="fps=$fps"

# configure log file
export FFREPORT=file=sessions/$timestamp/$timestamp.log:level=32

# ==================================================================================
# create session folder
# ==================================================================================
mkdir -p sessions/$timestamp

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
-input_format $input_format \
-s $resolution \
-i $device \
-qscale:v $compression \
-vf "$filter" \
-report \
$output
