# Arduino Sketches for the USB Camera HUB Board

This repository contains Arduino sketches that are used with the on-board microcontroller in the USB Camera HUB Board. This microcontroller controls the trigger signals sent to the cameras.

## Libraries Dependencies

There are no dependencies on external libraries. Only the "Arduino.h" library is required.

## Arduino Sketches
This folder contains the following Arduino sketches.

* **usbCamHub_trigger:** Contains the main code to control the trigger to the cameras. A global trigger is sent to all cameras. The MCU starts in automatic trigger mode using the period read from the EEPROM if valid, otherwise the default period is 1 second.

* **usbCamHub_seqTrigger:** Contains a variation of the code to control the trigger to the cameras. Sequetial trigger signals are sent to groups of cameras. The MCU starts in automatic trigger mode using the period read from the EEPROM if valid, otherwise the default period is 1 second.

## Flashing the MCU

The MCU used in the board is the ATMEGA328P-AU. Flashing of the MCU can be done using the Arduino IDE and following the standard process. When selecting the board and MCU, choose the "*Arduino Duemilanove*" board and the "*328p*" MCU.

## AT Commands

The programs use the usb-serial FTDI interface to communicate. A set of serial AT command has been defines for interfacing with the MCU and control the way the trigger operates. For a detailed list of the AT commands go to the [AT commands Wiki](https://github.com/JLMARIN/imaging/wiki/AT-Commands).
