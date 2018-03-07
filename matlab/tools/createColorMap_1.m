% lenght of colormap
len = 128;

% matrix where each row is a color triplet
T = [110, 255,   0
     155, 255,   0
     192, 255,   0
     224, 255,   0
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
I = linspace(0,1,len);
figure;
imagesc(I(ones(1,10),:)')
colormap(map)

% save values of new matrix in the 8-bit scale [0,255]
mapS = round(map * 255);
