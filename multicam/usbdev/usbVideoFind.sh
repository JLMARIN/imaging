#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./usbDevFind.sh [USB PORT ID]
#
# [USB PORT ID]		ID code of the USB port (e.g. 0000:00:10.0/usb3/3-2/3-2:1.0)
#
# ----------------------------------------------------------------------------------
# Finds the video device number assigned to a video device attached to a USB port
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# target usb port as an argument
USB=$1

# get list of video devices found with corresponding usb ports
OUTPUT=$(ls -l /sys/class/video4linux/)
#echo ${OUTPUT}


# split output in lines and store in array
i=1
arr=()

while true; do
	str=$(echo $OUTPUT | awk 'BEGIN {FS="lrwxrwxrwx "} {print $'$i'}')
	#echo $str

	arr[i]=$str

	if [ -z "$str" ]; then
		break
	fi
	i=$((i+1))
done

i=$((i-2))
#echo $i


# search for match and return video device number
delimiter=">"
suffix="/video4linux*"
prefix="*video4linux/"

for (( c=1; c<=$i; c++ ))
do
   tmp=${arr[$c+1]}
   tmp=$(cut -d ">" -f 2 <<< "$tmp")
   #echo $tmp
   
   usb=${tmp%%$suffix}
   #echo ${usb}

   if [ "${usb}" == "${USB}" ]; then
   		dev=${tmp##$prefix}
   		echo ${dev}
   fi
done
