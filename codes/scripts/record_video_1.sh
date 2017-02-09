#!/bin/bash

# Usage: record_video_1

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and records a video
# while saving it in a local folder.
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
resolution=1280x1024
#resolution=1600x1200
#resolution=1920x1080
#resolution=2048x1536
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

# record time in m:ss format
rec_time=0:30

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./sessions/$timestamp\_streamer/$timestamp\_.avi

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
	echo camera configuration: brightness=$brightness, exposure_auto=$exposure_auto
else
# 	exposure_auto: 1 (manual mode)
	v4l2-ctl -d $device \
	-c brightness=$brightness,exposure_auto=$exposure_auto,exposure_absolute=$exposure_absolute
	echo camera configuration: brightness=$brightness, exposure_auto=$exposure_auto, exposure_absolute=$exposure_absolute
fi

# ==================================================================================
# run streamer and record video
# ==================================================================================

exec streamer \
-D $driver \
-c $device \
-s $resolution \
-f $input_format \
-t $rec_time \
-b 30 \
-o $output
