#include <Servo.h>
Servo myservo; //create servo object to control a servo
int potpin = 0; //analog pin used to connect the potentiometer
int val;
void setup() {
  myservo.attach(9); //attaches the servo on pin 9 to the servo object
}
void loop () {
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  delay(15);
}

