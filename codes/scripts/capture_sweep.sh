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
# A sub-script named capture_loop_2.sh is used for each
# loop call
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# define global camera configuration variables
# ==================================================================================

# target device (name may be different). Check with '$ v4l2-ctl --list-devices'
device=/dev/video1

# number of frames per loop
num_frames=15

# timestamp
timestamp=$(date +"%y%m%d-%H%M%S")

# output folder
output_folder=$timestamp\_sweep

# ==================================================================================
# create session folder
# ==================================================================================
mkdir -p sessions/$output_folder

# ==================================================================================
# run loops
# ==================================================================================

#-----------------------------------------------------------------------------------
# define local settings
resolution=2592x1944
brightness=8
exposure_auto=3
exposure_absolute=4

# run loop
./capture_loop_2.sh "$device" "$resolution" "$brightness" "$exposure_auto" "$exposure_absolute" "$num_frames" "$output_folder" 
#-----------------------------------------------------------------------------------

sleep 3

#-----------------------------------------------------------------------------------
# define local settings
resolution=2592x1944
brightness=8
exposure_auto=1
exposure_absolute=4

# run loop
./capture_loop_2.sh "$device" "$resolution" "$brightness" "$exposure_auto" "$exposure_absolute" "$num_frames" "$output_folder" 
#-----------------------------------------------------------------------------------

sleep 3

#-----------------------------------------------------------------------------------
# define local settings
resolution=2048x1536
brightness=8
exposure_auto=3
exposure_absolute=4

# run loop
./capture_loop_2.sh "$device" "$resolution" "$brightness" "$exposure_auto" "$exposure_absolute" "$num_frames" "$output_folder" 
#-----------------------------------------------------------------------------------

sleep 3

#-----------------------------------------------------------------------------------
# define local settings
resolution=2048x1536
brightness=8
exposure_auto=1
exposure_absolute=40

# run loop
./capture_loop_2.sh "$device" "$resolution" "$brightness" "$exposure_auto" "$exposure_absolute" "$num_frames" "$output_folder" 
#-----------------------------------------------------------------------------------