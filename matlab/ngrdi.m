function ngrdi = ngrdi(green, red)
%NGRDI
%
%   ngrdi = ngrdi(green, red)
%       output(s):
%           - ngrdi     :   NGRDI image
%       input(s):
%           - green     :   green band image
%           - red       :   red band image
%
%   Computes Normalized Green Red Difference Index (NGRDI) image.
%
%	Date            Author          Notes
%   2017/AUG/25     Jorge Marin     Initial release

    red = double(red);
    green = double(green);
    
    ngrdi = (green - red) ./ (green + red);

end