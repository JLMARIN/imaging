#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./cleanFiles.sh [PATH]
#
# [PATH]            path of the folder containing the pictures
#                   (e.g. ../../saved\ sessions/clean\ sessions/spec3/folder)
#-----------------------------------------------------------------------------------
# Checks for empty telemetry files and deletes them together with the associated
# files, including images.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# take directory as argument 1
DIRECTORY=$1

# go into directory
cd "${DIRECTORY}"

# cycle through files
for i in *.txt; do
    if [ ! -s $i ]; then
        echo "-> found empty file: $i"

        nameMatch=${i%.*}
        
        # remove all associated files
        rm -rf $nameMatch*
    fi
done

echo "all empty files and associated files were deleted"
