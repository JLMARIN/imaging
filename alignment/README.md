# Image Alignment Program #

This repository contains a script written in Java that runs on ImageJ. The script performs alignment/registration of image stacks using the ImageJ StackReg and TurboReg plugins.

## Dependencies ##

***ImageJ***
[ImageJ](https://imagej.net) is a public Java-based image processing program developed at the National Institutes of Health. ImageJ offers multiple distributions with different features. The [Fiji](https://imagej.net/Fiji) distribution is the recommended updated general purpose option to this date.

Check [download and installation instructions](https://imagej.net/Downloads) in the official page.

***StackReg***
[StackReg](http://bigwww.epfl.ch/thevenaz/stackreg/) is a java plugin written for ImageJ by the Biomedical Imaging Group of the École Polytechnique Fédérale de Lausanne. Refer to the official webapge for instructions on how to download and use.

StackReg is based on a subpixel registration algorithm that uses intensity <a>[[1]](#ref1)</a>.The algorithm minimizes the mean square intensity difference between a reference image and a test image. The transformation of the test image, in order to achieve alignment to the reference image, can be done by rigid-body motion (rotation and translation) only, or combined with isometric scaling.

According to the StackReg instructions:

"The StackReg plugin requires that a second plugin, named TurboReg, is installed. This ancillary plugin is available [here](http://bigwww.epfl.ch/thevenaz/turboreg/)."

## How to Use ##

The current implementation of the ImageAlignment.java program uses rigid-body motion (rotation and translation) combined with isometric scaling. The script must be run inside ImageJ. Once ImageJ is open click on *File > New > Script*. This will open the Script window. Click *File > Open* and locate the ImageAlignment.java file. From here you can click *Run* to begin execution.

## Known Issues ##

ImageJ comes bundled with a Java that is just a JRE (Java Runtime Environment) and not a full JDK. In some cases trying to run scripts gives an error about "javac.jar" not found.

On OSX and Unix, you can switch to using the system Java instead of the bundled one by navigating to your Fiji.app package (in the OSX Finder, right-click > *Show Package Contents*) and renaming the java folder to something like `java-old`. Then restart Fiji and check you're running the right Java version by going to *Plugins > Utilities > ImageJ Properties*, which should report something like:

`java.home: /Library/Java/JavaVirtualMachines/jdk1.8.0_111.jdk/Contents/Home/jre`

Answer taken from: http://forum.imagej.net/t/no-javac-jar-found/2340/5

## References ##

<a name="ref1">[1]</a>: P. Thévenaz, U. E. Ruttimann, and M. Unser, “[A pyramid approach to subpixel registration based on intensity](http://bigwww.epfl.ch/publications/thevenaz9801.html),” IEEE Transactions on Image Processing, vol. 7, no. 1, pp. 27–41, 1998.
