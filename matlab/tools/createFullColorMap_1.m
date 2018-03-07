% load negative gradient
load('../gradients/negative_colormap.mat');

% lenght of (positive portion) colormap
len = 128;

% matrix where each row is a color triplet
T = [  0, 175,   0
      64, 195,   0
     128, 215,   0
     191, 235,   0
     255, 255,   0
     255, 216,   0
     255, 180,   0
     255, 140,   0
     255,  94,   0
     255,   0,   0]./255;
 
% vector with the range of each color (equally spaced)
x = round(0 : len/(length(T)-1) : len)';

% interpolate to create map
map = interp1(x/len, T, linspace(0,1,len));
 
% test it
% I = linspace(0,1,len);
% figure;
% imagesc(I(ones(1,10),:)')
% colormap(map)

% put together full colormap
color_map = [negative_colormap ; flip(map)];

% test it
I = linspace(0,1,len*2);
figure;
imagesc(I(ones(1,10),:)')
colormap(color_map)

% save values of new matrix in the 8-bit scale [0,255]
color_mapScaled = round(color_map * 255);
