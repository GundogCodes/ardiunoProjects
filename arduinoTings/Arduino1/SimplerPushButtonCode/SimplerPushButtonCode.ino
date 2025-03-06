// Simplest way to use a switch button

int buttPin = 2;
int buttVal;
int dt = 100;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buttPin,INPUT);
  digitalWrite(buttPin,HIGH);
    

}

void loop() {
  // put your main code here, to run repeatedly:

  buttVal = digitalRead(buttPin);
  Serial.print(" Your Button Value is: ");
  Serial.println(buttVal);
  delay(dt);

}
