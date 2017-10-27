#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./multiview.sh [SETUP FILE] [USB SET] [CAM NUM]
#
# [SETUP FILE]      name of the json setup file to use without extension. Check
#                   setup files (.json) in 'setup' folder
#                   (e.g. setup1)
# [USB SET]         predefined usb set. Check usbList.json in 'setup' folder
#                   (e.g. 0, 1, ...)
# [CAM NUM]         number of cameras to be used
#                   (e.g. 2, 3, 5, ...)
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

# get timestamp and define location and output name for files
TIMESTAMP=$(date +"%y%m%d-%H%M%S")
FOLDER=./sessions/${TIMESTAMP}

# ==================================================================================
# LOAD USB PORT ID FROM 'usbList.json' FILE
# ==================================================================================
for ((i=1; i<=$CAMNUM; i++));
do
    j=$((i-1))
    USB[$j]="$( jq -r ".usb[$USBSET].usb$i" "setup/usbList.json" )"
done

# ==================================================================================
# LOAD LENS FOCAL LENGTHS FROM 'lens_setup.txt' FILE
# ==================================================================================
for ((i=0; i<$CAMNUM; i++));
do
    FOCLENGTH[$i]=$(sed '1q;d' setup/lens_setup.txt)
    FOCLENGTH[$i]=${FOCLENGTH[$i]##*=}
done

# ==================================================================================
# CREATE SESSION FOLDER
# ==================================================================================
#--> mkdir -p sessions
#--> mkdir -p sessions/${TIMESTAMP}

# ==================================================================================
# CONFIGURE CAMERAS SETTINGS AND BUILD GST COMMAND
# ==================================================================================

# initialize GST command as empty string
GSTCMD="videomixer name=mix ! videoconvert ! autovideosink"

# read framerate from setup file
FPS="$( jq -r ".fps" "setup/${SETUP}.json" )"

# calculate grid
GRID="$( ./grid_calculator.sh ${CAMNUM} )"

# loop through the cameras, setup and build GST command
for ((i=0; i<$CAMNUM; i++));
do
    ENABLE="$( jq -r ".cameras[$i].enable" "setup/${SETUP}.json" )"

    if (${ENABLE}); then
        # find video device id from USB port
        #--> DEVID="$( ./usbdev/usbVideoFind.sh "${USB[$i]}" )"
        DEVID=1

        if [ -n "$DEVID" ]; then
            # define full video device name
            DEVICE="/dev/${DEVID}"

            # load camera info relevant to camera configuartion
            CAMERA="$( jq -r ".cameras[$i].cam" "setup/${SETUP}.json" )"
            CONFIG="$( jq -r ".cameras[$i].config" "setup/${SETUP}.json" )"
            #echo "$i , ${CAMERA} , ${CONFIG} , ${DEVICE}"

            # run configuration script
            ##--> ../camera/${CAMERA}/config/config.sh ${DEVICE} "../camera/${CAMERA}/config/${CONFIG}.cfg" ${FOCLENGTH[$i]} $((i+1))

            # load camera info relevant to gst pipeline
            WIDTH="$( jq -r ".cameras[$i].width" "setup/${SETUP}.json" )"
            HEIGHT="$( jq -r ".cameras[$i].height" "setup/${SETUP}.json" )"
            FORMAT="$( jq -r ".cameras[$i].format" "setup/${SETUP}.json" )"
            FRATEIN="$( jq -r ".cameras[$i].frate" "setup/${SETUP}.json" )"

            # calculate grid
            ./grid_calculator.sh ${CAMNUM}  

            # build preliminary gst command
            gst_builder_local_func ${DEVICE} ${WIDTH} ${HEIGHT} ${FORMAT} ${FRATEIN} -320 -180
        fi
    fi
done

# move short log to folder and rename
#mv short_log.log ${FOLDER}/${TIMESTAMP}\_short_log.log

# ==================================================================================
# RUN gstreamer AND START PIPELINES
# ==================================================================================

# echo for debugging purposes
echo gst-launch-1.0 -e ${GSTCMD}

# run command
#--> gst-launch-1.0 -e ${GSTCMD}
