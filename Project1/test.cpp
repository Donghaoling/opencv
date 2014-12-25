#include <opencv2/opencv.hpp>   
#include <iostream> 
using namespace cv; 
void main() {      
    IplImage *src;     
    src = cvLoadImage("desert.jpg");     
    cvNamedWindow("bvin",CV_WINDOW_AUTOSIZE);    
    cvShowImage("bvin",src);    
    cvWaitKey(0);    
    cvDestroyWindow("bvin");  
    cvReleaseImage(&src); 
 
}