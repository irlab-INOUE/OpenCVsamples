#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
	// 画像を読み込む
	cv::Mat img = cv::imread("../image.png");

	// ウィンドウを指定して表示
	cv::imshow("Hello, image file", img);

	cv::waitKey(0);

    return 0;
}
