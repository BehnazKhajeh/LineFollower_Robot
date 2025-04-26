#include "Motor.h"
#include <Arduino.h>

Motor::Motor(int in1, int in2, int enablePin)
    : in1Pin(in1), in2Pin(in2), enablePin(enablePin) {
    pinMode(in1Pin, OUTPUT);
    pinMode(in2Pin, OUTPUT);
    pinMode(enablePin, OUTPUT);
}

void Motor::setMotor(bool in1State, bool in2State, int speed) {
    digitalWrite(in1Pin, in1State);
    digitalWrite(in2Pin, in2State);
    analogWrite(enablePin, speed);
}

void Motor::forward() {
    setMotor(true, false);
}

void Motor::backward() {
    setMotor(false, true);
}

void Motor::stop() {
    setMotor(false, false, 0);
}
