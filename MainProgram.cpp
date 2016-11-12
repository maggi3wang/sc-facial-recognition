//
//  MainProgram.cpp
//  FacialRecognition
//
//  Created by Maggie Wang on 11/7/16.
//  Copyright © 2016 Maggie Wang. All rights reserved.
//

#include "FaceDetector.h"

/*
int main() {

    FaceDetector* faceDetector = new FaceDetector();
    
    VideoCapture capture;
    Mat frame;
    
    capture.open( 0 );
    
    if ( ! capture.isOpened() ) {
        printf("--(!)Error opening video capture\n");
        return -1;
    }
    
    vector<Rect> faces;
    
    while (  capture.read(frame) ) {
        if( frame.empty() ) {
            printf(" --(!) No captured frame -- Break!");
            break;
        }
        
        faceDetector->DetectAndDisplay( frame,  faces);
        int c = waitKey(10);
        if( (char)c == 27 ) { break; } // escape
    }
    
    return 0;
}
*/
