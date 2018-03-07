function mtvi2 = mtvi2(nir, green, red)
%NDVI
%
%   mtvi2 = mtvi2(nir, green, red)
%       output(s):
%           - mtvi2     :   MTVI2 image
%       input(s):
%           - nir       :   NIR band image
%           - green     :   green band image
%           - red       :   red band image
%
%   Computes Modified Triangular Vegetation Index 2 (MTVI2) image.
%
%	Date            Author          Notes
%   2017/AUG/15     Jorge Marin     Initial release

    nir = double(nir);
    green = double(green);
    red = double(red);
    
    mtvi2 = (1.5*( 1.2*(nir - green) - 2.5*(red - green) )) ./ (sqrt( (2*nir + 1).^2- (6*nir - 5*sqrt(red)) -0.5 ));

end