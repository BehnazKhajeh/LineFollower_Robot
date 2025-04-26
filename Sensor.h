#ifndef SENSOR_H    
#define SENSOR_H    

class Sensor {   
public:
    Sensor(int pin);    
    bool isLineDetected();   
private:
    int sensorPin;
};

#endif
