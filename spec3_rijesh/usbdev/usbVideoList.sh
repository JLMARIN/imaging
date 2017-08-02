#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./usbDevList.sh
#
# ----------------------------------------------------------------------------------
# Lists video devices attached to USB ports
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

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
   dev=${tmp##$prefix}

   printf "%-70s|%-10s\n" $usb $dev
done
