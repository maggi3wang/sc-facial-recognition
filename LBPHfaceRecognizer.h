//
//  LBPHfaceRecognizer.hpp
//  FacialRecognition
//
//  Created by Maggie Wang on 11/11/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

#ifndef LBPHfaceRecognizer_hpp
#define LBPHfaceRecognizer_hpp

#include <stdio.h>

#define PERSON_LABEL 10 //some arbitrary label

#include <string>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/face.hpp"

using namespace std;
using namespace cv;
using namespace face;

class LBPHfaceRecognizer {
public:
    LBPHfaceRecognizer(const vector<Mat> &imgs, int radius, int neighbors,
                     int grid_x, int grid_y, double threshold);
    bool Recognize(const Mat &face, double &confidence) const;
    ~LBPHfaceRecognizer();
private:
    Ptr<FaceRecognizer> _model;
    Size _faceSize;
};

#endif /* LBPHfaceRecognizer_hpp */
