#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./minicom.sh
#-----------------------------------------------------------------------------------
# Opens a terminal serial session with the ODROID using minicom via the debug serial
# terminal port.
#
# Additional programs needed for this script:
#   - minicom ('$ sudo apt-get install minicom')
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
#-----------------------------------------------------------------------------------

sudo minicom -b 115200 -D /dev/ttyUSB0
