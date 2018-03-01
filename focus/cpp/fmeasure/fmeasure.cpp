#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <math.h>       /* pow */

using namespace cv;


/**
 * @brief   Focus measure implementation using the 'Variance of laplacian (Pech2000)'.
 *          Informatio taken from:
 *          - S. Pertuz et al., Analysis of focus measure operators for shape-from-focus.
 *            Pattern Recognition, 46(5):1415:1432, 2013
 * @param   Image to process
 * @return  Focus measure
 */
float fmeasure( const Mat &src )
{
    Point anchor( 0, 0 );
    double delta = 0;
    int ddepth = -1;
    Scalar mean, stddev;

    // laplacian filter kernel
    float kernel[3][3] = { {0.1667, 0.6667, 0.1667} , {0.6667, -3.3333, 0.6667} , {0.1667, 0.6667, 0.1667} };

    Mat ker = Mat( 3, 3, CV_32F, &kernel );
    Mat dst = Mat( src.size(), src.type() );
    Mat gray;

    // change image ot gray scale
    cvtColor(src, gray, CV_RGB2GRAY);

    // apply filter to image
    filter2D( gray, dst, ddepth , ker, anchor, delta, BORDER_REPLICATE );

    // calculate standard deviation
    meanStdDev(dst, mean, stddev);

    // return focus measure as the standard deviation squared
    return static_cast<float>( pow(stddev.val[0], 2) );
}


int main( int argc, char** argv )
{
    char* filename = argv[1];
    
    Mat src = imread( filename );

    if(src.data)
    {
        std::cout << fmeasure( src ) << std::endl;
    }
    return 0;
}
