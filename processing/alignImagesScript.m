close all;
clear;
clc;

%% configuration
export=false;

%% load and show images

% Read images (test)
% img1=imread('data/aerial_c_01.jpg');
% img2=imread('data/aerial_c_02.jpg');
% img3=imread('data/aerial_c_03.jpg');

% image file names
img1name = 'frame_0004_cam_1.png';
img2name = 'frame_0004_cam_2.png';
img3name = 'frame_0004_cam_3.png';

% read images
img1=imread(strcat('data/spec3/',img1name));
img2=imread(strcat('data/spec3/',img2name));
img3=imread(strcat('data/spec3/',img3name));

% show
individualImages = figure;
subplot(2,3,1), image(img1); title('Image 1','Fontsize',12);
subplot(2,3,2), image(img2); title('Image 2','Fontsize',12);
subplot(2,3,3), image(img3); title('Image 3','Fontsize',12);

%% align images

range = 50;
[corr, img1Cut, img2Cut, img3Cut] = getBestAlignmentThree(img1, img2, img3, range, 930);

%% show aligned images

figure(individualImages);
subplot(2,3,4), image(img1Cut); title('Image 1 aligned','Fontsize',12);
subplot(2,3,5), image(img2Cut); title('Image 2 aligned','Fontsize',12);
subplot(2,3,6), image(img3Cut); title('Image 3 aligned','Fontsize',12);

%% print correlation results
fprintf('Images 1 and 2 aligned with correlation: %f\n', corr(1));
fprintf('Images 2 and 3 aligned with correlation: %f\n', corr(2));
fprintf('Images 1 and 3 aligned with correlation: %f\n', corr(3));

%% combine images and show

comb = imfuse(img2Cut, img3Cut, 'falsecolor');
comb = imfuse(img1Cut, comb, 'falsecolor');

figure, image(comb);

%% save new images as gray png

if (export)
    mkdir ./data spec3__c
    
    img1_gray=rgb2gray(img1Cut);
    img2_gray=rgb2gray(img2Cut);
    img3_gray=rgb2gray(img3Cut);

    imwrite(img1_gray, strcat('data/spec3__c/',img1name));
    imwrite(img2_gray, strcat('data/spec3__c/',img2name));
    imwrite(img3_gray, strcat('data/spec3__c/',img3name));
end
