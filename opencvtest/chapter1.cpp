
#include <opencv2/opencv.hpp>
//using namespace cv;

int main(int argc, char** argv)
{
	cv::Mat image = cv::imread("E:\\Lab\\OpenCVExample\\source\\image\\test.png");
	cv::namedWindow("OriginImage", CV_WINDOW_AUTOSIZE);
	cv::imshow("OriginImage", image);

	cv::namedWindow("HsvImage", CV_WINDOW_AUTOSIZE);
	cv::Mat HsvImage;
	cv::cvtColor(image, HsvImage, CV_BGR2HSV);
	cv::imshow("HsvImage", HsvImage);

	cv::namedWindow("GrayImage", CV_WINDOW_AUTOSIZE);
	cv::Mat GrayImage;
	cv::cvtColor(image, GrayImage, CV_BGR2GRAY);
	cv::imshow("GrayImage", GrayImage);

	//cv::imwrite("E:\\Lab\\OpenCVExample\\opencvdemo\\image\\hlstest.png", changeImage);
	cv::waitKey(0);

	return 0;
}