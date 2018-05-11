// test.cpp : 定义控制台应用程序的入口点。  
//  

#include "stdafx.h"  
#include <opencv2/highgui/highgui.hpp>    
#include <opencv2/imgproc/imgproc.hpp>    
#include <opencv2/core/core.hpp>    
using namespace cv;

int main()
{
	VideoCapture cap(0);
	Mat frame;
	while (1)
	{
		cap >> frame;
		imshow("调用摄像头", frame);
		waitKey(30);
	}
	return 0;
}