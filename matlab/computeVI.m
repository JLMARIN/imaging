function computeVI(VItype, gradient, dir, files, red_idx, nir_idx, grn_idx, printcolormap, fid, rngmin, rngmax)
% COMPUTEVI computes the vegetation index (NDVI, gNDVI, SR, MTVI2 or NGRDI) over a range of multispectral images.
    
    % colormap range definitions
    %rngmin = -0.1;
    %rngmax = 0.6;
    
    %rngmin = -1;
    %rngmax = 1;
    
    % start measuring execution time
    tic;
    
    if (~strcmp(VItype,'ndvi') && ~strcmp(VItype,'gndvi') && ~strcmp(VItype,'sr') && ~strcmp(VItype,'mtvi2') && ~strcmp(VItype,'ngrdi'))
        fprintf('ERROR > wrong input VI type\n');
        return
    end           
    
    fprintf('>>> %s section starts...\n', VItype);
    fprintf(fid, '>>> %s section starts...\n', VItype);

    % create folder for new images
    newDir = fullfile(dir, VItype);
    if (exist(newDir, 'dir') == 0)
        mkdir(newDir);
        fprintf('New folder created:\n%s\n', newDir);
    end

    fprintf('Saving images in: %s\n', newDir);
    fprintf(fid, 'Saving images in: %s\n', newDir);

    % save colormap scales
    figure('Visible','off')
    colormap(gradient);
    caxis([rngmin rngmax])
    hc = colorbar('southoutside');
    set(hc, 'FontSize', 16)
    axis off; set(gcf,'Color','White')
    saveas(gcf,strcat(newDir,'/colormap_hor'),'png')

    figure('Visible','off')
    colormap(gradient);
    caxis([rngmin rngmax])
    hc = colorbar('eastoutside');
    set(hc, 'FontSize', 16)
    axis off; set(gcf,'Color','White')
    saveas(gcf,strcat(newDir,'/colormap_ver'),'png')
    
    warning('off', 'Images:initSize:adjustingMag');

    % run loop and produce NDVI images 
    for k = 1:3:length(files)
        imageRed = files(k-1+red_idx).name;
        imageRedfullName = fullfile(strcat(dir,'/aligned'), imageRed);

        imageNir = files(k-1+nir_idx).name;
        imageNirfullName = fullfile(strcat(dir,'/aligned'), imageNir);
        
        imageGreen = files(k-1+grn_idx).name;
        imageGreenfullName = fullfile(strcat(dir,'/aligned'), imageGreen);

        % read images
        img_red = imread(imageRedfullName);
        img_nir = imread(imageNirfullName);
        img_green = imread(imageGreenfullName);
        
        % compute VI
        switch VItype
            case 'ndvi'
                img_vi = ndvi(img_nir, img_red);
            case 'gndvi'
                img_vi = gndvi(img_nir, img_green);
            case 'sr'
                img_vi = sr(img_nir, img_red);
            case 'mtvi2'
                img_vi = mtvi2(img_nir, img_green, img_red);
            case 'ngrdi'
                img_vi = ngrdi(img_green, img_red);
        end

        % save image
        outputFileName = imageRed(1:end-10);  % get image base name

        scaledI = (img_vi-min(img_vi(:))) ./ (max(img_vi(:)-min(img_vi(:))));    % scale image to range [0 1]
        falsecolor = ind2rgb(gray2ind(scaledI,255), gradient);                   % index image and apply colormap
            
        if printcolormap
            figure('Visible','off');
            imshow(img_vi,'DisplayRange',[rngmin rngmax]);
            %imshow(falsecolor);
            colormap(gradient);
            caxis([rngmin rngmax]);
            hc = colorbar('eastoutside');
            %hc = colorbar('soutchoutside');
            set(hc, 'FontSize', 12);
            axis off; set(gcf,'Color','White');
            saveas(gcf,strcat(newDir, '/', outputFileName),'png');
        else
            imwrite(falsecolor, strcat(newDir, '/', outputFileName, '.png'));
        end
    end
    
    % get final execution time
    wholeTime = toc;

    fprintf('>>> %s section finished. Total execution time: %f s\n', VItype, wholeTime);
    fprintf(fid, '>>> %s section finished. Total execution time: %f s\n', VItype, wholeTime);
end