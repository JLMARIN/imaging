# Image Alignment Program #

This repository contains a script written in Java that runs on ImageJ. The script performs alignment/registration of image stacks using the ImageJ StackReg and TurboReg plugins.

## Dependencies ##

***ImageJ***
[ImageJ](https://imagej.net) is a public Java-based image processing program developed at the National Institutes of Health. ImageJ offers multiple distributions with different features. The [Fiji](https://imagej.net/Fiji) distribution is the recommended updated general purpose option to this date.

Check [download and installation instructions](https://imagej.net/Downloads) in the official page.

***StackReg***
[StackReg](http://bigwww.epfl.ch/thevenaz/stackreg/) is a java plugin written for ImageJ by the Biomedical Imaging Group of the École Polytechnique Fédérale de Lausanne.

StackReg is based on a subpixel registration algorithm that uses intensity <sup>[[1]](#ref1)</sup>.The algorithm minimizes the mean square intensity difference between a reference image and a test image. The transformation of the test image, in order to achieve alignment to the reference image, can be done by rigid-body motion (rotation and translation) only, or combined with isometric scaling.

<a name="ref1">[1]</a>: P. Thévenaz, U. E. Ruttimann, and M. Unser, “A pyramid approach to subpixel registration based on intensity,” IEEE Transactions on Image Processing, vol. 7, no. 1, pp. 27–41, 1998.