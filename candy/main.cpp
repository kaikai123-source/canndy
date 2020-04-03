#include<opencv2\opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {
	Mat src = imread("D://1.png");
	Mat src1 = src.clone();
	Mat dst, edge, gray;
	
		     dst.create(src1.size(), src1.type());
		   dst = Scalar::all(0);
	    cvtColor(src1, gray, COLOR_BGR2GRAY);
	
		     blur(gray, edge, Size(3, 3));
			 imshow("ԭͼ", src);
	   Canny(edge, edge, 3, 9, 3);
	
		   src1.copyTo(dst, edge);
	
		    imshow("Ч��ͼ", dst);
	
		     waitKey(0);
	     return 0;

}
