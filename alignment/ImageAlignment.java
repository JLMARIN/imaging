/*
 * Copyright (C) 2018 Jorge Marin
 * ImageAlignment is developed as an Open Source project under the GNU General Public License (GPL).
 */
 
import ij.*;
import ij.process.*;
import ij.gui.*;
import java.awt.*;
import ij.plugin.*;

import ij.IJ;
import ij.io.DirectoryChooser;

import java.io.*;
import java.util.Arrays;
import java.util.ArrayList;
import org.apache.commons.io.filefilter.WildcardFileFilter;


public class ImageAlignment implements PlugIn {
	
	ArrayList<String> stackNames = new ArrayList<String>();
	
	public static int		stackCount 		= 0;
	public static int		imagesPerStack 	= 0;
	
	/**
	 * This method gets called by ImageJ / Fiji.
	 */
	@Override
	public void run(String arg) {
		IJ.log("\nImage Registration Program\n"
			 + "--------------------------\n\n");

		// show dialog box and get directory
		DirectoryChooser dirChooser = new DirectoryChooser("Select folder with the image stacks");
		String location = dirChooser.getDirectory();
		//String location = "/Users/jorge/Desktop/Pics/test";
		IJ.log("folder: " + location + "\n");

		// scan directory
		final File folder = new File(location);
		scanFiles(folder);

		// create folder for saving resulting images
		String newDir = location + "/aligned";
		File dir = new File(newDir);
		dir.mkdir();

		IJ.log("--------------------------\n");

		int count = 1;
		int progress;
		String progressStr = "";
		for (String stack : stackNames) {
			progress = (100 / stackCount) * (count - 1);
			if (progress < 10)
				progressStr = "    " + progress;
			else
				progressStr = "  " + progress;
			IJ.log("[" + progressStr + "%] aligning stack " + count + "(" + stack + ")\n");
			align(location, stack, newDir);
			count++;
		}

		IJ.log("[100%] Program finished.\n");
	}

	/**
	 * Scans files inside directory
	 */
	private void scanFiles(final File folder) {
		String 	stackName 	= "";
		String 	temp;
		int 	count 		= 0;
		
		FileFilter fileFilter = new WildcardFileFilter(Arrays.asList("*.jpg", "*.png", "*.jpeg"));
	    for (final File fileEntry : folder.listFiles(fileFilter)) {
	        temp = fileEntry.getName().split("_cam")[0];
	        if (!stackName.equals(temp)) {
	        	stackName = temp;
	        	stackNames.add(stackName);
	        	if (stackCount == 1 && count > 0) {
	        		imagesPerStack = count;
	        	}
	        	stackCount++;
	        	//IJ.log(stackName + "\n");
	        }
	        count++;
	    }
	    
	    IJ.log("stack count = " + stackCount + "\n");
	    IJ.log("images per stack = " + imagesPerStack + "\n");
	}

	/**
	 * Align image stack using StackReg
	 */
	private void align(String sourceDir, String filter, String outputDir) {
		String cmd = "open=" + sourceDir + " file=" + filter + " sort";
		IJ.run("Image Sequence...", cmd);
		ImagePlus imp = IJ.getImage();
		IJ.run(imp, "StackReg ", "transformation=[Scaled Rotation]");
		cmd = "format=PNG start=1 use save=" + outputDir;
		IJ.run(imp, "Image Sequence... ", cmd);
		imp.close();
	}

}
