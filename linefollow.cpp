#include "LineFollow.h"  

LineFollow::LineFollow(Sensor* left, Sensor* right, Motor* leftMotor, Motor* rightMotor)
    : leftSensor(left), rightSensor(right), leftMotor(leftMotor), rightMotor(rightMotor) {}

void LineFollow::followLine() {  
    bool leftDetected = leftSensor->isLineDetected();
    bool rightDetected = rightSensor->isLineDetected();

    if (leftDetected && rightDetected) {  // move foward
        leftMotor->forward();
        rightMotor->forward();
    } else if (leftDetected && !rightDetected) { //move left
        leftMotor->stop();
        rightMotor->forward();
    } else if (!leftDetected && rightDetected) { //move right
        leftMotor->forward();
        rightMotor->stop();
    } else {                                 //stop
        leftMotor->stop();
        rightMotor->stop();
    }
}
