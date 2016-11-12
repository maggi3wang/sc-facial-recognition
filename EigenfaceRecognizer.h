//
//  EigenfaceRecognizer.h
//  FacialRecognition
//
//  Created by Maggie Wang on 11/11/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

#ifndef EigenfaceRecognizer_h
#define EigenfaceRecognizer_h

#include <stdio.h>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/face.hpp"

using namespace std;
using namespace cv;
using namespace face;

class EigenfaceRecognizer {
public:
    EigenfaceRecognizer();
    ~EigenfaceRecognizer();
    //bool AddTrainingImage(const string &filename, const string &name);
    //bool Train();
    //bool Recognize(Mat &face);

private:
    Ptr<FaceRecognizer> _model;
};

#endif /* EigenfaceRecognizer_h */
