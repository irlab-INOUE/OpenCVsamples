#include <opencv2/opencv.hpp>
#include <iostream>

cv::Mat detectFaceInImage(cv::Mat &image, std::string &cascade_file){
	cv::CascadeClassifier cascade;
	cascade.load(cascade_file);

	std::vector<cv::Rect> faces;
	cascade.detectMultiScale(image, faces, 1.1, 3, 0, cv::Size(20, 20));

	for (int i = 0; i < faces.size(); i++){
		cv::rectangle(
				image,
				cv::Point(faces[i].x, faces[i].y),
				cv::Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height),
				cv::Scalar(0, 200, 0),
				3,
				CV_AA);
	}
	return image;
}

void usage()
{
	std::cout << "顔検出サンプルプログラム" << std::endl;
	std::cout << "./faceDetect <顔画像ファイル名> <検出器>" << std::endl;
	std::cout << "<検出器> はOpenCVのインストールディレクトリに入っている\n";
	std::cout << "例えば，Mac では以下のパスにある\n";
	std::cout << "/usr/local/Cellar/opencv/3.4.1_2/share/OpenCV/haarcascades/haarcascade_frontalface_default.xml\n";
	std::cout << "検出器は用途によって複数ある．上記ディレクトリ内にも複数あるので試してみよ\n";
	std::cout << std::endl;
	std::cout << "サンプルプログラムの実行方法\n";
	std::cout << "./faceDetect face.jpg /usr/local/Cellar/opencv/3.4.1_2/share/OpenCV/haarcascades/haarcascade_frontalface_default.xml\n";
	std::cout << std::endl;
}

int main(int argc, char const *argv[]){
	if (argc < 3) {
		usage();
		return 1;
	}
	cv::Mat image = cv::imread(argv[1]);
	std::string filename = argv[2];
	cv::Mat detectFaceImage = detectFaceInImage(image, filename);
	cv::imshow("detect face", detectFaceImage);
	cv::waitKey(0);

	return 0;
}
