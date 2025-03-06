int tiltPin = 2;
int tiltVal;
int redPin = 4;
int greenPin = 3;
 
 void setup() {
  // put your setup code here, to run once:

  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin,HIGH);
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin,OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);

  if (tiltVal == 1) {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    
  }

  if (tiltVal == 0) {

    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    
  }

}
