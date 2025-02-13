int trigPin = 12;
int echoPin =11;

int pingTravelTime;
int dt = 10;

int distance;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);    
  delayMicroseconds(dt);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(dt);
  digitalWrite(trigPin,LOW);
  pingTravelTime = pulseIn(echoPin,HIGH);
 delayMicroseconds(25);
 
  distance = ((pingTravelTime/2)*0.0343); 

 Serial.print(0);
 Serial.print(".");
 //Serial.print(" Distance (cm): ");
  Serial.println(distance);
  Serial.print(",");
  Serial.println(10);
  
  

}
