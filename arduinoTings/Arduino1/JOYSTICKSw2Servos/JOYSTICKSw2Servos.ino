//JOYSTICKS
# include <Servo.h>

int VoltageXpin = A0;
int Xval;

int VoltageYpin = A1;
int Yval;

int SwitchPin = 0;
int SwitchVal;

Servo Servo1;
Servo Servo2;
int Servo1Pin = 9;
int Servo2Pin = 10;

float Servo1Angle;
float Servo2Angle;

int buzzPin = 2;
int dt = 1;
int gPin = 7;
int rPin = 6;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(VoltageXpin,INPUT);
  pinMode(VoltageYpin, INPUT);
  pinMode(SwitchPin,INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(rPin, OUTPUT);

  Servo1.attach(Servo1Pin);
  Servo2.attach(Servo2Pin);

}

void loop() {
  // put your main code here, to run repeatedly:

  Xval = analogRead(VoltageXpin);
  Serial.print("X Val: ");
  Serial.print(Xval);

  Yval = analogRead(VoltageYpin);
  Serial.print(", Y Val: ");
  Serial.print(Yval);

  SwitchVal = digitalRead(SwitchPin);
  Serial.print(", Switch Val: ");
  Serial.println(SwitchVal);

  Servo1Angle = (180./1023.)*Xval;
  Servo1.write(Servo1Angle);
  Servo2Angle = (180./1023.)*Yval;
  Servo2.write(Servo2Angle);

  if (SwitchVal == 1) {
    digitalWrite(buzzPin,LOW);
    digitalWrite(gPin,HIGH);
    
 
    
  }
  if (SwitchVal == 0) {
    digitalWrite(g Pin,LOW);
    digitalWrite(buzzPin,HIGH);
    digitalWrite(rPin,HIGH);
     delay(dt);
    digitalWrite(buzzPin,LOW);
    digitalWrite(rPin,LOW);
    delay(dt);
  }
}
