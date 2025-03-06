// Dimmable LED
int Vout = A0;
float PotVal;
int LEDPin = 9;
int dt = 200;
float LEDVal;

void setup() {
  
  // put your setup code here, to run once:
 
 pinMode(Vout,INPUT);
 pinMode(LEDPin,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  PotVal = analogRead(Vout);
  Serial.print("The ReadVal  is : ");
  Serial.println(PotVal);
  
  
  Serial.println("-------------------------");
 
  LEDVal = (255./1023.)*PotVal;
  Serial.print("The LED Val is : ");
  Serial.println(LEDVal);
  
  analogWrite(LEDPin ,LEDVal);
  
}
