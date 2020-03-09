#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
	// 画像とする配列img を定義
	cv::Mat img(cv::Size(320, 240), CV_8UC3, cv::Scalar(60, 150, 80));

	// 表示するウィンドウを定義
	cv::namedWindow("Hello, OpenCV", cv::WINDOW_AUTOSIZE);

	// ウィンドウを指定して表示
	cv::imshow("Hello, OpenCV", img);

	cv::waitKey(0);

    return 0;
}
