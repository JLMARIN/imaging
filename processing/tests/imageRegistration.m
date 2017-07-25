close all;
clear;
clc;

%% Load and show images

% Read images
img=imread('data/aerial_01.jpg');
tmp=imread('data/aerial_02.jpg');

% Because imregister works with volumetric input as well as with planar 2-D
% images, there is ambiguity with multi-channel 2-D images, like RGB images.
% 
% To avoid this ambiguity, 2-D images must be formed from RGB images prior to
% calling imregister. One way to do this is to use rgb2gray prior to calling
% imregister. A particular color channel of the images can also be used.
img=rgb2gray(img);
tmp=rgb2gray(tmp);

f1 = figure;
imshowpair(img, tmp, 'montage');
figure(f1);
title('Unregistered');

f2 = figure; 
imshowpair(img, tmp);
figure(f2);
title('Unregistered');

%% Set up the Initial Registration

%[optimizer,metric] = imregconfig('multimodal');
[optimizer,metric] = imregconfig('monomodal');

movingRegisteredDefault = imregister(tmp, img, 'affine', optimizer, metric);

f3 = figure; 
imshowpair(movingRegisteredDefault, img);
figure(f3);
title('A: Default registration');
