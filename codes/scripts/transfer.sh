#!/bin/bash

# Usage: transfer

#-----------------------------------------------------------------------------------
# Copies files from a connected host to the local computer.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# define parameters
# ==================================================================================

# host name
host=odroid

# host ip address
ip=10.42.0.104

# host folder
location_source=/home/odroid/Documents/imaging/codes/scripts/sessions/*

# destination folder
location_destination=/home/falcon/Documents/jorge/imaging/codes/scripts/sessions

# ==================================================================================
# copy files to local computer
# ==================================================================================
scp -r $host@$ip:$location_source $location_destination
