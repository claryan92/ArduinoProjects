//constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  }

void loop() {
  //read the state of the pushbutton value:
  
  buttonState = digitalRead(buttonPin);
  
  //check if the pushbutton is pressed.
  //if it is the buttonState is HIGH:

  if(buttonState==HIGH){
     digitalWrite(ledPin, HIGH);
  } else {
      digitalWrite(ledPin, LOW);
  }
}
