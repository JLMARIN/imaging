% lenght of colormap
len = 128;

% matrix where each row is a color triplet
% T = [225, 225, 225
%      128, 128, 128
%       56,  56,  56]./255;

T = [ 23,  30, 110
      46,  91, 166
       0, 184, 220]./255;

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
