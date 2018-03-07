close all;
clear;
clc;

%% configuration

listString = {'cam 1','cam 2','cam 3'};

% flag to turn on/off the different processes
ndviFlag    = true;
gndviFlag   = true;
srFlag      = false;
mtvi2Flag   = false;
ngrdiFlag   = false;

% list of colormap options
base        = 'gradients/gradient_base.mat';
RdYlGn      = 'gradients/gradient_RdYlGn.mat';
thermal     = 'gradients/gradient_thermal.mat';
RdYlGn2     = 'gradients/gradient_RdYlGn2.mat';
base2       = 'gradients/gradient_base2.mat';
GrayGnYlRd  = 'gradients/gradient_GrayGnYlRd.mat';
BlGnYlRd    = 'gradients/gradient_BlGnYlRd.mat';

%% select folder with images

% get directory
myDir = uigetdir;
picsDir = strcat(myDir,'/aligned');

% get list of files (both .jpg and .png)
myFiles = [dir(fullfile(picsDir,'*.jpeg')); dir(fullfile(picsDir,'*.jpg')); dir(fullfile(picsDir,'*.png'))];

fprintf(1, 'Found %i frames and %i image files in:\n%s\n', length(myFiles)/3, length(myFiles), picsDir);

%% create log file

logFile = fullfile(myDir, 'matlab_VegInd_log.txt');
fid = fopen(logFile,'w');

fprintf(fid, 'Log file for "getVegIndLoopScript.m"\n');
fprintf(fid, '======================================\n');
fprintf(fid, 'Date            : %s\n', datetime('now'));
fprintf(fid, 'Folder          : %s\n', picsDir);
fprintf(fid, 'Images files    : %i\n', length(myFiles));
fprintf(fid, 'Images sets     : %i\n', length(myFiles)/3);
fprintf(fid, '\n');

%% read file or get user input for matching cameras IDs and bands

camIndexFile = strcat(myDir,'/cam_index.txt');

if exist(camIndexFile, 'file')
    fileID = fopen(camIndexFile);
    C = textscan(fileID,'%s %u');
    fclose(fileID);
    
    s1 = C{2}(1);
    s2 = C{2}(2);
    s3 = C{2}(3);
    fprintf(fid, '"cam_index.txt" file found\n');
else
    fprintf(fid, '"cam_index.txt" file not found. Asking user for input...\n');
    
    [s1,v1] = listdlg(  'Name', 'Camera and Band Maching',...
                        'PromptString','Select camera for RED band:',...
                        'SelectionMode','single',...
                        'ListString',listString);

    [s2,v2] = listdlg(  'Name', 'Camera and Band Maching',...
                        'PromptString','Select camera for NIR band:',...
                        'SelectionMode','single',...
                        'ListString',listString);

    [s3,v3] = listdlg(  'Name', 'Camera and Band Maching',...
                        'PromptString','Select camera for GREEN band:',...
                        'SelectionMode','single',...
                        'ListString',listString);

    if (v1 == 0 || v2 == 0 || v3 == 0)
        fprintf('ERROR > Selection incomplete. Script terminated.\n');
        fprintf(fid, 'ERROR > Selection incomplete. Script terminated.\n');
        return
    end
end

fprintf(fid, 'Cameras Index: RED=cam%i, NIR=cam%i, GREEN=cam%i\n', s1, s2, s3);
fprintf(fid, '\n');

%% compute Vegetation Indices

% NDVI
if ndviFlag
    %load(base2);
    %load(RdYlGn);
    %load(thermal);
    load(BlGnYlRd);
    computeVI('ndvi', gradient, myDir, myFiles, s1, s2, s3, 1, fid, -0.1, 0.6);
end

% gNDVI
if gndviFlag
    %load(base2);
    %load(RdYlGn);
    %load(thermal);
    %load(RdYlGn2);
    load(BlGnYlRd);
    computeVI('gndvi', gradient, myDir, myFiles, s1, s2, s3, 1, fid, -0.1, 0.6);
end

% SR
if srFlag
    load(base2);
    %load(RdYlGn);
    %load(thermal);
    %load(RdYlGn2);
    computeVI('sr', gradient, myDir, myFiles, s1, s2, s3, 1, fid, -1, 1);
end

% MTVI2
if mtvi2Flag
    load(base2);
    %load(RdYlGn);
    %load(thermal);
    %load(RdYlGn2);
    computeVI('mtvi2', gradient, myDir, myFiles, s1, s2, s3, 1, fid, -1, 1);
end

% NGRDI
if ngrdiFlag
    load(base2);
    %load(RdYlGn);
    %load(thermal);
    %load(RdYlGn2);
    computeVI('ngrdi', gradient, myDir, myFiles, s1, s2, s3, 1, fid, -1, 1);
end

%% end of script