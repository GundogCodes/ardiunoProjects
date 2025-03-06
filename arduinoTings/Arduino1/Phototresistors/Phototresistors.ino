//Photoresistor
int gPin = 7;
int rPin = 6;

int MeasurePin = A0;
int voltage;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(MeasurePin,INPUT);
  pinMode(gPin,OUTPUT);
  pinMode(rPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  voltage = analogRead(MeasurePin);
  Serial.print("The Voltage is ");
  Serial.println(voltage);

  if (voltage > 160) {
    digitalWrite(gPin,HIGH);
    digitalWrite(rPin,LOW);
    
  }

  if (voltage < 150) {
    digitalWrite(gPin,LOW);
    digitalWrite(rPin,HIGH);
    
  }
  
}
