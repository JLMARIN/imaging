#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./watcher.sh [DIRECTORY]
#
# [DIRECTORY]       Directory to watch
#                   (e.g. ./path/to/directory)
#-----------------------------------------------------------------------------------
# Monitors an images folder in search for new images. When found, copies and renames
# the corresponding log file to the folder
#
# Additional programs needed for this script:
#   - inotify ('$ sudo apt-get install inotify-tools')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

FOLDER=$1
LASTFILENAME=""

PREFIX="*CREATE "
SUFFIX="_cam*"

# use 'inotifywait' to monitor folder in search for new files
inotifywait -m -e create -r ${FOLDER} | while read file
do
	FILELOCATION="${file}"
	FILENAME=${FILELOCATION##$PREFIX}
	FILENAME=${FILENAME%%$SUFFIX}

	# make sure there is only one log file for each frame set
	if [ "${FILENAME}" != "${LASTFILENAME}" ]; then
		LASTFILENAME=${FILENAME}		
   		#echo ${LASTFILENAME}

   		FULLFILENAME=${FOLDER}/${LASTFILENAME}.txt
		
		cp log.txt ${FULLFILENAME}
	fi
done
