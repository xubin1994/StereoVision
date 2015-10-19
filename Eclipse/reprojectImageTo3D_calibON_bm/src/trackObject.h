/*
 * trackObject.h
 *
 *  Created on: Oct 19, 2015
 *      Author: nicolas
 */

#ifndef SRC_TRACKOBJECT_H_
#define SRC_TRACKOBJECT_H_

/* Libraries */
#include "cv.h"
#include "highgui.h"
#include "cvaux.h"
#include "stdio.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

//default capture width and height
const int FRAME_WIDTH = 640;
const int FRAME_HEIGHT = 480;
//max number of objects to be detected in frame
const int MAX_NUM_OBJECTS=50;
//minimum and maximum object area
const int MIN_OBJECT_AREA = 20*20;
const int MAX_OBJECT_AREA = FRAME_HEIGHT*FRAME_WIDTH/1.5;

string intToString(int number);
void drawObject(int x, int y,Mat &frame);
void trackFilteredObject(int &x, int &y, Mat threshold, Mat &cameraFeed);

#endif /* SRC_TRACKOBJECT_H_ */
