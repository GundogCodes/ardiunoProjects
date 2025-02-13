#include <LiquidCrystal.h>

int rs =7;
int en = 8;
int d4 = 9;
int d5 =10;
int d6 = 11;
int d7 =12;




int trigPin = 13;
int echoPin =5;

int pingTravelTime;
int dt = 10;

int distance;

int buttPin = 2;
int buttVal;


LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  lcd.begin(16,2);
  pinMode(buttPin,INPUT);
  digitalWrite(buttPin,HIGH);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  buttVal = digitalRead(buttPin);
  digitalWrite(trigPin,LOW);    
  delayMicroseconds(dt);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(dt);
  digitalWrite(trigPin,LOW);
  pingTravelTime = pulseIn(echoPin,HIGH);
 delayMicroseconds(25);
 Serial.print("Button Value: ");
 Serial.print(buttVal);
  Serial.print(" Ping Travel Time (ms): ");
  Serial.print(pingTravelTime);

  distance = ((pingTravelTime/2)*0.0343);

 Serial.print(" Distance (cm): ");
  Serial.println(distance);
 lcd.setCursor(0,0);
 lcd.print(" Distance (cm): ");
 lcd.setCursor(0,1);
 lcd.print(distance);
  delay(500);
 lcd.setCursor(0,1);
 

 lcd.print("     ");
}
