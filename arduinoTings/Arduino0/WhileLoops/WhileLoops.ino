int j;
int dt = 500;
int redPin = 9;
int PotPin = A0;
int readVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
  
pinMode(redPin,OUTPUT);
pinMode(PotPin,INPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//Dimmable LED 
 readVal = analogRead(PotPin);
 Serial.println(readVal);
 delay(dt);
 
 
  while(readVal >1000) {
    digitalWrite(redPin,HIGH);
    readVal = analogRead(PotPin);
    Serial.println(readVal);
    delay(dt);
      }
  digitalWrite(redPin,LOW);
}
