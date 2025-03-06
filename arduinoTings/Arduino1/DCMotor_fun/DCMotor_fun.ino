// DC MOTORS!!

int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int potPin = A0;


int mSpeed; // 0-255, best between 100-255
int potVal;

void setup() {
  // put your setup code here, to run once:

  pinMode(potPin, INPUT);

  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  potVal  = analogRead(potPin);
  //Serial.println(potVal);

  mSpeed = (((255./1023.)*(potVal)) );
  Serial.println(mSpeed);

  if (mSpeed > 0) {
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH);
  analogWrite(speedPin,mSpeed);
  }

  if (mSpeed <= 0) {
  digitalWrite(dirPin1,HIGH);
  digitalWrite(dirPin2,LOW);
  analogWrite(speedPin,0);
  }

}
