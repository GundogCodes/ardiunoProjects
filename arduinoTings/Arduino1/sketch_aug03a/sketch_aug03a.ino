//Servo!
# include <Servo.h>

int ServoPin = 9;
int servoPosition = 0;
Servo myServo;
 


void setup() {
  // put your setup code here, to run once:


  myServo.attach(ServoPin);

}

void loop() {
  // put your main code here, to run repeatedly:

  myServo.write(servoPosition);

}
