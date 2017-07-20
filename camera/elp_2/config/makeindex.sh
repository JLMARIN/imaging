#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./makeindex.sh
# ----------------------------------------------------------------------------------
# Scans local folder in search for configuration files (.cfg), reads them and
# creates an index in a text file for easy reference
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# get date and time
TIMESTAMP=$(date +"%y/%m/%d-%H:%M:%S")

{

echo "==============================================================================="
echo "Configuration files index (generated automatically using makeindex.sh)"
echo "Do not modify manually. If updates are required, run makeindex.sh"
echo "==============================================================================="
echo ""
printf "Last update: %s\n" ${TIMESTAMP}
echo ""
echo "filename        brightness   exp_auto   exp_abs     gain"
echo "--------------------------------------------------------"

shopt -s nullglob

for f in *.cfg
do
	# load configuration file
	source ${f}
	printf "%s %10s %10s %10s %10s\n" ${f} ${BRIGHTNESS} ${EXPOSURE_AUTO} ${EXPOSURE_ABSOLUTE} ${GAIN}
done

} | tee "index.txt"