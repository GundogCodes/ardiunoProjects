// Reading Strings from Serial Monitor
String LEDPick;
String msg = "What color LED would you like to turn on?";
int rPin = 13;
int bPin = 12;
int gPin = 11;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:

  pinMode(rPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while(Serial.available()==0) {}
  LEDPick = Serial.readString();
  Serial.println(LEDPick);
  
  if (LEDPick == "red" || LEDPick == "Red") {
    digitalWrite(rPin,HIGH);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,LOW);
    delay(dt);
  }

  if (LEDPick == "blue" || LEDPick == "Blue") {
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,HIGH);
    digitalWrite(gPin,LOW);
    delay(dt);
  }
  
  if (LEDPick == "green" || LEDPick == "Green") {
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,HIGH);
    delay(dt);
  }

}
