//Passive Buzzer
int buzzPin = 8;
int buzzTime = 1;
int buzzTime2 = 1;
int potVal;
int potPin = A0;

float toneVal;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(buzzPin,OUTPUT);
   pinMode(potPin,INPUT);
   
    
}

void loop() {
  // put your main code here, to run repeatedly:

  potVal = analogRead(potPin);
  Serial.println(potVal);

  toneVal = ((9940./1023.)*(potVal) + 60);
  
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneVal );

  
}
