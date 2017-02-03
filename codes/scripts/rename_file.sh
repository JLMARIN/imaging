#!/bin/bash
#
# Usage: capture
#
# Copy the current image and saves with a timestamp
#
timestamp=$(date +"%y%m%d-%H:%M:%S")
image=./pics/frame.jpg
output=./pics/frame-$timestamp.jpg
cp $image $output
#