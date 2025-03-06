int redPin = 9;
int bright = 255;
int t  = 500;

void setup() {
  // put your setup code here, to run once:

pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


analogWrite(redPin, 0);
delay(t);
analogWrite(redPin, 25);
delay(t);
analogWrite(redPin, 50);
delay(t);
analogWrite(redPin, 75);
delay(t);
analogWrite(redPin, 100);
delay(t);
analogWrite(redPin, 125);
delay(t);
analogWrite(redPin, 150);
delay(t);
analogWrite(redPin, 175);
delay(t);
analogWrite(redPin, 200);
delay(t);
analogWrite(redPin, 225);
delay(t);
analogWrite(redPin, 255);
delay(t);










}
