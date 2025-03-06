//Photoresistor
int gPin = 7;
int rPin = 6;

int MeasurePin = A0;
int voltage;

int buzzPin = 8;
float dt;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(MeasurePin,INPUT);
  pinMode(gPin,OUTPUT);
  pinMode(rPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  voltage = analogRead(MeasurePin);
  Serial.print("The Voltage is ");
  Serial.println(voltage);

  digitalWrite(buzzPin,HIGH);
  dt = ((-99./1023.)*(voltage) +100);
  delay(dt);
  digitalWrite(buzzPin,LOW);
  delay(dt);
 
}
