close all;
clear;
clc;

%% configuration

show = true;
export = true;

%% 

% gets directory
myDir = uigetdir;

% get list of files (both .jpg and .png)
myFiles = [dir(fullfile(myDir,'*.jpg')); dir(fullfile(myDir,'*.png'))];

fprintf(1, 'Found %i frames and %i image files in:\n%s\n', length(myFiles)/3, length(myFiles), myDir);

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
    
    % align images
    range = 50;
    finalWidth = 930;
    [corr, img1Cut, img2Cut, img3Cut] = getBestAlignmentThree(img1, img2, img3, range, finalWidth);
    
    % save new images as gray png
    if (export)
        img1_gray = rgb2gray(img1Cut);
        img2_gray = rgb2gray(img2Cut);
        img3_gray = rgb2gray(img3Cut);
        
        [~, oldBaseName, ~] = fileparts(image1name);
        newImage1name = sprintf('%s.png',oldBaseName);
        [~, oldBaseName, ~] = fileparts(image2name);
        newImage2name = sprintf('%s.png',oldBaseName);
        [~, oldBaseName, ~] = fileparts(image3name);
        newImage3name = sprintf('%s.png',oldBaseName);

        imwrite(img1_gray, strcat(newDir,'/',newImage1name));
        imwrite(img2_gray, strcat(newDir,'/',newImage2name));
        imwrite(img3_gray, strcat(newDir,'/',newImage3name));
    end
    
    % show images
    if (show)
        figure;
        subplot(3,3,1), image(img1); title('Image 1','Fontsize',12);
        subplot(3,3,4), image(img2); title('Image 2','Fontsize',12);
        subplot(3,3,7), image(img3); title('Image 3','Fontsize',12);
        
        % combine images
        comb = imfuse(img2_gray, img3_gray, 'falsecolor');
        comb = imfuse(img1_gray, comb, 'falsecolor');
        
        subplot(1,2,2), image(comb); title('Combined Image','Fontsize',12);
    end
end
