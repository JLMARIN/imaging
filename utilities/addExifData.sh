#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./addExifData.sh [PATH]
#
# [PATH]            path of the folder containing the pictures
#                   (e.g. ../../saved\ sessions/clean\ sessions/spec3/folder)
#-----------------------------------------------------------------------------------
# Reads geolocation data from geo_data.txt file and writes data to each picture in
# the especified folder.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# take directory as argument 1
DIRECTORY=$1

# go into directory
cd "${DIRECTORY}"

# add exif data to pictures from main text file
exiftool -csv=geo_data.txt -gpslatituderef=N -gpslongituderef=W -gpsaltituderef=above -gpstrackref=T -overwrite_original .
