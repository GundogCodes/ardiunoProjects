int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt =100;
byte myByte = 0b11111111;
byte myByteFlipped;

void setup() {
  // pu  t your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:



  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  Serial.println(myByte,BIN);
  delay(dt);

  myByteFlipped = 255 - myByte;
  
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByteFlipped);
  digitalWrite(latchPin,HIGH);
  Serial.println(myByte,BIN);
  delay(dt);
  

  
  

  
  
   
} 
