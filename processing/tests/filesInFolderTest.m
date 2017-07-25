
myDir = uigetdir; % gets directory

myFiles = dir(fullfile(myDir,'*.jpg')); % gets all jpeg files in struct

for k = 1:length(myFiles)
    baseFileName = myFiles(k).name;
    %fullFileName = fullfile(myDir, baseFileName);
    fprintf(1, 'Now reading %s\n', baseFileName);
end

for k = 1:3:length(myFiles)
    image1 = myFiles(k).name;
    image2 = myFiles(k+1).name;
    image3 = myFiles(k+2).name;

    fprintf(1, 'Image set: %s, %s, %s\n', image1, image2, image3);
end