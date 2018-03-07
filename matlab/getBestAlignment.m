function [corr, idx, maxCorr, img1Cut, img2Cut] = getBestAlignment(img1, img2, range)
%GETBESTALIGNMENT
%
%   [corr, idx, maxCorr, img1Cut, img2Cut] = getBestAlignment(img1, img2, range)
%       output(s):
%           - corr      :   vector with missalignment function
%           - idx       :   index of pixel rows of missalignment
%           - maxCorr   :   maximum correlation obtained at best fit
%           - img1Cut   :   image 1 after cut
%           - img2Cut   :   image 2 after cut
%       input(s):
%           - img1      :   image 1
%           - img2      :   image 2
%           - range     :   range of pixels to test
%
%   Finds the vector with missalignment function. Max value indicates the
%   missalignment in pixels that gives the best match. Also cuts input
%   images and produces corrected images with best alignment.
%
%	Date            Author          Notes
%   2017/JUN/23     Jorge Marin     Initial release

    % get width and height
    h = size(img1, 1);
    w = size(img2, 2);
    
    corrArray = zeros(range,1);
    
    for i = 1:range
        rect_1 = [1 i+1 w h-i-1];
        img_cut_1 = imcrop(img1, rect_1);

        rect_2 = [1 1 w h-i-1];
        img_cut_2 = imcrop(img2, rect_2);

        corrArray(i) = corr2(rgb2gray(img_cut_1), rgb2gray(img_cut_2));
    end
    
    corr = corrArray;
    
    [maxCorr, idx] = max(corrArray);
    
    rect_1 = [1 idx+1 w h-idx-1];
    img1Cut = imcrop(img1, rect_1);

    rect_2 = [1 1 w h-idx-1];
    img2Cut = imcrop(img2, rect_2);
end