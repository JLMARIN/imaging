# Individual Cameras and Programs #

This repository contains a software tools and examples for evaluating the different features of individual USB2.0 UVC cameras.

## List of Cameras and Folder Structure ##

Click on each camera to go to the corresponding wiki documentation.

| **Folder/ID** | **Manufacturer** | **Camera**          |
 ---------------|------------------|---------------------|
| elp_1         |    ELP           | [ELP-USB500W02M](https://github.com/JLMARIN/imaging/wiki/ELP-Ailipu-Technology-Co.-%5BELP-USB500W02M%5D) |
| elp_2         |    ELP           | [ELP-USB130W01MT-B/W](https://github.com/JLMARIN/imaging/wiki/ELP-Ailipu-Technology-Co.-%5BELP-USB130W01MT-B-W%5D)|
| tis_1         |    TIS           | [DMM 42BUC03-ML](https://github.com/JLMARIN/imaging/wiki/The-Imaging-Source-%5BDMM-42BUC03-ML%5D)     |
| tis_2         |    TIS           | DMM 72BUC02-ML      |

Each folder contains a set ot shell scripts to test the features of the camera. A `config` subfolder inside each camera folder contains different pre-defined configuration files and a script for configuring the camera. This configuration script and files are also used by scripts in other parts of this software package (e.g. `multicam`, `spec3`).

Open shell scripts to see documentation on how to use.
