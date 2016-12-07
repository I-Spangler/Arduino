#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  servo.write(180);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(0);
  delay(600);
  servo.write(90);
  delay(600);
  servo.write(180);
  delay(600);
}
