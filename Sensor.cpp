#include "Sensor.h"  
#include <Arduino.h>

Sensor::Sensor(int pin) : sensorPin(pin) {  
    pinMode(sensorPin, INPUT);
}

bool Sensor::isLineDetected() { 
    return digitalRead(sensorPin) == LOW; // default for black line is LOW
}
