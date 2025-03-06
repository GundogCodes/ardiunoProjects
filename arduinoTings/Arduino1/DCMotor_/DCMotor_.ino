// DC MOTORS!!

int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int tiltPin =2;

int mSpeed; // 0-255, best between 100-255
int tiltVal =1 ;

void setup() {
  // put your setup code here, to run once:

  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin,HIGH);
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  tiltVal  = digitalRead(tiltPin);
  Serial.println(tiltVal);

  if (tiltVal ==0) {
    mSpeed =0;
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH);
  analogWrite(speedPin,mSpeed);

    
  }

  if (tiltVal ==1) {
    mSpeed =255;
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH);
  analogWrite(speedPin,mSpeed);

    
  }

  

}
