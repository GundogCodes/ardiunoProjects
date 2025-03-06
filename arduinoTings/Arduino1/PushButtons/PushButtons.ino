//Push Buttons 

int rPin = 8;
int buttPin = 12;
int buttonRead;
int dt = 10000;

void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    pinMode(rPin,OUTPUT);
    pinMode(buttPin,INPUT);
    

}

void loop() {
  // put your main code here, to run repeatedly:


  buttonRead = digitalRead(buttPin);
  Serial.println(buttonRead);

  if (buttonRead == 0) {
    digitalWrite(rPin,HIGH);
     
  }

  if (buttonRead == 1) {
    digitalWrite(rPin,LOW);
    
  }
  
}
