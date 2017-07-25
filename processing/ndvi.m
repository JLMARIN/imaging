function ndvi = ndvi(nir, red)
%NDVI
%
%   ndvi = ndvi(nir, red)
%       output(s):
%           - ndvi      :   NDVI image
%       input(s):
%           - nir       :   NIR band image
%           - red       :   red band image
%
%   Computes NDVI image.
%
%	Date            Author          Notes
%   2017/JUL/25     Jorge Marin     Initial release

    nir = double(nir);
    red = double(red);
    
    ndvi = (nir - red) ./ (nir + red);

end