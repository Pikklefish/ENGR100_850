#include <Servo.h>

Servo leftMotor;
Servo rightMotor;
int leftSensor = A2;
int rightSensor = A1;
int frontSensor = A0;
int counter;
int leftVal = 0;
int rightVal = 0;
int frontVal = 0;

void setup() {
  leftMotor.attach(11);
  rightMotor.attach(10);
  pinMode(leftSensor,INPUT);
  pinMode(rightSensor,INPUT);
  Serial.begin(9600);

}

void loop() {

  // Read sensor values
  leftVal = analogRead(leftSensor);
  rightVal = analogRead(rightSensor);
  frontVal = analogRead(frontSensor);

  // Print sensor values to serial monitor, left, right, and center sensor values
  Serial.print(leftVal); Serial.print(" ");
  Serial.print(rightVal); Serial.print(" ");
  Serial.print(frontVal); Serial.println(" ");

  /* if (frontVal< ___ )
   * driveForward();
   * else
   * stopBot(); */

}

void driveForward(){
  leftMotor.writeMicroseconds(1850);
  rightMotor.writeMicroseconds(1850);
}

void stopBot(){
  leftMotor.writeMicroseconds(1000);
  rightMotor.writeMicroseconds(1000);
}
