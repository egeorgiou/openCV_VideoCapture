#include <opencv\cv.h>
#include <opencv\highgui.h>

using namespace cv;

int main()
{
	//create an image to store the video screen grab 
	Mat image;

	//setup the video capture method using the default camera
	VideoCapture cap;
	cap.open(0);

	//create the window that will show the video feed
	namedWindow("VideoCaptureTutorial", 1);

	//create a loop to update the image with video camera image capture
	while(1)
	{
		//grad a frame from the video camers
		cap>>image;

		//show the image on the screen
		imshow("VideoCaptureTutorial", image);

		//create a 33ms delay
		waitKey(33);
	}

	return 0;
}