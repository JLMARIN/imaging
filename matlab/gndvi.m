function gndvi = gndvi(nir, green)
%GNDVI
%
%   gndvi = gndvi(nir, green)
%       output(s):
%           - gndvi     :   gNDVI image
%       input(s):
%           - nir       :   NIR band image
%           - green     :   green band image
%
%   Computes Green Normalized Difference Vegetation Index (gNDVI) image.
%
%	Date            Author          Notes
%   2017/AUG/15     Jorge Marin     Initial release

    nir = double(nir);
    green = double(green);
    
    gndvi = (nir - green) ./ (nir + green);

end