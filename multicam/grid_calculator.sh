#!/bin/bash

# ----------------------------------------------------------------------------------
# Usage: ./grid_calculator.sh [NBR OF ELEMENTS] [WIDTH] [HEIGHT]
#
# [NBR OF ELEMENTS] number of image elements to arrange
# [WIDTH]           width of the images in pixels
#                   (e.g. 320)
# [HEIGHT]          height of the images in pixels
#                   (e.g. 180)
# ----------------------------------------------------------------------------------
# Calculates the best square grid fit for a given number of elements and prints out
# the size of the grid and the offset of images based given image size
#
# Remember to give execute permission to the script by:
# $ chmod +x /path/to/script.sh
# ----------------------------------------------------------------------------------

# read arguments
N=$1
WIDTH=$2
HEIGHT=$3

# calculate rows and columns
R=$(python -c "from math import sqrt; from math import floor; print int(floor(sqrt($N)))")
C=$(python -c "from math import ceil; print int(ceil($N/$R))")

printf "%d,%d" $R $C

for ((i=0; i<$R; i++));
do
    for ((j=0; j<$C; j++));
    do
        top=$((-HEIGHT*i))
        left=$((-WIDTH*j))
        printf ",%d,%d" $top $left
    done
done

printf "\n"
