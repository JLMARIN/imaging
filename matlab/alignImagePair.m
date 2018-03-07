close all;
clear;
clc;

%% configuration
save=true;
export=false;

%% load and show images

% Read images (test)
% img1name = 'test/aerial_c_01.jpg';
% img2name = 'test/aerial_c_02.jpg';
% img3name = 'test/aerial_c_03.jpg';

% image file names
img1name = 'spec3/frame_0003_cam_1.png';
img2name = 'spec3/frame_0003_cam_2.png';
img3name = 'spec3/frame_0003_cam_3.png';

% read images
img1=imread(strcat('data/',img1name));
img2=imread(strcat('data/',img2name));
img3=imread(strcat('data/',img3name));

% show
individualImages = figure;
subplot(2,2,1), image(img1); title('Image 1','Fontsize',12);
subplot(2,2,2), image(img2); title('Image 2','Fontsize',12);

%% align images

range = 50;
[corr, idx, maxCorr, img1Cut, img2Cut] = getBestAlignment(img1, img2, range);

%% show aligned images

figure(individualImages);
subplot(2,2,3), image(img1Cut); title('Image 1 aligned','Fontsize',12);
subplot(2,2,4), image(img2Cut); title('Image 2 aligned','Fontsize',12);

%% print correlation results
fprintf('Images 1 and 2 aligned with correlation: %f\n', maxCorr);

%% combine images and show

comb1 = imfuse(img1, img2, 'falsecolor');
comb2 = imfuse(img1Cut, img2Cut, 'falsecolor');

figure;
subplot(1,2,1), image(comb1);
subplot(1,2,2), image(comb2);

%% plot correlation

figure;
ylabel('Correlation', 'fontsize', 18);
xlabel('Displacement (pixels)', 'fontsize', 18);
hold all;
plot((1:1:range), corr, 'k','LineWidth', 2)
plot(idx, maxCorr, 'k.','MarkerSize', 20)
grid on;
axis([0 range, 0.7 0.9])
set(gca, ...
    'fontsize'    , 18       , ...
    'Box'         , 'on'     , ...
    'XTick'       , 0:10:range  , ...
    'YTick'       , 0:0.05:1  , ...
    'LineWidth'   , 3         );
text(idx,maxCorr+0.01,['(' num2str(idx) ', ' num2str(maxCorr) ')'],'FontSize', 18)
legend('correlation','maxima');

if save == true
    set(gcf, 'PaperPositionMode', 'auto');
    print -depsc2 graph.eps
end

%% save new images as gray png

if (export)
    mkdir ./data spec3__c
    
    img1_gray=rgb2gray(img1Cut);
    img2_gray=rgb2gray(img2Cut);
    img3_gray=rgb2gray(img3Cut);

    imwrite(img1_gray, strcat('data/spec3__c/',img1name));
    imwrite(img2_gray, strcat('data/spec3__c/',img2name));
    imwrite(img3_gray, strcat('data/spec3__c/',img3name));
end
