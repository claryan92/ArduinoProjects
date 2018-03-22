int ledPin=5;
void setup() {
}

void loop() {
  //fade in from min to max in increments of 5 points:

  for (int fadeValue = 0; fadeValue <= 1000; fadeValue += 5){
    
    //sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);

    //wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  //fade out from max to min in increments of 5 points:
  for (int fadeValue = 1000; fadeValue >= 0; fadeValue -= 2){

      analogWrite(ledPin, fadeValue);

      delay(30);
  }
}
