void setup() {
Serial.begin(9600);
}

void loop() {
  int val;
  val=analogRead(0);
  Serial.print("Val=");
  Serial.println(val,DEC);
  delay(200);
}
