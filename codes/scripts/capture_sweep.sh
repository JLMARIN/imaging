#!/bin/bash

# Usage: capture_sweep

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
# A sweep of several camera configuration is done.
#
# Two programs are needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- ffmpeg ('$ sudo apt-get install ffmpeg')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/update.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# define global camera configuration variables
# ==================================================================================

# target device (name may be different). Check with '$ v4l2-ctl --list-devices'
device=/dev/video1

# video quantizer scale. Sets the quality of the video and is a number from 2-31,
# with 1 being highest quality/largest filesize and 31 being the lowest
# quality/smallest filesize. The range 2-5 is a good balance.
compression=5

# frames per second
fps=1

# number of frames per loop
num_frames=5

# timestamp
timestamp=$(date +"%y%m%d-%H%M%S")

# filter expression
filter="fps=$fps, drawtext=fontfile=/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf: fontsize=30: text='frame_$timestamp\_%{eif\:n+1\:d}': x=0: y=h-(1*lh): fontcolor=white: box=1: boxcolor=0x00000999"

# ==================================================================================
# create session folder
# ==================================================================================
mkdir -p sessions/$timestamp\_sweep

# ==================================================================================
# function: run v4l2-ctl to configure camera settings
# ==================================================================================
v4l2_configure_camera () {
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
}

# ==================================================================================
# function: run ffmpeg and start a loop to capture and save images
# ==================================================================================
ffmpeg_run_loop () {
	ffmpeg -f v4l2 \
	-s $resolution \
	-i $device \
	-vframes $num_frames \
	-qscale:v $compression \
	-vf "$filter" \
	-report \
	$output

}

# ==================================================================================
# loop 1
# ==================================================================================

loopN=loop1

# define local settings
resolution=2592x1944
brightness=8
exposure_auto=3
exposure_absolute=4

# configure log file
export FFREPORT=file=sessions/$timestamp\_sweep/$timestamp\_$loopN.log:level=32

# output file name
output=./sessions/$timestamp\_sweep/$timestamp\_$loopN\_%4d.jpg

echo start of $loopN

v4l2_configure_camera
ffmpeg_run_loop

echo end of $loopN
sleep 3

# ==================================================================================
# loop 2
# ==================================================================================

loopN=loop2

# define local settings
resolution=2592x1944
brightness=8
exposure_auto=1
exposure_absolute=4

# configure log file
#export FFREPORT=file=sessions/$timestamp\_sweep/$timestamp\_$loopN.log:level=32

# output file name
output=./sessions/$timestamp\_sweep/$timestamp\_$loopN\_%4d.jpg

echo start of $loopN

v4l2_configure_camera
ffmpeg_run_loop

echo end of $loopN
sleep 3

# ==================================================================================
# loop 3
# ==================================================================================

loopN=loop3

# define local settings
resolution=2048x1536
brightness=8
exposure_auto=3
exposure_absolute=4

# configure log file
#export FFREPORT=file=sessions/$timestamp\_sweep/$timestamp\_$loopN.log:level=32

# output file name
output=./sessions/$timestamp\_sweep/$timestamp\_$loopN\_%4d.jpg

echo start of $loopN

v4l2_configure_camera
ffmpeg_run_loop

echo end of $loopN
sleep 3

# ==================================================================================
# loop 4
# ==================================================================================

loopN=loop4

# define local settings
resolution=2048x1536
brightness=8
exposure_auto=1
exposure_absolute=40

# configure log file
#export FFREPORT=file=sessions/$timestamp\_sweep/$timestamp\_$loopN.log:level=32

# output file name
output=./sessions/$timestamp\_sweep/$timestamp\_$loopN\_%4d.jpg

echo start of $loopN

v4l2_configure_camera
ffmpeg_run_loop

echo end of $loopN
