#include <opencv2/imgcodecs.hpp>
#include <opensv2/highgui.hpp>
#include <opensv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//// Imagens ////

int main() {

    string path = "Resources/test.png";
    Mat img = imread(path)
    imshow("Images", img);
    waitkey(0);
    return 0;
    
}