#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./buildGeoDataFile.sh [PATH]
#
# [PATH]            path of the folder containing the pictures
#                   (e.g. ../../saved\ sessions/clean\ sessions/spec3/folder)
#-----------------------------------------------------------------------------------
# Scans folder and generates geodata textfile with GPS information according to the
# exiftool requirements.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# take directory as argument 1
DIRECTORY=$1

# go into directory
cd "${DIRECTORY}"

{
echo "SourceFile,GPSLatitude,GPSLongitude,GPSAltitude,GPSTrack"

# cycle through image files
for i in *.jpg; do
    # get corresponding telemetry textfile
    textfile=${i%_cam*}
    textfile="${textfile}.txt"
    
    # get all relevant values from file 
    yaw=$(sed '1q;d' $textfile)
    height=$(sed '4q;d' $textfile)
    utm_east=$(sed '6q;d' $textfile)
    utm_north=$(sed '7q;d' $textfile)
    utm_zone=$(sed '8q;d' $textfile)

    # clean strings and convert units
    yaw=${yaw##*=}
    track=$(bc -l <<< "${yaw}*57.2957795131")   # convert from rads to degrees

    height=${height##*=}

    utm_zone=${utm_zone##*=}

    utm_east=${utm_east##*=}
    utm_east=$(bc -l <<< "${utm_east}/100")     # convert from cm to m

    utm_north=${utm_north##*=}
    utm_north=$(bc -l <<< "${utm_north}/100")   # convert from cm to m

    # convert UTM to lat/long
    latlong=$(echo ${utm_zone}N ${utm_east} ${utm_north} | GeoConvert -g)
    lat=${latlong%% *}
    long=${latlong##* }

    # print line
    printf "%s,%s,%s,%s,%.6f\n" ${i} ${lat} ${long} ${height} ${track}
done

} | tee "geo_data.txt"
