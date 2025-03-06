int Vout = A0;
float V2;
int gPin = 10;
int yPin = 9;
int rPin = 8;

void setup() {
  
  // put your setup code here, to run once:
 pinMode(Vout,INPUT);
 pinMode(gPin,OUTPUT);
 pinMode(yPin,OUTPUT);
 pinMode(rPin,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  V2 = analogRead(Vout);
  V2 = (5./1023.)*V2;
  Serial.print("The Output Voltage is : ");
  Serial.println(V2);

  if (V2 < 3.0) {
    digitalWrite(gPin,HIGH);
    digitalWrite(yPin,LOW);
    digitalWrite(rPin,LOW);
    
  }

  if (V2 > 3.0 && V2 < 4.0) {
    digitalWrite(gPin,LOW);
    digitalWrite(yPin,HIGH);
    digitalWrite(rPin,LOW);
  }
   if (V2 > 4.0) {
    digitalWrite(gPin,LOW);
    digitalWrite(yPin,LOW);
    digitalWrite(rPin,HIGH);
  } 
  
  

}
