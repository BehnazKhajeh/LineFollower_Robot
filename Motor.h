#ifndef MOTOR_H
#define MOTOR_H

class Motor {
public:
    Motor(int in1, int in2, int enablePin); // enable for move forard, backward, turn left and turn right
    void forward();
    void backward();
    void turnLeft();
    void turnRight();
    void stop();
private:
    int in1Pin, in2Pin, enablePin;
    void setMotor(bool in1State, bool in2State, int speed = 250);
};

#endif
