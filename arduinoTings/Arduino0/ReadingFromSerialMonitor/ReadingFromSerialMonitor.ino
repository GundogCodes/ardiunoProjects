// Reading a Number from Serial Monitor
int NumOfBlinks;
String msg = "How many Blinks do you want?";
int j;
int redPin = 13;
int dt = 500;
int myNumber;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(msg);
  while (Serial.available() == 0) {} // Could've also used a For loop
  NumOfBlinks = Serial.parseInt();

  j=1;
  while (j <= NumOfBlinks) {
    digitalWrite(redPin,HIGH);
    delay(dt);
    digitalWrite(redPin,LOW);
    delay(dt);
    j=j+1;
  }
  
}
