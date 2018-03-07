close all;
clear;
clc;

%% Load and show images
% Read images
img=imread('data/aerial_01.jpg');

img_gray=rgb2gray(img);

figure;

subplot(2,2,1); imshow(img); title('Original Image','Fontsize',14);
subplot(2,2,2); imshow(img_gray); title('Grayscale Image','Fontsize',14);

subplot(2,2,3); imshowpair(img, img_gray,'Scaling','joint'); title('Joint Images','Fontsize',14);

% save image as grayscale to png file
outputBaseFileName = 'data/aerial_gray_01.png';
imwrite(img_gray, outputBaseFileName);

recalledImage = imread(outputBaseFileName);

subplot(2,2,4); imshow(recalledImage); title('Recalled Image','Fontsize',14);
