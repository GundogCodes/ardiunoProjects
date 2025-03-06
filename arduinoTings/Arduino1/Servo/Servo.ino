//Servo!
# include <Servo.h>

int ServoPin = 9;
int servoPosition;
Servo myServo;
 
String msg = "What Angle would you like? ";


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  myServo.attach(ServoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() ==0) {}
  servoPosition = Serial.parseInt();
  
  myServo.write(servoPosition); 

}
