% example from: https://www.mathworks.com/examples/image/mw/images-ex81619570-registering-an-image-using-normalized-cross-correlation

close all;
clear;
clc;

%% Load and show images

% Read images
tmp=imread('data/peppersCut.png');
img=imread('data/peppersOriginal.png');

% Display images
figure, imshow(tmp); title('Template','Fontsize',12);
figure, imshow(img); title('Image','Fontsize',12);

%% Choose subregions of each image

% non-interactively
rect_tmp = [64 52 60 46];
rect_img = [144 86 159 127];
sub_tmp = imcrop(tmp,rect_tmp);
sub_img = imcrop(img,rect_img);

% OR
% interactively
% [sub_tmp, rect_tmp] = imcrop(tmp);
% [sub_img, rect_img] = imcrop(img);

% display sub images
figure, imshow(sub_tmp); title('Sub-Template','Fontsize',12);
figure, imshow(sub_img); title('Sub-Image','Fontsize',12);

%% Do Normalized Cross-Correlation and Find Coordinates of Peak

c = normxcorr2(sub_tmp(:,:,1),sub_img(:,:,1));
figure, surf(c), shading flat

%% Find the Total Offset Between the Images

% offset found by correlation
[max_c, imax] = max(abs(c(:)));
[ypeak, xpeak] = ind2sub(size(c),imax(1));
corr_offset = [(xpeak-size(sub_tmp,2))
            (ypeak-size(sub_tmp,1))];
        
% relative offset of position of subimages
rect_offset = [(rect_img(1)-rect_tmp(1))
            (rect_img(2)-rect_tmp(2))];

% total offset
offset = corr_offset + rect_offset;
xoffset = offset(1);
yoffset = offset(2);

%% See if "tmp" was Extracted from "img"

xbegin = round(xoffset+1);
xend   = round(xoffset+ size(tmp,2));
ybegin = round(yoffset+1);
yend   = round(yoffset+size(tmp,1));

% extract region from peppers and compare to onion
extracted_tmp = img(ybegin:yend,xbegin:xend,:);
if isequal(tmp, extracted_tmp)
 disp('tmp was extracted from img')
end

%% Pad the Onion Image to the Size of the Peppers Image

recovered_tmp = uint8(zeros(size(img)));
recovered_tmp(ybegin:yend,xbegin:xend,:) = tmp;

figure, imshow(recovered_tmp);

%% Use Alpha Blending To Show Images Together

figure, imshowpair(img(:,:,1),recovered_tmp,'blend');
