close all;
clear;
clc;

%% load and show images

% select image set
image_set = 3;

% load images
if image_set == 1
    img_gre = imread('data/ndvi/IMG_160803_130632_0173_GRE.jpg');
    img_red = imread('data/ndvi/IMG_160803_130632_0173_RED.jpg');
    img_nir = imread('data/ndvi/IMG_160803_130632_0173_NIR.jpg');
elseif image_set == 2
    img_gre = imread('data/calibration/170818_frame_0001_cam_3.png');
    img_red = imread('data/calibration/170818_frame_0001_cam_1.png');
    img_nir = imread('data/calibration/170818_frame_0001_cam_2.png');
elseif image_set == 3
    img_gre = imread('data/calibration/170818_frame_0002_cam_3.png');
    img_red = imread('data/calibration/170818_frame_0002_cam_1.png');
    img_nir = imread('data/calibration/170818_frame_0002_cam_2.png');
end

%% load gradient file for NDVI colormap

load('gradients/gradient_base2.mat');
NDVIcolormap = gradient;

% colormap range definitions
rngmin = -0.08;
rngmax = 0.17;

%% get NDVI

img_ndvi = ndvi(img_nir, img_red);

%% show images

figure;
imshow(img_red); title('RED','Fontsize',12);
figure;
imshow(img_nir); title('NIR','Fontsize',12);

figure;
imshow(img_ndvi,'DisplayRange',[rngmin rngmax]); title('NDVI','Fontsize',12);
colormap(NDVIcolormap);
caxis([rngmin rngmax])
hc = colorbar('eastoutside');
