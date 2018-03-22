#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./demo.sh
# ----------------------------------------------------------------------------------
# ...
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# target devices
DEVICE1="/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710685-video-index0"

# ==================================================================================
# open camera 1
gst-launch-1.0 v4l2src device={DEVICE1} ! video/x-raw,format=GRAY8,width=640,height=480 ! videoconvert ! autovideosink &
PID=$!

gst-launch-1.0 v4l2src device=/dev/v4l/by-id/usb-The_Imaging_Source_Europe_GmbH_DMM_42BUC03-ML_47710685-video-index0 ! video/x-raw,format=GRAY8,width=640,height=480 ! videoconvert ! autovideosink
