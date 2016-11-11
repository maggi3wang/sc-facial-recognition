//
//  main.cpp
//  OpenCVTest
//
//  Created by Maggie Wang on 11/7/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

// https://www.youtube.com/watch?v=OVSPfUmNyOw

/*
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
//#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
    VideoCapture cap(0);
    
    while (true) {          // while video capture is open
        Mat Webcam;         // creates matrix
        cap.read(Webcam);   // reads webcam
        imshow("Webcam", Webcam);   //displays webcam
    }
}
*/

// SECOND TUTORIAL

/*
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
//#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
    VideoCapture cap(0);
    
    if (!cap.isOpened()) {
        cout << "Webcam is not open." << endl;
    }
    
    while (true) {          // while video capture is open
        Mat image;
        Mat HSVimage;
        Mat processedImage;
        
        cap.read(image);    // assigns mat image to raw webcam footage
        cvtColor(image, HSVimage, CV_BGR2HSV);      // convert mat image to hsv under mat HSVimage
        inRange(HSVimage, Scalar(0, 0, 0), Scalar(255, 255, 155), processedImage);      // processes HSV image and gets only pixels in scalar range to processedImage
        imshow("Original", image);
        imshow("Processed", processedImage);
    }
}

*/
