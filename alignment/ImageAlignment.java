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
import org.apache.commons.io.filefilter.WildcardFileFilter;


public class ImageAlignment implements PlugIn {
	
	public static String 	location 	= "/Users/jorge/Desktop/Pics/test";
	public static String[] 	stackNames;
	//List<String> stackNames = new ArrayList<String>();
	public static int		stackSize;
	
	/**
	 * This method gets called by ImageJ / Fiji.
	 */
	@Override
	public void run(String arg) {
		IJ.log("Image Registration Program\n"
			 + "--------------------------\n\n");
		
		DirectoryChooser dirChooser = new DirectoryChooser("Select folder with the image stacks");
		IJ.log("folder: " + dirChooser.getDirectory() + "\n");
		
		//final File folder = new File(location);
		//IJ.log("folder: " + location + "\n");

		//scanfiles(folder);
		
		//IJ.log("found " + listFilesForFolder(folder) + " image files\n");
		
		//align();
	}

	/**
	 * Find files inside folder
	 */
	public void scanfiles(final File folder) {
		int count = 0;
		FileFilter fileFilter = new WildcardFileFilter(Arrays.asList("*.jpg", "*.png", "*.jpeg"));
	    for (final File fileEntry : folder.listFiles(fileFilter)) {
	        count++;
	    }
	    IJ.log("found " + count + " image files\n");
	}

	/*public Integer listFilesForFolder(final File folder) {
	    Integer count = 0;
	    for (final File fileEntry : folder.listFiles()) {
	        if (fileEntry.getName().toLowerCase().endsWith(".jpg") || fileEntry.getName().toLowerCase().endsWith(".jpeg") || fileEntry.getName().toLowerCase().endsWith(".png")) {
	        	count++;
	        	
	        }
	    }
	    return count;
	}*/
	
	/**
	 * Align image stack using StackReg
	 */
	public void align() {
		IJ.run("Image Sequence...", "open=/Users/jorge/Desktop/Pics/test file=frame_0000 sort");
		ImagePlus imp = IJ.getImage();
		IJ.run(imp, "StackReg ", "transformation=[Scaled Rotation]");
		File dir = new File("/Users/jorge/Desktop/Pics/test/aligned");
		dir.mkdir();
		IJ.run(imp, "Image Sequence... ", "format=PNG start=1 use save=/Users/jorge/Desktop/Pics/test/aligned");
		imp.close();
	}

}
