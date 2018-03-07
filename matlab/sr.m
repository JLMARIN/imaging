function sr = sr(nir, red)
%SR
%
%   sr = sr(nir, red)
%       output(s):
%           - sr        :   Simple Ratio (SR) image
%       input(s):
%           - nir       :   NIR band image
%           - red       :   red band image
%
%   Computes Simple Ratio (SR) image.
%
%	Date            Author          Notes
%   2017/AUG/15     Jorge Marin     Initial release

    nir = double(nir);
    red = double(red);
    
    sr = nir ./ red;

end