/* 
 *This program turns a servo 180 to 0 degrees every second
 *
 *Created on Mar 2025
 *By Daki A.B
*/ 

#include <Servo.h>
Servo servo;

// setting constants
const int PIN_7 = 7;
const int TURN_TIME = 1000;

// setting variable value
int servoAngle = 0;

void setup() {
    // assigning servo pins to arduino
    servo.attach(7);
    servo.write(servoAngle);
}

void loop() {
    // turning servo 180 degrees, pause, turning to 0 degrees
    servoAngle += 180;
    servo.write(servoAngle);
    delay(TURN_TIME);
    servoAngle -= 180;
    servo.write(servoAngle);
    delay(TURN_TIME);
}
