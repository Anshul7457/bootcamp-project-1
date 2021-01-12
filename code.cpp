#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    Mat src = imread("wall.jpg");
    Mat dst;
    double angle;
    cout << "enter angle: " << endl;
    cin >> angle;
    Point2f pc(src.cols / 2., src.rows / 2.);
    Mat r = getRotationMatrix2D(pc, angle, .50);
    warpAffine(src, dst, r, Size(src.cols, src.rows));

    imshow("orignal", src);
    imshow("Rotated", dst);
    waitKey(0);
    return 0;
}