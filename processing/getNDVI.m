close all;
clear;
clc;

%% load and show images

% laod images
img_gre = imread('data/ndvi/IMG_160803_130632_0173_GRE.jpg');
img_red = imread('data/ndvi/IMG_160803_130632_0173_RED.jpg');
img_nir = imread('data/ndvi/IMG_160803_130632_0173_NIR.jpg');

%% load gradient file for NDVI colormap

load('gradient.mat');
NDVIcolormap = gradient;

%% get NDVI

img_ndvi = ndvi(img_nir, img_red);

%% show images

figure;
imshow(img_red); title('RED','Fontsize',12);
figure;
imshow(img_nir); title('NIR','Fontsize',12);

figure;
imshow(img_ndvi,'DisplayRange',[-1 1]); title('NDVI','Fontsize',12);
colormap(NDVIcolormap);
%cmap = colormap;
caxis([-1 1])
hc = colorbar('eastoutside');
