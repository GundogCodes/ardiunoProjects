int bluePin = 13;
int redPin = 12;
int greenPin = 11;
int yellPin = 10;
int t = 80 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,LOW);
  delay(t);

  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,HIGH);
  delay(t);
  
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,LOW);
  delay(t);
  
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,HIGH);
  delay(t);

  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,LOW);
  delay(t);

  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,HIGH);
  delay(t);

  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,LOW);
  delay(t);

  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,HIGH);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,LOW);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,HIGH);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,HIGH);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,LOW);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellPin,HIGH);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,LOW);
  delay(t);

  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellPin,HIGH);
  delay(t);
}
