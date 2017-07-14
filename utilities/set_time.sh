#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./set_time.sh [IP]
#
# [IP]				IP address of the target odroid
#					(e.g. 10.42.0.75)
#-----------------------------------------------------------------------------------
# Sets the time of the host computer using the local
# computer time.
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
    ip=10.42.0.75
else
    ip="$1"
fi

# ==================================================================================
# SET TIME
# ==================================================================================
sudo ssh -t $host@$ip "sudo date --set=\"$(date)\""