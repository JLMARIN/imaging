# Arduino Sketches for the USB Camera HUB Board #

This repository contains Arduino sketches that are used with the on-board microcontroller in the USB Camera HUB Board. This microcontroller controls the trigger signals sent to the cameras.

## Libraries Dependencies ##

There are no dependencies on external libraries. Only the "Arduino.h" library is required.

## Arduino Sketches ##
This folder contains the following Arduino sketches.

* **usbCamHub_trigger:** Contains the main code to control the trigger to the cameras. A global trigger is sent to all cameras. The MCU starts in automatic trigger mode using the period read from the EEPROM if valid, otherwise the default period is 1 second.

* **usbCamHub_seqTrigger:** Contains a variation of the code to control the trigger to the cameras. Sequetial trigger signals are sent to groups of cameras. The MCU starts in automatic trigger mode using the period read from the EEPROM if valid, otherwise the default period is 1 second.