#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./spec3.sh [SETUP FILE] [USB SET] [FULL MODE]
#
# [SETUP FILE]      name of the json setup file to use without extension. Check
#                   setup files (.json) in 'setup' folder
#                   (e.g. setup1)
# [USB SET]         predefined usb set. Check usbList.json in 'setup' folder
#                   (e.g. 0, 1, ...)
# [FULL MODE]       Full mode flag [optional / default is TRUE]
#                   (e.g. 1 or 0)
# ----------------------------------------------------------------------------------
# Creates  pipelines using gstreamer 
#
# Additional programs needed for this script:
#   - v4l-utils ('$ sudo apt-get install v4l-utils')
#   - gstreamer ('$ sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

SETUP=$1
USBSET=$2

if [ -z "$3" ]; then
    FULLMODE="1"
else
    FULLMODE="$3"
fi

# get timestamp and define location and output name for files
TIMESTAMP=$(date +"%y%m%d-%H%M%S")
FOLDER=./sessions/${TIMESTAMP}

# ==================================================================================
# LOAD USB PORT ID FROM 'usbList.json' FILE
# ==================================================================================
USB[0]="$( jq -r ".usb[$USBSET].usb1" "setup/usbList.json" )"
USB[1]="$( jq -r ".usb[$USBSET].usb2" "setup/usbList.json" )"
USB[2]="$( jq -r ".usb[$USBSET].usb3" "setup/usbList.json" )"

# ==================================================================================
# LOAD LENS FOCAL LENGTHS FROM 'lens_setup.txt' FILE
# ==================================================================================
FOCLENGTH[0]=$(sed '1q;d' setup/lens_setup.txt)
FOCLENGTH[1]=$(sed '1q;d' setup/lens_setup.txt)
FOCLENGTH[2]=$(sed '1q;d' setup/lens_setup.txt)

FOCLENGTH[0]=${FOCLENGTH[0]##*=}
FOCLENGTH[1]=${FOCLENGTH[1]##*=}
FOCLENGTH[2]=${FOCLENGTH[2]##*=}

# ==================================================================================
# CREATE SESSION FOLDER
# ==================================================================================
mkdir -p sessions
mkdir -p sessions/${TIMESTAMP}

# ==================================================================================
# CONFIGURE CAMERAS SETTINGS AND BUILD GST COMMAND
# ==================================================================================

# initialize GST command as empty string
GSTCMD=""

# read framerate from setup file
FPS="$( jq -r ".fps" "setup/${SETUP}.json" )"

# loop through the cameras, setup and build GST command
for i in {0..2}
do
    ENABLE="$( jq -r ".cameras[$i].enable" "setup/${SETUP}.json" )"

    if (${ENABLE}); then
        # find video device id from USB port
        DEVID="$( ./usbdev/usbVideoFind.sh "${USB[$i]}" )"

        if [ -n "$DEVID" ]; then
            # define full video device name
            DEVICE="/dev/${DEVID}"

            # load camera info relevant to camera configuartion
            CAMERA="$( jq -r ".cameras[$i].cam" "setup/${SETUP}.json" )"
            CONFIG="$( jq -r ".cameras[$i].config" "setup/${SETUP}.json" )"
            #echo "$i , ${CAMERA} , ${CONFIG} , ${DEVICE}"

            # run configuration script and save output to log file
            ../camera/${CAMERA}/config/config.sh ${DEVICE} "../camera/${CAMERA}/config/${CONFIG}.cfg" ${FOCLENGTH[$i]} $((i+1)) > >(tee -a ${FOLDER}/${TIMESTAMP}\_log.log)

            # load camera info relevant to gst pipeline
            WIDTH="$( jq -r ".cameras[$i].width" "setup/${SETUP}.json" )"
            HEIGHT="$( jq -r ".cameras[$i].height" "setup/${SETUP}.json" )"
            FORMAT="$( jq -r ".cameras[$i].format" "setup/${SETUP}.json" )"
            FRATEIN="$( jq -r ".cameras[$i].frate" "setup/${SETUP}.json" )"
            PICFORMAT="$( jq -r ".cameras[$i].output" "setup/${SETUP}.json" )"

            # build preliminary gst command
            TEMP="$( ./gst_builder.sh ${DEVICE} ${WIDTH} ${HEIGHT} ${FORMAT} ${PICFORMAT} ${FPS} ${FRATEIN} )"

            # define output file location and file names
            OUTPUT="${FOLDER}/${TIMESTAMP}\_frame_%04d_cam_$((i+1)).${PICFORMAT}"

            # add file location to gst command
            TEMP="${TEMP} ! multifilesink location=${OUTPUT}"

            # echo individual camera partial gst pipeline (and save output to log file)
            echo "${TEMP}" > >(tee -a ${FOLDER}/${TIMESTAMP}\_log.log)

            # append individual camera gst command to global gst command
            GSTCMD="${GSTCMD} ${TEMP}"
        fi
    fi
done

# move short log to folder and rename
mv short_log.log ${FOLDER}/${TIMESTAMP}\_short_log.log

# ==================================================================================
# RUN AUTOPILOT UART MESSAGES READER AND PARSER
# ==================================================================================

if [ "${FULLMODE}" == "1" ]; then
    ./wenda/wenda ${FOLDER} &

    PID_MSGPARSER=$!
    echo "msgparser PID=${PID_MSGPARSER}"

fi

# ==================================================================================
# RUN gstreamer AND START PIPELINES
# ==================================================================================

# echo for debugging purposes
#echo gst-launch-1.0 -e ${GSTCMD}

# run command
gst-launch-1.0 -e ${GSTCMD}

# ==================================================================================
# CLEAN UP AFTER gstreamer PROGRAM IS TERMINATED
# ==================================================================================

if [ "${FULLMODE}" == "1" ]; then
    # delete temporary log file
    rm log.txt

    # kill background processes
    kill ${PID_MSGPARSER}
    kill ${PID_WATCHER}

    echo "msgparser background process terminated (PID=${PID_MSGPARSER})"
    echo "watcher background process terminated (PID=${PID_WATCHER})"
fi

# ==================================================================================
# TEMPORARY FIX FOR TELEMETRY FILES WITHOUT .TXT EXTENSION
# ==================================================================================

find ./sessions/${TIMESTAMP} -type f ! -name "*.*" -exec mv {} {}.txt \;
