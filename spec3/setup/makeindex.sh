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

{

echo "==============================================================================="
echo "Setup files index (generated automatically using makeindex.sh)"
echo "Do not modify manually. If updates are required, run makeindex.sh"
echo "==============================================================================="
echo ""
echo "==============================================================================="
echo "Note: the four settings shown in the table for each camera are:"
echo "  [CAMERA DESIGNATOR] [ENABLE FLAG]"
echo "  [CONFIGURATION FILE]"
echo "  [RESOLUTION] [FRAMERATE]"
echo "  [FORMAT] [OUTPUT]"
echo "==============================================================================="
echo ""
echo "filename      fps     cam1              cam2               cam3"
echo "==============================================================================="

shopt -s nullglob

for f in *.json
do
    if [ "${f}" != "usbList.json" ]; then
        FPS="$( jq -r ".fps" "${f}" )"

        for i in {0..2}
        do
            # read content of setup file
            CAMERA[$i]="$( jq -r ".cameras[$i].cam" "${f}" )"
            ENABLE[$i]="$( jq -r ".cameras[$i].enable" "${f}" )"
            CONFIG[$i]="$( jq -r ".cameras[$i].config" "${f}" )"
            WIDTH[$i]="$( jq -r ".cameras[$i].width" "${f}" )"
            HEIGHT[$i]="$( jq -r ".cameras[$i].height" "${f}" )"
            RESOLUTION[$i]=${WIDTH[$i]}x${HEIGHT[$i]}
			FRATECAM[$i]="$( jq -r ".cameras[$i].frate" "${f}" )"
			FORMAT[$i]="$( jq -r ".cameras[$i].format" "${f}" )"
			FORMAT[$i]=${FORMAT[$i]%,*}
            OUTPUT[$i]="$( jq -r ".cameras[$i].output" "${f}" )"
        done

        printf "%-14s%-8s%-6s%-12s%-6s%-12s%-6s%-12s\n" ${f} ${FPS} ${CAMERA[0]} "(${ENABLE[0]})" ${CAMERA[1]} "(${ENABLE[1]})" ${CAMERA[2]} "(${ENABLE[2]})"
        printf "                      %-18s%-18s%-18s\n" ${CONFIG[0]} ${CONFIG[1]} ${CONFIG[2]}
        printf "                      %-10s%-8s%-10s%-8s%-10s%-8s\n" ${RESOLUTION[0]} "(${FRATECAM[0]})" ${RESOLUTION[1]} "(${FRATECAM[1]})" ${RESOLUTION[2]} "(${FRATECAM[2]})"
        printf "                      %-12s%-6s%-12s%-6s%-12s%-6s\n" ${FORMAT[0]} "(${OUTPUT[0]})" ${FORMAT[1]} "(${OUTPUT[1]})" ${FORMAT[2]} "(${OUTPUT[2]})"
        echo "-------------------------------------------------------------------------------"
    fi
done

} | tee "index.txt"

