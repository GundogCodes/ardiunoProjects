//RGB LEDS
int redPin =13;
int greenPin = 11;
int bluePin =12;
String myColor;
String msg = "What Color Do You Want? ";


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while(Serial.available() ==0) {}
  myColor = Serial.readString();

  if (myColor == "red" || myColor == "Red") {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }
  
  if (myColor == "blue" || myColor == "Blue") {
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }
  if (myColor == "green" || myColor == "Green") {
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }

  if (myColor == "off" || myColor == "Off") {
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }
  
  if (myColor == "purple" || myColor == "Purple") {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }

  if (myColor == "yellow" || myColor == "Yellow") {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }

  if (myColor == "aqua" || myColor == "Aqua") {
    digitalWrite(redPin,LOW);
    analogWrite(greenPin,HIGH);
    analogWrite(bluePin,HIGH);
  }
  if (myColor == "white" || myColor == "White") {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
  }

}
