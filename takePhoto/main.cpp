#include <iostream>
#include <unistd.h>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
	// cameraデバイスを番号で指定する
	// 多分，0 ~ 2 くらい
	int camera_index = 1;

	// 撮影準備
	cv::VideoCapture capture;
	capture.open(camera_index);
	cv::Size captureSize = cv::Size(1280, 960); 	// 画像サイズを変えることもできる

	capture.set(cv::CAP_PROP_FRAME_WIDTH, captureSize.width);
	capture.set(cv::CAP_PROP_FRAME_HEIGHT, captureSize.height);
    if (!capture.isOpened()) {
        throw "Exception : Camera failed to open";
	}

	cv::Mat img_src;

	sleep(1);

	// 撮影する
	capture >> img_src;

	// ウィンドウを指定して表示
	cv::imshow("Hello, image file", img_src);

	cv::waitKey(0);

    return 0;
}
