#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./extractImageSet.sh [PATH] [CAMERA INDEX] [FLAG]
#
# [PATH]            path of the fodler containing the pictures
#                   (e.g. ../../saved\ sessions/clean\ sessions/spec3/folder)
# [CAMERA INDEX]    camera index of the set of pictures to fix
#                   (e.g. cam_1 or cam_2 or cam_3)
# [FLAG]            flag to indicate if telemetry files will be copied too. 
#                   (e.g. 1 for true and 0 for false)
#-----------------------------------------------------------------------------------
# Copies picture sets from a given camera from the main source folder to a new
# folder. Telemetry files can also be copied.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# take directory as argument 1
DIRECTORY=$1

# take camera index as argument 2
CAM=$2

# take flag for telemetry data on/off as argument 3
TELEMETRY=$3

# go into directory
cd "${DIRECTORY}"
path=$(pwd)
current_dir=${path##*/}

# create destination directory
cd ..
new_dir=${current_dir}-${CAM}
mkdir -p ${new_dir}

# go back to source directory
cd ${current_dir}

# cycle through pictures and copy to destination folder
echo "-> copying image files..."
for i in *${CAM}.jpg; do
    cp $i ../${new_dir}
    echo "-> copying image file: $i"
done

# if enabled, cycle through telemetry files and copy to destination folder
if [ "${TELEMETRY}" == "1" ]; then
    echo "-> copying telemetry files..."
    for i in *.txt; do
        cp $i ../${new_dir}
        echo "-> copying telemetry file: $i"
    done
fi

cp ${current_dir}_log.log ../${new_dir}
echo "-> copying log file: ${current_dir}_log.log"

echo "done!"
