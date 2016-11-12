//
//  FaceDetector.hpp
//  OpenCVTest
//
//  Created by Maggie Wang on 11/10/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

#ifndef FaceDetector_h
#define FaceDetector_h

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;

class FaceDetector {
    
public:
    FaceDetector();
    void DetectAndDisplay(Mat frame);
    
private:
    CascadeClassifier face_cascade;
    CascadeClassifier eyes_cascade;
};


#endif /* FaceDetector_hpp */
