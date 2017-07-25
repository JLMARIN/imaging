#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./addExifDataBasic.sh [PATH]
#
# [PATH]            path of the folder containing the pictures
#                   (e.g. ../../saved\ sessions/clean\ sessions/spec3/folder)
#-----------------------------------------------------------------------------------
# Reads basic camera and lens data from short log file and writes data to each
# picture in the especified folder.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# take directory as argument 1
DIRECTORY=$1

# go into directory
cd "${DIRECTORY}"

{
echo "SourceFile,Make,Model,FocalLength"

for file in *short_log.log; do
    LINES=$(wc -l < $file)

    if [ "${LINES}" == "1" ]; then
        line=$(sed '1q;d' $file)
        data=${line#*,}
        data=${data#*,}

        for i in *.jpg; do
            printf "%s,%s\n" ${i} ${data}
        done
    
    elif [ "${LINES}" > "1" ]; then

        for i in $(seq 1 $LINES); do
            line=$(sed "${i}q;d" $file)
            data=${line#*,}
            data=${data#*,}
            
            camId=${line:0:1}

            for j in *cam_${camId}.jpg; do
                printf "%s,%s\n" ${j} ${data}
            done
        done
    fi
done

} | tee "exif_data.txt"

# add exif data to pictures from exif_data.txt file
exiftool -csv=exif_data.txt -overwrite_original .

# remove temporary exif_data.txt file
rm exif_data.txt

# remove strange empty file created with name "1"
if [ -f 1 ]; then
    rm 1
fi

echo "Basic EXIF data added to pictures"
