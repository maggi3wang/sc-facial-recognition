//
//  TakePictures.cpp
//  FacialRecognition
//
//  Created by Maggie Wang on 11/11/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>

using namespace cv;
using namespace std;

void TakePictures() {
    VideoCapture cap(0);
    
    if (!cap.isOpened()) {
        cout << "Webcam is not open." << endl;
    }
    
    int count = 0;
    
    while (true) {
        Mat image;
        cap.read(image);
        imshow("image", image);
        
        if (cin.get() == 't') {     // take pic when input 't'
            imwrite("/Users/maggiewang/Programming/OpenCVTesting/FacialRecognition/RawImages/maggie" + to_string(count) + ".jpg", image);
            count++;
        }
    }
}
