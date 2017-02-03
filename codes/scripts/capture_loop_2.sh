#!/bin/bash

# Usage: capture_loop_2

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
#
# Two programs are needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- ffmpeg ('$ sudo apt-get install ffmpeg')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/update.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# define camera configuration variables
# ==================================================================================

# target device (name may be different). Check with '$ v4l2-ctl --list-devices'
device=/dev/video1

# video format and frame sizes. Check with '$ ffmpeg -f v4l2 -list_formats all -i /dev/video1'
video_codec=mjpeg
width=2592
height=1944

# camera settings. Check options and values with '$ v4l2-ctl -d /dev/video1 --list-ctrls'

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
exposure_absolute=4

# video quantizer scale. Sets the quality of the video and is a number from 2-31,
# with 1 being highest quality/largest filesize and 31 being the lowest
# quality/smallest filesize. The range 2-5 is a good balance.
compression=2

# frames per second
fps=1

# timestamp and output name for files
timestamp=$(date +"%y%m%d-%H%M%S")
output=./pics/frame_$timestamp\_%4d.jpg

# filter expression
filter="fps=$fps, drawtext=fontfile=/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf: fontsize=10: text='frame_$timestamp\_%{eif\:n+1\:d}': x=(w-text_w)/2: y=h-(1*lh): fontcolor=white: box=1: boxcolor=0x00000999"

# ==================================================================================
# run v4l2-ctl to configure camera settings
# ==================================================================================
#if (( "$exposure_auto" == 3 )); then
## 	exposure_auto: 3 (aperture priority mode)
#	v4l2-ctl -d $device \
#	-c brightness=$brightness,exposure_auto=$exposure_auto
#	echo camera configuration: brightness=$brightness, exposure_auto=$exposure_auto
#else
## 	exposure_auto: 1 (manual mode)
#	v4l2-ctl -d $device \
#	-c brightness=$brightness,exposure_auto=$exposure_auto,exposure_absolute=$exposure_absolute
#	echo camera configuration: brightness=$brightness, exposure_auto=$exposure_auto, exposure_absolute=$exposure_absolute
#fi

# ==================================================================================
# run ffmpeg and start a loop to capture and save images
# ==================================================================================
exec ffmpeg -f v4l2 -i $device \
-vcodec $video_codec \
-s $width\x$height \
-qscale:v $compression \
-vf fps=$fps \
$output
# -vf "$filter" \

#-vf drawtext="fontfile=/usr/share/fonts/truetype/ubuntu-font-family/Ubuntu-R.ttf:text='Sky_cam_west_':timecode='$(date +%H\\:%M\\:%S).00': r=23.976: x=(w-tw)/2: y=h-(1*lh): fontcolor=white: fontsize=16: box=1: boxcolor=0x00000999" \

#-vf drawtext="fontfile=/usr/share/fonts/truetype/ubuntu-font-family/Ubuntu-R.ttf:text='Sky_cam_west_':timecode='$(date +%H\\:%M\\:%S).00': r=23.976: x=(w-tw)/2: y=h-(1*lh): fontcolor=white: fontsize=16: box=1: boxcolor=0x00000999"

# -vf drawtext="fontfile=/usr/share/fonts/truetype/msttcorefonts/arial.ttf:text='Falcon':timecode='$(date +%H\\:%M\\:%S).00': r=23.976: x=(w-tw)/2: y=h-(1*lh): fontcolor=white: fontsize=16: box=1: boxcolor=0x00000999" \





#FFREPORT=file=ffreport.log:level=32