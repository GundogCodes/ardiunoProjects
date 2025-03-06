int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt =2000;
byte LEDs = 0xFF ;


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
  
    LEDs = LEDs+1 ;
    Serial.print(" HEX: ");
    Serial.print(LEDs,HEX);
    Serial.print(" BIN ");
    Serial.print(LEDs,BIN);
    Serial.print(" DEC: ");
    Serial.println(LEDs,DEC);
    
    delay(dt);

  }
   
} 
