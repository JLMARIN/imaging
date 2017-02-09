#!/bin/bash

# Usage: capture_sweep_2

#-----------------------------------------------------------------------------------
# Configures a UVC compatible device and captures frames
# at a certain rate while saving them in a local folder.
# A sweep of several camera configuration is done.
#
# Two programs are needed for this script:
#	- v4l-utils ('$ sudo apt-get install v4l-utils')
#	- streamer ('$ sudo apt-get install streamer')
#
# A sub-script named capture_loop_2b.sh is used for each
# loop call
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# define global camera configuration variables
# ==================================================================================

# target device (name may be different). Check with '$ v4l2-ctl --list-devices'
device=$1

# duration of the video recording in m:ss format
rec_time=5:00

# number of frames per loop
num_frames=180

# timestamp
timestamp=$(date +"%y%m%d-%H%M%S")

# output folder
output_folder=$timestamp\_streamer_sweep

# ==================================================================================
# create session folder
# ==================================================================================
mkdir -p sessions/$output_folder

# ==================================================================================
# run loops
# ==================================================================================

# $ ./record_video_1b.sh [device] [resolution] [brightness] [gamma] [exposure_auto] [exposure_absolute] [recording time]   [output folder]
# $ ./capture_loop_2b.sh [device] [resolution] [brightness] [gamma] [exposure_auto] [exposure_absolute] [number of frames] [output folder]

#-----------------------------------------------------------------------------------
./record_video_1b.sh "$device" 640x480 8 7 3 4 "$rec_time" "$output_folder"
#-----------------------------------------------------------------------------------
./capture_loop_2b.sh "$device" 2048x1536 8 7 3 4 "$num_frames" "$output_folder"
#-----------------------------------------------------------------------------------
./capture_loop_2b.sh "$device" 2048x1536 9 10 1 20 "$num_frames" "$output_folder"
#-----------------------------------------------------------------------------------
