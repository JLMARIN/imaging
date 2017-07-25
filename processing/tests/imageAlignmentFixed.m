close all;
clear;
clc;

%% Load and show images

% Read images
img1=imread('data/aerial_c_01.jpg');
img2=imread('data/aerial_c_02.jpg');
img3=imread('data/aerial_c_03.jpg');

figure;
subplot(2,3,1), imshow(img1); title('Image 1','Fontsize',12);
subplot(2,3,2), imshow(img2); title('Image 2','Fontsize',12);
subplot(2,3,3), imshow(img3); title('Image 3','Fontsize',12);

% get width and height
h = size(img1, 1);
w = size(img1, 2);

%% Perform cuts for alignment

% define overlap (must be known)
overlap = 100;

rect_1 = [1 2*overlap w h-2*overlap-1];
img_cut1 = imcrop(img1, rect_1);

rect_2 = [1 overlap+1 w h-2*overlap-1];
img_cut2 = imcrop(img2, rect_2);

rect_3 = [1 1 w h-2*overlap-1];
img_cut3 = imcrop(img3, rect_3);

subplot(2,3,4), imshow(img_cut1); title('Image 1 adjusted','Fontsize',12);
subplot(2,3,5), imshow(img_cut2); title('Image 2 adjusted','Fontsize',12);
subplot(2,3,6), imshow(img_cut3); title('Image 3 adjusted','Fontsize',12);

%% Find correlation between final images

r1_2 = corr2(rgb2gray(img1), rgb2gray(img2));
r2_3 = corr2(rgb2gray(img2), rgb2gray(img3));
r1_3 = corr2(rgb2gray(img1), rgb2gray(img3));

r = [r1_2 r2_3 r1_3]

ra1_2 = corr2(rgb2gray(img_cut1), rgb2gray(img_cut2));
ra2_3 = corr2(rgb2gray(img_cut2), rgb2gray(img_cut3));
ra1_3 = corr2(rgb2gray(img_cut1), rgb2gray(img_cut3));

ra = [ra1_2 ra2_3 ra1_3]

%% Plot overlapped images

figure;
subplot(1,3,1), imshowpair(img_cut1,img_cut2);
subplot(1,3,2), imshowpair(img_cut2,img_cut3);
subplot(1,3,3), imshowpair(img_cut1,img_cut3);
