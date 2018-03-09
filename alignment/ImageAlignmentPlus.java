/*
 * Copyright (C) 2018 Jorge Marin
 * ImageAlignmentPlus is developed as an Open Source project under the GNU General Public License (GPL).
 */
 
import ij.*;
import ij.process.*;
import ij.gui.*;
import java.awt.*;
import ij.plugin.*;

import ij.IJ;
import ij.io.DirectoryChooser;
import ij.io.OpenDialog;

import java.io.*;
import java.util.*;
import org.apache.commons.io.filefilter.WildcardFileFilter;


public class ImageAlignmentPlus implements PlugIn {
	
	HashMap<Integer, String> stackNames = new HashMap<Integer, String>();
	
	public static int		stackCount 		= 0;
	public static String	transMatFile	= "";
	
	/**
	 * This method gets called by ImageJ / Fiji.
	 */
	@Override
	public void run(String arg) {
		IJ.log("\nImage Registration Program\n"
			 + "--------------------------\n\n");

		// show dialog box and get location of images
		DirectoryChooser dirChooser = new DirectoryChooser("Select folder with the image stacks");
		String location = dirChooser.getDirectory();
		//String location = "/Users/jorge/Desktop/Pics/test/";
		//String location = "/Users/jorge/Desktop/Pics/sessions/180301-163018_cam3/";
		IJ.log("folder: " + location + "\n");

		// scan directory
		final File folder = new File(location);
		scanFiles(folder);

		// create folder for saving resulting images
		String newDir = location + "/aligned";
		File dir = new File(newDir);
		dir.mkdir();

		// show dialog box and select transformation matrix file if exists
		OpenDialog od = new OpenDialog("Select transformation matrix file", null);
		transMatFile = od.getDirectory() + od.getFileName();
		if (transMatFile.equals("nullnull")) {
			IJ.log("no transformation matrix file seleted\n");
			transMatFile = location + "TransformationMatrices.txt";
			HashMap.Entry<Integer, String> entry = stackNames.entrySet().iterator().next();
			IJ.log("Generating transformation matrix file using " + entry.getValue() + "...\n");
			getTransformationMatrix(location, entry.getValue());
		}
		IJ.log("transformation matrix file: " + transMatFile + "\n");
		
		IJ.log("starting alignment process...\n");
		IJ.log("");

		// loop through stacks and align
		int count = 1;
		int progress;
		String progressStr = "";
		for (String stack : stackNames.values()) {
			progress = (100 / stackCount) * (count - 1);
			if (progress < 10)
				progressStr = "    " + progress;
			else
				progressStr = "  " + progress;
			IJ.log("[" + progressStr + "%] aligning stack " + count + "(" + stack + ")\n");
			align(location, stack, newDir);
			count++;
		}

		IJ.log("[100%] program finished.\n");
	}

	/**
	 * Scans files inside directory
	 * 
	 * @param	folder to scan
	 */
	private void scanFiles(final File folder) {		
		FileFilter fileFilter = new WildcardFileFilter(Arrays.asList("*.jpg", "*.png", "*.jpeg"));
	    for (final File fileEntry : folder.listFiles(fileFilter)) {
	        String 	stackName 	= fileEntry.getName().split("_cam")[0];
	        String 	indexStr	= stackName.split("frame_")[1];
	        int   	index 		= Integer.parseInt(indexStr);

	        stackNames.put(index, stackName);
	    }

	    stackCount = stackNames.size(); 
	    IJ.log("stack count = " + stackCount + "\n");
	}


	/**
	 * Get transformation matrix using MultiStackReg
	 * 
	 * @param	path of the source folder with the images to align
	 * @param	filter to open a single subset or stack of images
	 */
	private void getTransformationMatrix(String sourceDir, String filter) {
		// open image sequence as stack
		String cmd = "open=[" + sourceDir + "] file=" + filter + " sort";
		IJ.run("Image Sequence...", cmd);
		ImagePlus imp = IJ.getImage();
		
		// build command
		String[] segments = sourceDir.split("/");
		String idStr = segments[segments.length-1];
		 
		cmd = "stack_1=[" + idStr + "] "
			+ "action_1=[Align] "
			+ "file_1=[" + transMatFile + "] "
			+ "stack_2=None action_2=Ignore file_2=[] "
			+ "transformation=[Scaled Rotation] save";

		// run MultiStackReg
		IJ.run(imp, "MultiStackReg", cmd);

		// close stack window
		imp.close();
	}
	

	/**
	 * Align image stack using MultiStackReg
	 * 
	 * @param	path of the source folder with the images to align
	 * @param	filter to open a single subset or stack of images
	 * @param	path of the destination folder where to save the aligned images
	 */
	private void align(String sourceDir, String filter, String outputDir) {
		// open image sequence as stack
		String cmd = "open=[" + sourceDir + "] file=" + filter + " sort";
		IJ.run("Image Sequence...", cmd);
		ImagePlus imp = IJ.getImage();
		
		// build command depending on the existence of a transformation matrix file (transMatFile)
		String[] segments = sourceDir.split("/");
		String idStr = segments[segments.length-1];

		cmd = "stack_1=[" + idStr + "] "
			+ "action_1=[Load Transformation File] "
			+ "file_1=[" + transMatFile + "] "
			+ "stack_2=None action_2=Ignore file_2=[] "
			+ "transformation=[Scaled Rotation]";

		// run MultiStackReg
		IJ.run(imp, "MultiStackReg", cmd);
		
		// save stack as image sequence
		cmd = "format=PNG start=1 use save=[" + outputDir + "]";
		IJ.run(imp, "Image Sequence... ", cmd);

		// close stack window
		imp.close();
	}

}
