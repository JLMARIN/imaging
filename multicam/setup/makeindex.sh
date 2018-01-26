#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./makeindex.sh
# ----------------------------------------------------------------------------------
# Scans local folder in search for JSON setup files, reads them and
# creates an index in a text file for easy reference
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# get date and time
TIMESTAMP=$(date +"%y/%m/%d-%H:%M:%S")

{

echo "==============================================================================="
echo "Setup files index (generated automatically using makeindex.sh)"
echo "Do not modify manually. If updates are required, run makeindex.sh"
echo "==============================================================================="
echo ""
printf "Last update: %s\n" ${TIMESTAMP}
echo ""
echo "===================================================================================================="
echo "filename      fps     cam   | en    | model  | cfg file  | resolution | src fps| output format| img"
echo "===================================================================================================="

shopt -s nullglob

for f in *.json
do
    if [ "${f}" != "cameraList.json" ]; then
        FPS="$( jq -r ".fps" "${f}" )"

        CAMNUM="$( jq '.cameras | length' "${f}" )" 

        printf "%-14s%-8s" ${f} ${FPS}

        for ((i=0; i<$CAMNUM; i++));
        do
            # read content of setup file
            CAMERA="$( jq -r ".cameras[$i].cam" "${f}" )"
            ENABLE="$( jq -r ".cameras[$i].enable" "${f}" )"
            CONFIG="$( jq -r ".cameras[$i].config" "${f}" )"
            WIDTH="$( jq -r ".cameras[$i].width" "${f}" )"
            HEIGHT="$( jq -r ".cameras[$i].height" "${f}" )"
            RESOLUTION=${WIDTH}x${HEIGHT}
			FRATECAM="$( jq -r ".cameras[$i].frate" "${f}" )"
			FORMAT="$( jq -r ".cameras[$i].format" "${f}" )"
			FORMAT=${FORMAT%,*}
            OUTPUT="$( jq -r ".cameras[$i].output" "${f}" )"

            # print data
            if (( $i > 0 )); then
                printf "                      "
            fi
            j=$((i+1))
            printf "cam%-2s | %-5s | %-6s | %-9s | %-10s | %-6s | %-12s | %-3s\n" ${j} ${ENABLE} ${CAMERA} ${CONFIG} ${RESOLUTION} ${FRATECAM} ${FORMAT} ${OUTPUT}
        done
        echo ----------------------------------------------------------------------------------------------------
    fi
done

} | tee "index.txt"

