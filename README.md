# University of Alberta UAV Imaging #

This repository contains source code and relevant content for the UAV Imaging platform as part of UAV research developed at the University of Alberta.

## LICENSE INFORMATION ##

Copyright (C) 2017 University of Alberta

This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.
The full text is available here: [http://www.gnu.org/licenses/gpl-2.0.html] and is also copied in file LICENSE inside this folder distribution.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

## Runtime Dependencies ##

The following packages are required to run the programs:

- v4l-utils
- gstreamer-1.0
- jq
- inotify (for spec3, and multicam)
- geographiclib (only for scripts in 'utilities' folder)
- exiftool (only for scripts in 'utilities' folder)
- opencv >= v2.4 (for programs in 'focus' folder)
- ImageJ (for programs in 'alignment' folder)

On a Debian / Ubuntu system, the following command line instructions can be used to install all required packages:

```
# v4l-utils
sudo apt-get install v4l-utils 

# gstreamer-1.0
sudo apt-get install gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly

# jq
sudo apt-get install jq

# inotify
sudo apt-get install inotify-tools

# geographiclib
sudo apt-get install geographiclib-tools

# exiftool
sudo apt-get install libimage-exiftool-perl

# opencv
check README inside ./focus

# ImageJ
check README inside ./alignment
```

## Repository Structure ##
The structure of the repository is as follows.

* **alignment:** Contains the code for the MCU in the USB Camera HUB board.
* **arduino:** Contains the code for the MCU in the USB Camera HUB board.
* **camera:** Contains the code to interface with individual cameras.
* **focus:** Contains the code for camera focus operations.
* **matlab:** Contains matlab code for processing images.
* **multicam:** Contains the code to interface with multiple cameras.
* **spec3:** Contains the code to interface with the 3-cameras multispectral system.
* **spec3_rijesh:** Contains a variation of spec3 used by Rijesh.
* **tests:** Contains testing code under development.
* **utilities:** Contains a series of utility scripts.

## Running Code ##
This repository contains code written in multiple languages (Shell Scripts, C++, and Java). Most programs include instructions inside on how to execute and what arguments are needed. In some cases, information is also provided in the README files of each folder.

## Administrators ##

Jorge Marin (marinmar@ualberta.ca)

## Collaborators ##

Rijesh Augustine (rijesh@ualberta.ca)

Dr. Duncan Elliot (delliott@ualberta.ca)
