#ifndef LINEFOLLOW_H  
#define LINEFOLLOW_H  

#include "Sensor.h"  
#include "Motor.h"

class LineFollow {  
public:
    LineFollow(Sensor* left, Sensor* right, Motor* leftMotor, Motor* rightMotor);  
    void followLine();
private:
    Sensor* leftSensor;  
    Sensor* rightSensor;  
    Motor* leftMotor;
    Motor* rightMotor;
};

#endif
