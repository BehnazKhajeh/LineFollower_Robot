#ifndef IRSENSOR_H
#define IRSENSOR_H

class IRSensor {
public:
    IRSensor(int pin);
    bool isLineDetected();
private:
    int sensorPin;
};

#endif
