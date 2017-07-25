close all;
clear;
clc;

%% Load image

% Read image
img=imread('data/aerial.jpg');

figure, imshow(img); title('Original Image','Fontsize',12);

h = size(img, 1);
w = size(img, 2);

%% Generate sub-images

% define overlap
overlap = 100;

rect_1 = [0 0 w h-2*overlap];
img_cut1 = imcrop(img, rect_1);

rect_2 = [0 overlap w h-2*overlap-1];
img_cut2 = imcrop(img, rect_2);

rect_3 = [0 2*overlap w h-2*overlap-1];
img_cut3 = imcrop(img, rect_3);

% display sub-images
figure
subplot(3,1,1), imshow(img_cut1); title('Cut 1','Fontsize',12);
subplot(3,1,2), imshow(img_cut2); title('Cut 2','Fontsize',12);
subplot(3,1,3), imshow(img_cut3); title('Cut 3','Fontsize',12);

%% Save images

imwrite(img_cut1, 'data/aerial_01.jpg');
imwrite(img_cut2, 'data/aerial_02.jpg');
imwrite(img_cut3, 'data/aerial_03.jpg');
