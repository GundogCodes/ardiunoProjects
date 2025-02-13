int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt =100;
byte LEDs = 0b00000000;

void setup() {
  // pu  t your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:


  while (LEDs <= 0xFF) {
  
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  LEDs = LEDs+1;
  Serial.print(LEDs,BIN);
  Serial.print("  ");
  Serial.println(LEDs,DEC);
  
  
  }
   
} 
