% load negative gradient
load('../gradients/negative_colormap3.mat');

% load full gradient
load('../gradients/gradient_RdYlGn2.mat');

% put together full colormap
positive = gradient(129:end,:);
color_map = [negative_colormap3 ; flip(positive)];

% test it
I = linspace(0,1,256);
figure;
imagesc(I(ones(1,10),:)')
colormap(color_map)

% save values of new matrix in the 8-bit scale [0,255]
color_mapScaled = round(color_map * 255);
