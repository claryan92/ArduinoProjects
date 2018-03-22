const int pirPin= 3;
const int LED= 2;
void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int pirVal = digitalRead(pirPin);
  if(pirVal == LOW)
  {
    //motion was detected
    Serial.println("Motion Detected");
    digitalWrite(LED, HIGH);
  } else
  {
    digitalWrite(LED, LOW);
  }
  delay(2000);
}
