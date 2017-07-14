#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./transfer.sh [IP]
#
# [IP]				IP address of the target odroid
#					(e.g. 10.42.0.75)
#-----------------------------------------------------------------------------------
# Copies files from a connected host to the local computer.
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

# ==================================================================================
# DEFINE PARAMETERS
# ==================================================================================

# host name
host=odroid

# host ip address
if [ -z "$1" ]; then
    ip=10.42.0.104
else
    ip="$1"
fi

# host and destination folders (elp_1)
#location_source=/home/odroid/Documents/imaging/camera/elp_1/sessions/*
#location_destination=/home/falcon/Documents/jorge/imaging/camera/elp_1/sessions

# host and destination folders (elp_2)
#location_source=/home/odroid/Documents/imaging/camera/elp_2/sessions/*
#location_destination=/home/falcon/Documents/jorge/imaging/camera/elp_2/sessions

# host and destination folders (tis_1)
#location_source=/home/odroid/Documents/imaging/camera/tis_1/sessions/*
#location_destination=/home/falcon/Documents/jorge/imaging/camera/tis_1/sessions

# host and destination folders (spec3)
location_source=/home/odroid/Documents/imaging/spec3/sessions/*
location_destination=/home/falcon/Documents/jorge/imaging/spec3/sessions

# ==================================================================================
# COPY FILES TO LOCAL COMPUTER
# ==================================================================================
scp -r $host@$ip:$location_source $location_destination
