#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./sweep_2.sh [DEVICE] [VIDEO FLAG]
#
# [DEVICE]			for a list of devices run '$ v4l2-ctl --list-devices'
#					(e.g. /dev/video0)
# [VIDEO FLAG]		flag to indicate whether video will be recorded at the beginning
#					of the script. '1' for recording, '0' for not recording
#					(e.g. 1)
# ----------------------------------------------------------------------------------
# Executes sub-scripts with different configurations.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# target device as an argument. Check with '$ v4l2-ctl --list-devices'
DEVICE=$1

# define duration for each image capture process
SLEEPTIME=180

# video recording flag as an argument
VIDEOFLAG=$2

# ==================================================================================
# record video if VIDEOFLAG is 1
if (( "${VIDEOFLAG}" == 1 )); then
	./cap_video_str.sh ${DEVICE} config0 03:00
fi

# ==================================================================================
# launch script in background
./cap_loop_mjpg.sh ${DEVICE} config0 &
# Get its PID
PID=$!
# Wait
sleep ${SLEEPTIME}
# Terminates the program (like Ctrl+C)
kill -INT $PID

# Wait
sleep 2

# ==================================================================================
# Launch script in background
./cap_loop_raw.sh ${DEVICE} config1 &
# Get its PID
PID=$!
# Wait
sleep ${SLEEPTIME}
# Terminates the program (like Ctrl+C)
kill -INT $PID

# Wait
sleep 2