//Push Buttons HW

int rPin = 5;
int buttPin = 12;
int buttPin2 = 11;
int buzzPin = 8;

int LEDVal = 0;
int dt = 100;

int LEDState = 0;
int butt1Val;
int butt2Val;


void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    pinMode(rPin,OUTPUT);
    pinMode(buzzPin,OUTPUT);
    pinMode(buttPin,INPUT);
    pinMode(buttPin2,INPUT);
    
    
 
}

void loop() {
  // put your main code here, to run repeatedly:
  butt1Val =  digitalRead(buttPin);
  butt2Val =  digitalRead(buttPin2);
  Serial.print("The Up Button Readings is: ");
  Serial.print(butt1Val);
  Serial.print("    ");
  Serial.print("The Down Button Readings is: ");
  Serial.print(butt2Val);
  delay(dt);


if (butt1Val == 0) {
  LEDVal = LEDVal + 5;
  analogWrite(rPin,LEDVal);
}

if (butt2Val == 0) {
  LEDVal = LEDVal -  5;
  analogWrite(rPin,LEDVal);
}

if (LEDVal < 0) {
    LEDVal = 0;
  analogWrite(rPin,LEDVal);
  
}

if (LEDVal >= 255) {
    LEDVal = 255;
    analogWrite(rPin,LEDVal);
    digitalWrite(buzzPin,HIGH);

}

if (LEDVal < 255) {
    analogWrite(rPin,LEDVal);
    digitalWrite(buzzPin,LOW);
}

  Serial.print("    ");
  Serial.print(" The LED Value is: ");
  Serial.println(LEDVal);
}
