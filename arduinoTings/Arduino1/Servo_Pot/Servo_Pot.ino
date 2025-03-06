//Servo w Pot
# include <Servo.h>

int potPin = A0;
int potVal;

int ServoPin = 9;
float servoPosition;
Servo myServo;
 
String msg = "What Angle would you like? ";


void setup() {
  // put your setup code here, to run once:

  pinMode(potPin,INPUT);
  Serial.begin(9600);
  myServo.attach(ServoPin);

}

void loop() {
  // put your main code here, to run repeatedly:

   potVal = analogRead(potPin);
   Serial.print("Pot Val: ");
   Serial.print(potVal);
   Serial.print(" , ");

   servoPosition = (180./1023.)*potVal;  // Similar code if you wanted to use a photoresistor
   Serial.print("Angle: ");
   Serial.println(servoPosition);

  
  myServo.write(servoPosition); 

}
