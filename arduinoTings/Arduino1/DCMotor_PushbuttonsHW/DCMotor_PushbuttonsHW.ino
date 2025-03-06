// DC MOTORS!!

int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;

int lbuttPin = 13;
int rbuttPin = 12;


int mSpeed = 0; // 0-255, best between 100-255

int lbuttVal;
int rbuttVal;

void setup() {
  // put your setup code here, to run once:


  pinMode(lbuttPin,OUTPUT);
  digitalWrite(lbuttPin,HIGH);
  pinMode(rbuttPin,OUTPUT);
  digitalWrite(rbuttPin,HIGH);
  

  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:


  lbuttVal = digitalRead(lbuttPin);
  Serial.print("Left Button Value: ");
  Serial.print(lbuttVal);
  Serial.print("        ");
  
  rbuttVal = digitalRead(rbuttPin);
  Serial.print("Right Button Value: ");
  Serial.print(rbuttVal);
  Serial.print("        ");
  
  mSpeed = 255;
    digitalWrite(dirPin1,HIGH);
    digitalWrite(dirPin2,LOW);
    analogWrite(speedPin,mSpeed);

  /*
  if (rbuttVal == 0) {
    mSpeed = mSpeed+ 25;
    digitalWrite(dirPin1,HIGH);
    digitalWrite(dirPin2,LOW);
    analogWrite(speedPin,mSpeed);
    mSpeed = mSpeed;
  }

    if (lbuttVal == 0) {
    mSpeed = mSpeed - 25;
    digitalWrite(dirPin1,HIGH);
    digitalWrite(dirPin2,LOW);
    analogWrite(speedPin,mSpeed);
    mSpeed = mSpeed;
  }

  Serial.print("mSpeed: ");
  Serial.println(mSpeed);

  */
}
