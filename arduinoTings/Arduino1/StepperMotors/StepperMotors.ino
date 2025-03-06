#include <Stepper.h> 
int stepsperRevolution = 2048;
Stepper myStepper(stepsperRevolution, 8, 10,9,11);

int motSpeed = 10;
int dt = 500;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); 
  myStepper.setSpeed(motSpeed);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  myStepper.step(stepsperRevolution);
  delay(dt);
  myStepper.step(-stepsperRevolution);
  delay(dt);
  

}
