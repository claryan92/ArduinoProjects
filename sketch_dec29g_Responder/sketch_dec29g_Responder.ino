int Redled = 8;
int Yellowled = 7;
int Greenled = 6;
int Key1 = 5;
int Key2 = 4;
int Key3 = 3;
int KeyRest = 2;
int Red;
int Yellow;
int Green;

void setup() {
  pinMode(Redled, OUTPUT);
  pinMode(Yellowled, OUTPUT);
  pinMode(Greenled, OUTPUT);
  pinMode(Key1, INPUT);
  pinMode(Key2, INPUT);
  pinMode(Key3, INPUT);
  pinMode(KeyRest, INPUT);
}

void loop() {
 Red = digitalRead(Key1);
 Yellow = digitalRead(Key2);
 Green = digitalRead(Key3);
 if(Red == HIGH)Red_YES();
 if(Yellow == HIGH)Yellow_YES();
 if(Green == HIGH)Green_YES();
}

void Red_YES() //execute the code until the Red light is on; end cycle when reset button is pressed
{
  while(digitalRead(KeyRest)==0)
  {
    digitalWrite(Redled, HIGH);
    digitalWrite(Greenled, LOW);
    digitalWrite(Yellowled, LOW);
  }
  clear_led();
}

void Yellow_YES() // execute the code while the Yellow light is on; end cycle when reset button is pressed

{
  while(digitalRead(KeyRest)==0)
  {
     digitalWrite(Redled, LOW);
     digitalWrite(Greenled, LOW);
     digitalWrite(Yellowled, HIGH);
  }
  clear_led();
}
void Green_YES()
{
  while(digitalRead(KeyRest)==0)
  {
    digitalWrite(Redled, LOW);
    digitalWrite(Greenled, HIGH);
    digitalWrite(Yellowled, LOW);
  }
  clear_led();
}
void clear_led() //all LED off
{
  digitalWrite(Redled, LOW);
  digitalWrite(Greenled, LOW);
  digitalWrite(Yellowled, LOW);
}

