int redled = 3;
int yellowled = 5;
int greenled = 7;

void setup() {
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop() {
  digitalWrite(greenled, HIGH); //turn on green LED
  delay(500);
  digitalWrite(greenled, LOW); //turn off green LED
  for (int i=0;i<3;i++)
  {
    delay(500);
    digitalWrite(yellowled, HIGH);
    delay(500);
    digitalWrite(yellowled, LOW);
  }
  {
    delay(500);
    digitalWrite(redled, HIGH);
    delay(5000);
    digitalWrite(redled, LOW);
  }
} 
