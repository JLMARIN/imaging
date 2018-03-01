#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./measure_all.sh [CAM SET] [CAM NUM]
#
# [CAM SET]         predefined camera set. Check cameraList.json in 'setup' folder
#                   (e.g. 0, 1, ...)
# [CAM NUM]         number of cameras to be used
# ----------------------------------------------------------------------------------
# Creates and runs pipelines using gstreamer for image capture and saving from
# all the cameras. After capture, focus is measured and reported for all cameras.
#
# This script is intended to be used with the USB Camera HUB board and the
# DMM 42BUC03-ML cameras from The Imaging Source. 
#
# Additional programs needed for this script:
#   - v4l-utils ('$ sudo apt-get install v4l-utils')
#   - gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#   - jq        ('$ sudo apt-get install jq')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

CAMSET=$1
CAMNUM=$2

# get timestamp and define location and output name for files
TIMESTAMP=$(date +"%y%m%d-%H%M%S")
FOLDER=./sessions/${TIMESTAMP}

# ==================================================================================
# LOAD CAMERA USB ID FROM 'cameraList.json' FILE
# ==================================================================================
for ((i=1; i<=$CAMNUM; i++));
do
    j=$((i-1))
    DEVICE[$j]="$( jq -r ".camera_array[$CAMSET].cam$i" "setup/cameraList.json" )"
done

# ==================================================================================
# LOAD CAMERA CONFIGURATION FROM 'cameraSetup.json' FILE
# ==================================================================================
CAMERA="$( jq -r ".cam" "setup/cameraSetup.json" )"
CONFIG="$( jq -r ".config" "setup/cameraSetup.json" )"
WIDTH="$( jq -r ".width" "setup/cameraSetup.json" )"
HEIGHT="$( jq -r ".height" "setup/cameraSetup.json" )"
FORMAT="$( jq -r ".format" "setup/cameraSetup.json" )"
FRATE="$( jq -r ".frate" "setup/cameraSetup.json" )"
PICFORMAT="$( jq -r ".output" "setup/cameraSetup.json" )"

# ==================================================================================
# CREATE SESSION FOLDER
# ==================================================================================
mkdir -p sessions
mkdir -p sessions/${TIMESTAMP}

# ==================================================================================
# CONFIGURE CAMERAS AND BUILD GST COMMAND
# ==================================================================================

# build common section of gst command
GSTCOMMON="$( ./gst_builder.sh ${WIDTH} ${HEIGHT} ${FORMAT} ${PICFORMAT} ${FRATE} )"

# loop through the cameras, setup and build individual GST commands
for ((i=0; i<$CAMNUM; i++));
do
    # run configuration script and save output to log file
    ../camera/${CAMERA}/config/config.sh ${DEVICE[$i]} "../camera/${CAMERA}/config/${CONFIG}.cfg" X $((i+1)) > >(tee -a ${FOLDER}/${TIMESTAMP}\_log.log)

    # build preliminary gst command
    TEMP="v4l2src device=${DEVICE[$i]}"

    # define output file location and file names
    OUTPUT="${FOLDER}/${TIMESTAMP}_cam_$((i+1)).${PICFORMAT}"

    # append individual camera gst command to global gst command
    GSTCMDTMP[$i]="${TEMP} ! ${GSTCOMMON} ! filesink location=${OUTPUT}"
done

# move short log to folder and rename
mv short_log.log ${FOLDER}/${TIMESTAMP}\_short_log.log

# ==================================================================================
# RUN gstreamer AND START PIPELINES
# ==================================================================================

# run GST commands in waves of 3 cameras each
for ((i=0; i<$CAMNUM; i+=3));
do
    GSTCMD="${GSTCMDTMP[$i]}"
    
    for ((j=1; j<3; j++));
    do
        k=$((i+j))

        if [ ! -z "${GSTCMDTMP[$k]}" ]; then
            GSTCMD="${GSTCMD} ${GSTCMDTMP[$k]}"
        fi
    done
    
    # echo for debugging purposes
    #echo gst-launch-1.0 -e ${GSTCMD}

    # run command
    gst-launch-1.0 -e ${GSTCMD} &

    # Get its PID
    PID=$!
    # Wait
    sleep 5
    # Terminates the program (like Ctrl+C)
    kill -INT $PID
done

sleep 2

# ==================================================================================
# MEASURE FOCUS OF ALL IMAGES AND REPORT
# ==================================================================================

for ((i=1; i<=$CAMNUM; i++));
do
    printf "Focus of camera %s: " ${i}
    ./cpp/fmeasure/fmeasure ${FOLDER}/${TIMESTAMP}_cam_${i}.${PICFORMAT}
done
