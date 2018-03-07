function [corr, img1Cut, img2Cut, img3Cut] = getBestAlignmentThree_temp(img1, img2, img3, range, height)
%GETBESTALIGNMENT
%
%   [corr, idx, maxCorr, img1Cut, img2Cut] = getBestAlignment(img1, img2, range)
%       output(s):
%           - corr      :   correlation between images
%           - img1Cut   :   image 1 after cut
%           - img2Cut   :   image 2 after cut
%           - img3Cut   :   image 3 after cut
%       input(s):
%           - img1      :   image 1
%           - img2      :   image 2
%           - img3      :   image 3
%           - range     :   range of missalignment in pixels to test
%           - height    :   desired output height for all images
%
%   Finds best alignment between three images with height displacement.
%   Also cuts input images and produces corrected images with best alignment.
%
%	Date            Author          Notes
%   2017/JUN/26     Jorge Marin     Initial release

    % get width and height
    h = size(img2, 1);
    w = size(img2, 2);
    
    corr = zeros(1,3);
    
    %% align images 2 and 3 first
    [img2_1, img3_1] = align(img2, img3, range);
    
    %% combine aligned images 2 and 3
    %comb_23 = imfuse(img2_1, img3_1, 'falsecolor');
    comb_23 = rgb2gray(imfuse(img2_1, img3_1, 'falsecolor'));
    
    %% cut image 1 according to new combined image
    newH = size(comb_23, 1);

    rect = [1 h-newH w newH-1];
    img1Temp = imcrop(img1, rect);
    
    %% align image 1 with combined image (2 and 3)
    [img1_1, img23_1] = align(img1Temp, comb_23, range);
    
    %% cut images according to new dimensions
    newH = size(img23_1, 1);
    
    rect = [1 1 w newH-1];
    
    img1Cut = imcrop(img1_1, rect);
    img2Cut = imcrop(img2_1, rect);
    img3Cut = imcrop(img3_1, rect);
    
    %% cut all images to the desired final height
    if (height < newH)
        rect = [1 1 w height-1];
    
        img1Cut = imcrop(img1_1, rect);
        img2Cut = imcrop(img2_1, rect);
        img3Cut = imcrop(img3_1, rect);
    else
        fprintf('WARNING: desired height is greater than cut images\n');
        return;
    end
    
    %% get correlations between aligned images
    corr(1) = corr2(img1Cut, img2Cut);
    corr(2) = corr2(img2Cut, img3Cut);
    corr(3) = corr2(img1Cut, img3Cut);
end

function [img1Cut, img2Cut] = align(img1, img2, range)
% ALIGN corrects two images for missalignment.

    h = size(img1, 1);
    w = size(img1, 2);
    
    corrOld = 0;

    for i = 1:range
        rect_1 = [1 i+1 w h-i-1];
        img1Cut = imcrop(img1, rect_1);

        rect_2 = [1 1 w h-i-1];
        img2Cut = imcrop(img2, rect_2);

        corr = corr2(img1Cut, img2Cut);

        if (corr < corrOld)
            i = i - 1;
            break;
        end

        corrOld = corr;
    end
    
    rect_1 = [1 i+1 w h-i-1];
    img1Cut = imcrop(img1, rect_1);

    rect_2 = [1 1 w h-i-1];
    img2Cut = imcrop(img2, rect_2);
end