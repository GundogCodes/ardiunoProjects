// DC MOTORS!!

int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int VxPin = A0;
int VyPin = A1;
int SwitchPin = 8;


int VyVal;
int VxVal;
int SwitchVal;
int mSpeed; // 0-255, best between 100-255
int potVal;

void setup() {
  // put your setup code here, to run once:

  pinMode(VyPin, INPUT);
  pinMode(VxPin, INPUT);

  pinMode(SwitchPin, OUTPUT);
  digitalWrite(SwitchPin,HIGH);
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  VxVal  = analogRead(VxPin);
  Serial.print("X Val: ");
  Serial.print(VxVal);
  Serial.print("        ");
  Serial.print("Y Val: ");
  VyVal  = analogRead(VyPin);
  Serial.print(VyVal);
  Serial.print("        ");
  SwitchVal = digitalRead(SwitchPin);
  Serial.print("Switch Val: ");
  Serial.println(SwitchVal);

  mSpeed = (((255./514)*(VxVal)));

  if (VxVal == 509 || VxVal == 508) {
    mSpeed = 0;
    analogWrite(speedPin,mSpeed);
  }
  
  if (VxVal > 509) {
    //mSpeed = 0;
    digitalWrite(dirPin1,HIGH);
    digitalWrite(dirPin2,LOW);
    analogWrite(speedPin,mSpeed);
  }

    if (VxVal < 508) {
    mSpeed = -mSpeed;
    digitalWrite(dirPin1,LOW);
    digitalWrite(dirPin2,HIGH);

    analogWrite(speedPin,mSpeed);
  }

      if (VxVal == 0) {
    mSpeed = 255;
    digitalWrite(dirPin1,LOW);
    digitalWrite(dirPin2,HIGH);

    analogWrite(speedPin,mSpeed);
  }



}
