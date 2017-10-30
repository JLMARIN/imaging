#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./multiview.sh [SETUP FILE] [USB SET] [CAM NUM] [WIDTH] [HEIGHT]
#
# [SETUP FILE]      name of the json setup file to use without extension. Check
#                   setup files (.json) in 'setup' folder
#                   (e.g. setup1)
# [USB SET]         predefined usb set. Check usbList.json in 'setup' folder
#                   (e.g. 0, 1, ...)
# [CAM NUM]         number of cameras to be used
#                   (e.g. 2, 3, 5, ...)
# [WIDTH]           width of the images in pixels
#                   (e.g. 320)
# [HEIGHT]          height of the images in pixels
#                   (e.g. 240)
# ----------------------------------------------------------------------------------
# Creates and runs pipelines using gstreamer for live camera visualization.
# Bandwidth consideration must be taken into account when selecting the number of
# cameras to work with.
#
# Additional programs needed for this script:
#   - v4l-utils ('$ sudo apt-get install v4l-utils')
#   - gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#   - jq        ('$ sudo apt-get install jq')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

### GST builder local function
gst_builder_local_func()
{
    # take camera settings as arguments
    dev=$1
    w=$2
    h=$3
    f=$4
    fps=$5

    # take sink video position as arguments
    top=$6
    left=$7

    # build source elements and caps
    VELEM="v4l2src device=${dev}"
    VCAPS="${f},width=${w},height=${h},framerate=${fps}"

    # build final source
    VSOURCE="${VELEM} ! ${VCAPS}"

    # build sink
    VSINK="videobox border-alpha=0 top=${top} left=${left} ! mix. "

    # append to GST command
    GSTCMD="${GSTCMD} ${VSOURCE} ! ${VSINK}"
}

### Main script starts here
SETUP=$1
USBSET=$2
CAMNUM=$3
WIDTH=$4
HEIGHT=$5

# ==================================================================================
# LOAD USB PORT ID FROM 'usbList.json' FILE
# ==================================================================================
for ((i=1; i<=$CAMNUM; i++));
do
    j=$((i-1))
    USB[$j]="$( jq -r ".usb[$USBSET].usb$i" "setup/usbList.json" )"
done

# ==================================================================================
# CALCULATE GRID
# ==================================================================================
GRID="$( ./grid_calculator.sh ${CAMNUM} ${WIDTH} ${HEIGHT} )"

GRID=$(echo $GRID | tr "," "\n")

k=0
for i in $GRID
do
    GRIDVAL[$k]=$i
    k=$((k+1))
done

# ==================================================================================
# CONFIGURE CAMERAS AND BUILD GST COMMAND
# ==================================================================================

# initialize GST command as empty string
GSTCMD="videomixer name=mix ! videoconvert ! autovideosink"

# loop through the cameras, setup and build GST command
for ((i=$CAMNUM-1; i>=0; i--));
do
    ENABLE="$( jq -r ".cameras[$i].enable" "setup/${SETUP}.json" )"

    if (${ENABLE}); then
        # find video device id from USB port
        #--> DEVID="$( ./usbdev/usbVideoFind.sh "${USB[$i]}" )"
        DEVID=$i

        if [ -n "$DEVID" ]; then
            # define full video device name
            DEVICE="/dev/${DEVID}"

            # load camera info relevant to camera configuration
            CAMERA="$( jq -r ".cameras[$i].cam" "setup/${SETUP}.json" )"
            CONFIG="$( jq -r ".cameras[$i].config" "setup/${SETUP}.json" )"
            #echo "$i , ${CAMERA} , ${CONFIG} , ${DEVICE}"

            # run configuration script
            ##--> ../camera/${CAMERA}/config/config.sh ${DEVICE} "../camera/${CAMERA}/config/${CONFIG}.cfg" ${FOCLENGTH[$i]} $((i+1))

            # load camera info relevant to gst pipeline
            FORMAT="$( jq -r ".cameras[$i].format" "setup/${SETUP}.json" )"
            FRATEIN="$( jq -r ".cameras[$i].frate" "setup/${SETUP}.json" )"

            # get top and left offset position for grid
            TOPOS=${GRIDVAL[$i*2+2]}
            LEFTOS=${GRIDVAL[$i*2+3]}

            # build preliminary gst command
            gst_builder_local_func ${DEVICE} ${WIDTH} ${HEIGHT} ${FORMAT} ${FRATEIN} ${TOPOS} ${LEFTOS}
        fi
    fi
done

# ==================================================================================
# RUN gstreamer AND START PIPELINES
# ==================================================================================

# echo for debugging purposes
echo gst-launch-1.0 -e ${GSTCMD}

# run command
#--> gst-launch-1.0 -e ${GSTCMD}
