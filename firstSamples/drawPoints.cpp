#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main(int argc, const char * argv[])
{
	// 画像とする配列img を定義
	cv::Mat img(cv::Size(320, 240), CV_8UC3, cv::Scalar(60, 150, 80));

	// 表示するウィンドウを定義
	cv::namedWindow("Hello, OpenCV", cv::WINDOW_AUTOSIZE);

	// 点を描画
	cv::Vec3b* ptr;
	cv::Vec3b bgr;
	int startX = 0;
	int startY = 120;
	int endX = 320;
	int endY = 120;

	for (int y = startY; y <= endY; y++) {
		ptr = img.ptr<cv::Vec3b>(y);
		for (int x = startX; x <= endX; x++) {
			ptr[x] = cv::Vec3b(0, 0, 0);
		}
	}

	// ウィンドウを指定して表示
	cv::imshow("Hello, OpenCV", img);

	cv::waitKey(0);
}
