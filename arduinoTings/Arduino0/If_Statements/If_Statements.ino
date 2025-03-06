int Vout = A0;
float V2;
int redPin = 9;

void setup() {
  
  // put your setup code here, to run once:
 pinMode(Vout,INPUT);
 pinMode(redPin,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  V2 = analogRead(Vout);
  V2 = (5./1023.)*V2;
  Serial.print("The Output Voltage is : ");
  Serial.println(V2);

  if (V2 > 4.00 && V2 < 3.00) {
    digitalWrite(redPin,HIGH);
    
  }
  if (V2 < 2.00 || V2 > 3.00) {
    
    digitalWrite(redPin,LOW);
    
  }

}
