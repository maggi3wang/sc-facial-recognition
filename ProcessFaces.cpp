//
//  ProcessFaces.cpp
//  FacialRecognition
//
//  Created by Maggie Wang on 11/11/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

#include <cstdlib>
#include <fstream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "FaceDetector.h"

using namespace std;
using namespace cv;

int ProcessFaces() {
    FaceDetector* faceDetector = new FaceDetector();
    Mat rawFace;
    
    for (int i = 0; i < 12; i++) {      // make this less stupid later
        string imagePath = "/Users/maggiewang/Programming/OpenCVTesting/FacialRecognition/RawImages/maggie" + to_string(i) + ".jpg";
    
        Mat rawFace = imread(imagePath);
    
        vector<Rect> faces;     // check if this needs to be a vector<Rect>, possibly change to Rect
        faceDetector->DetectAndDisplay(rawFace, faces);
    
        int edgeSize = max(faces.front().width, faces.front().height);
    
        Rect square(faces.front().x, faces.front().y, edgeSize, edgeSize);
        Mat faceImage = (rawFace)(square);
    
        //resize(faceImage, faceImage, Size(150, 150));
        resize(faceImage, faceImage, Size(), 0.75, 0.75);
    
        string outputDir = "/Users/maggiewang/Programming/OpenCVTesting/FacialRecognition/Images/";
        string facePath = outputDir + to_string(i) + "croppedimage.jpg";
        
        imwrite(facePath, faceImage);
    }
    
    return 0;
}
