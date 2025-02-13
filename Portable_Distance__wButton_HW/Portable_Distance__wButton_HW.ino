#include <LiquidCrystal.h>
//Setting up LCD Display
int rs =7;
int en = 8;
int d4 = 9;
int d5 =10;
int d6 = 11;
int d7 =12;
int trigPin = 13;
int echoPin =5;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

//Setting up Ultrasonic Sensor
int pingTravelTime;
int dt = 10;
float distance;

//Seting up Button
int buttPin = 2;
int buttVal;



void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600); // Turning on Serial Monitor
  pinMode(trigPin,OUTPUT); // Setting up trigger Pin that will send out a pulse (output)
  pinMode(echoPin,INPUT); // Setting up echo Pin which will listen to the echo of the pulse which we will read
  lcd.begin(16,2); // Starting LCD which is a 16x2 display
  pinMode(buttPin,INPUT); // initalizing button
  digitalWrite(buttPin,HIGH);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  //lcd.setCursor(0,1); // clearing out the bottom row of LCD display after a measurement (button down) is made
  //lcd.print("        ");
  buttVal = digitalRead(buttPin);
  Serial.print("Button Value: ");
  Serial.println(buttVal);
  lcd.setCursor(0,0);
  lcd.print("Place the Target");
  lcd.setCursor(0,1);
  lcd.print("Press to Measure");
  
 if (buttVal == 0) 
 
            { // if button is pressed do this:
  
  lcd.clear();
  digitalWrite(trigPin,LOW);    // Send out a pulse, echoPin goes to HIGH
  delayMicroseconds(dt);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(dt);
  digitalWrite(trigPin,LOW);
  pingTravelTime = pulseIn(echoPin,HIGH); // record the ti me echoPin remained HIGH (time it took for the sensor to record the echo of the pulse)
  delayMicroseconds(25);

  Serial.print(" Ping Travel Time (ms): "); // Print pulse travel time to serial monitor
  Serial.print(pingTravelTime);

  distance = ((pingTravelTime/2)*0.0343); // calculate distance based on travel time of ping (pulse)

  Serial.print(" Distance (cm): "); // print distance to serial monitor
  Serial.println(distance);
  lcd.setCursor(0,0); // print distance to LCD Display
  lcd.print(" Distance (cm): ");
  lcd.setCursor(0,1);
  lcd.print(distance);
  delay(3000); // show distance for 3 seconds
 
 
             }
 
}
