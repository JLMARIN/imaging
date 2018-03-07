% lenght of colormap
len = 128;

% matrix where each row is a color triplet
T = [255, 238, 173
     255, 223,  84
     248, 183,  58
     229, 115,  97
     204,   0, 119
     149,   0, 128
      84,   0, 136
      33,   6, 111
      26,  11,  56
       0,   0,   0]./255;

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
