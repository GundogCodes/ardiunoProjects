int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt =1000;
byte myByte =0b10101010;

void setup() {
  // pu  t your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:


  while (myByte <= 0xFF) {
  /*
  Serial.print("Input a Number: ");
  while (Serial.available()==0){};
  myByte = Serial.parseInt();
  */
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  Serial.println(myByte,BIN);
  delay(dt);

  myByte = myByte*2;


  
  }
   
} 
