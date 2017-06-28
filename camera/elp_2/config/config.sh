#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./config.sh [DEVICE] [CONFIGURATION FILE]
#
# [DEVICE]          for a list of devices run '$ v4l2-ctl --list-devices'
#                   (e.g. /dev/video0)
# [CONFIG FILE]     complete location of configuration file including extension.
#					Check configuration files (.cfg) in 'config' folder
#                   (e.g. /config/config0.cfg)
# ----------------------------------------------------------------------------------
# Configures a UVC compatible device.
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

# load configuration file
source ${CONFIG}

# ==================================================================================
# RUN v4l2-ctl TO CONFIGURE CAMERA SETTINGS
# ==================================================================================
echo "**"
echo "* CAMERA CONFIGURATION"
echo "* Camera info:        camera              = elp_2"
echo "*                     device              = ${DEVICE}"
echo "*                     config file         = ${CONFIG}"
echo "* v4l2-ctl settings:  brightness          = ${BRIGHTNESS}"
echo "*                     gain                = ${GAIN}"
echo "*                     exposure_auto       = ${EXPOSURE_AUTO}"

if (( "${EXPOSURE_AUTO}" == 3 )); then
#   exposure_auto: 3 (aperture priority mode)
    v4l2-ctl -d ${DEVICE} \
    -c brightness=${BRIGHTNESS},gain=${GAIN},exposure_auto=${EXPOSURE_AUTO}
    echo "**"
else
#   exposure_auto: 1 (manual mode)
    v4l2-ctl -d ${DEVICE} \
    -c brightness=${BRIGHTNESS},gain=${GAIN},exposure_auto=${EXPOSURE_AUTO},exposure_absolute=${EXPOSURE_ABSOLUTE}
    echo "*                     exposure_absolute   = ${EXPOSURE_ABSOLUTE}"
    echo "**"
fi
