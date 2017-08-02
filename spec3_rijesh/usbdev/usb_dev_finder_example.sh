#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./usb_dev_finder.sh
#
# ----------------------------------------------------------------------------------
# Scans USB ports for video devices and finds video device number assigned. This 
# script is based on the usb ports of the falcon laptop
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# USB ports in falcon laptop
LAPTOPUSB11=" ../../devices/pci0000:00/0000:00:12.0/usb1/1-1/1-1.1/1-1.1:1.0"
LAPTOPUSB21=" ../../devices/pci0000:00/0000:00:13.0/usb2/2-1/2-1.1/2-1.1:1.0"
LAPTOPUSB31=" ../../devices/pci0000:00/0000:00:10.0/usb3/3-1/3-1:1.0"
LAPTOPUSB32=" ../../devices/pci0000:00/0000:00:10.0/usb3/3-2/3-2:1.0"

# USB ports in the external HUB connected to falcon laptop USB3-1
LAPTOPEXHUBUSB311=" ../../devices/pci0000:00/0000:00:10.0/usb3/3-1/3-1.1/3-1.1:1.0"
LAPTOPEXHUBUSB312=" ../../devices/pci0000:00/0000:00:10.0/usb3/3-1/3-1.2/3-1.2:1.0"
LAPTOPEXHUBUSB313=" ../../devices/pci0000:00/0000:00:10.0/usb3/3-1/3-1.3/3-1.3:1.0"
LAPTOPEXHUBUSB314=" ../../devices/pci0000:00/0000:00:10.0/usb3/3-1/3-1.4/3-1.4:1.0"

# USB ports in ODROID C2
ODROIDUSB11=" ../../devices/platform/dwc2_b/usb1/1-1/1-1.1/1-1.1:1.0"
ODROIDUSB12=" ../../devices/platform/dwc2_b/usb1/1-1/1-1.2/1-1.2:1.0"
ODROIDUSB13=" ../../devices/platform/dwc2_b/usb1/1-1/1-1.3/1-1.3:1.0"
ODROIDUSB14=" ../../devices/platform/dwc2_b/usb1/1-1/1-1.4/1-1.4:1.0"

# set target USB
TARGETUSB=${LAPTOPEXHUBUSB312}

# find video device number assigned to target usb
DEV=$(./usbVideoFind.sh "$TARGETUSB")

# print resulrt==t
echo "$TARGETUSB -> "${DEV}

