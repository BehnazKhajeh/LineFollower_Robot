#include <Arduino.h>
#include "IRSensor.h"
#include "Motor.h"
#include "LineFollowerRobot.h"

// pin assignments
#define LEFT_IR_PIN   2
#define RIGHT_IR_PIN  3

#define LEFT_MOTOR_IN1  4
#define LEFT_MOTOR_IN2  5
#define LEFT_MOTOR_EN   6

#define RIGHT_MOTOR_IN1  7
#define RIGHT_MOTOR_IN2  8
#define RIGHT_MOTOR_EN   9

// create sensors and motor
IRSensor leftSensor(LEFT_IR_PIN);
IRSensor rightSensor(RIGHT_IR_PIN);

Motor leftMotor(LEFT_MOTOR_IN1, LEFT_MOTOR_IN2, LEFT_MOTOR_EN);
Motor rightMotor(RIGHT_MOTOR_IN1, RIGHT_MOTOR_IN2, RIGHT_MOTOR_EN);

// Create Robot 
LineFollowerRobot robot(&leftSensor, &rightSensor, &leftMotor, &rightMotor);

void setup() {
  Serial.begin(9600);
  //setup options
}

void loop() {
  robot.followLine(); // follow the line
  delay(20);          // delay 20ms for better result from sensors
}
