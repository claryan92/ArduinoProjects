int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0; // Variable to store the value coming from the sensor
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
 //read the value from the sensor
 sensorValue = analogRead(sensorPin);
 digitalWrite(ledPin, HIGH);
 //stop the program for <sensorValue> milliseconds:
 delay(sensorValue);
 digitalWrite(ledPin, LOW);
 delay(sensorValue);
}
