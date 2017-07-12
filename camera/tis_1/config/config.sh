#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./config.sh [DEVICE] [CONFIGURATION FILE] [FOCAL LENGTH] [CAM ID]
#
# [DEVICE]          for a list of devices run '$ v4l2-ctl --list-devices'
#                   (e.g. /dev/video0)
# [CONFIG FILE]     complete location of configuration file including extension.
#                   Check configuration files (.cfg) in 'config' folder
#                   (e.g. /config/config0.cfg)
# [FOCAL LENGTH]    focal lenght of the lens in mm with one decimal place
#                   (e.g. 6.0, 3.6, 4.4)
# [CAM ID]          camera tag id for identification [optional]
#                   (e.g. 1, 2, 3)
# ----------------------------------------------------------------------------------
# Configures a UVC compatible device and produces a short csv log file.
#
# Additional programs needed for this script:
#   - v4l-utils ('$ sudo apt-get install v4l-utils')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# target device as an argument. Check with '$ v4l2-ctl --list-devices'
DEVICE=$1

# target configuration file as an argument
CONFIG=$2

# focal length used as an argument
FOCLENGTH=$3

if [ -z "$4" ]; then
    CAMID="0"
else
    CAMID="$4"
fi

# load configuration file
source ${CONFIG}

# ==================================================================================
# RUN v4l2-ctl TO CONFIGURE CAMERA SETTINGS
# ==================================================================================
v4l2-ctl -d ${DEVICE} \
-c brightness=${BRIGHTNESS},gain=${GAIN},exposure_absolute=${EXPOSURE_ABSOLUTE}
echo "**"
echo "* CAMERA CONFIGURATION"
echo "* Camera info:        camera              = tis_1"
echo "*                     make                = The Imaging Source"
echo "*                     model               = DMM 42BUC03-ML"
echo "*                     device              = ${DEVICE}"
echo "*                     config file         = ${CONFIG}"
echo "* Lens info:          focal length        = ${FOCLENGTH}"
echo "* v4l2-ctl settings:  brightness          = ${BRIGHTNESS}"
echo "*                     gain                = ${GAIN}"
echo "*                     exposure_absolute   = ${EXPOSURE_ABSOLUTE}"
echo "**"

# save short csv log file
LOG="${CAMID},elp_1,ELP,ELP-USB500W02M,${FOCLENGTH}"
echo "${LOG}" >> short_log.log
