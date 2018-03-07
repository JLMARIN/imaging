close all;
clear;
clc;

% start measuring execution time
tic;

%% configuration

show = false;
export = true;

% range of pixel for misalignment test
range = 50;

%% select folder with images

% gets directory
myDir = uigetdir;

% get list of files (both .jpg and .png)
myFiles = [dir(fullfile(myDir,'*.jpeg')); dir(fullfile(myDir,'*.jpg')); dir(fullfile(myDir,'*.png'))];

fprintf(1, 'Found %i frames and %i image files in:\n%s\n', length(myFiles)/3, length(myFiles), myDir);

%% create log file

logFile = fullfile(myDir, 'matlab_alignment_log.txt');
fid = fopen(logFile,'w');

fprintf(fid, 'Log file for "alignImagesLoopScript.m"\n');
fprintf(fid, '======================================\n');
fprintf(fid, 'Date            : %s\n', datetime('now'));
fprintf(fid, 'Folder          : %s\n', myDir);
fprintf(fid, 'Images files    : %i\n', length(myFiles));
fprintf(fid, 'Images sets     : %i\n', length(myFiles)/3);
fprintf(fid, '\n');
fprintf(fid, '>>> alignment process started...\n');

%% create folder for new images

if (export)
    newDir = fullfile(myDir, 'aligned');
    if (exist(newDir, 'dir') == 0)
        mkdir(newDir);
        fprintf(1, 'New folder created:\n%s\n', newDir);
    end
end

%% run loop and align images 

for k = 1:3:length(myFiles)
    image1name = myFiles(k).name;
    image1fullName = fullfile(myDir, image1name);
    image2name = myFiles(k+1).name;
    image2fullName = fullfile(myDir, image2name);
    image3name = myFiles(k+2).name;
    image3fullName = fullfile(myDir, image3name);
    
    % read images
    img1=imread(image1fullName);
    img2=imread(image2fullName);
    img3=imread(image3fullName);
    
    % convert rgb image files to gray
    if (size(img1,3) > 1)
        img1 = rgb2gray(img1);
        img2 = rgb2gray(img2);
        img3 = rgb2gray(img3);
    end
    
    % align images
    finalHeight = size(img1,1) - range;
    [corr, img1Cut, img2Cut, img3Cut] = getBestAlignmentThree(img1, img2, img3, range, finalHeight);
    
    if (corr(1) == 0 && corr(2) == 0 && corr(3) == 0)
        imageSetName = image1name(1:end-10);
        fprintf('       image set: %s\n', imageSetName);
        fprintf(fid, 'WARNING: desired height is greater than cut images in set: %s\n', imageSetName);
    end
    
    % save new images as gray png
    if (export)
        [~, oldBaseName, ~] = fileparts(image1name);
        newImage1name = sprintf('%s.png',oldBaseName);
        [~, oldBaseName, ~] = fileparts(image2name);
        newImage2name = sprintf('%s.png',oldBaseName);
        [~, oldBaseName, ~] = fileparts(image3name);
        newImage3name = sprintf('%s.png',oldBaseName);

        imwrite(img1Cut, strcat(newDir,'/',newImage1name));
        imwrite(img2Cut, strcat(newDir,'/',newImage2name));
        imwrite(img3Cut, strcat(newDir,'/',newImage3name));
    end
    
    % show images
    if (show)
        figure;
        subplot(3,3,1), image(img1); title('Image 1','Fontsize', 12);
        subplot(3,3,4), image(img2); title('Image 2','Fontsize', 12);
        subplot(3,3,7), image(img3); title('Image 3','Fontsize', 12);
        
        % combine images
        comb = imfuse(img2Cut, img3Cut, 'falsecolor');
        comb = imfuse(img1Cut, comb, 'falsecolor');
        
        subplot(1,2,2), image(comb); title('Combined Image','Fontsize', 12);
    end
end

% get final execution time
wholeTime = toc;

fprintf(fid, '>>> alignment process finished. Total execution time: %f s\n', wholeTime);

if (export)
    %copyfile *.log newDir
    %copyfile matlab_alignment_log.txt newDir
end

%% end of script