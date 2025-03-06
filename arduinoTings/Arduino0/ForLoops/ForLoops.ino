
int yPin = 6;
int rPin = 9;
int dty = 10000;
int dtr = 1000;
int yellowblink =10;
int redblink = 6;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(yPin,OUTPUT);
  pinMode(rPin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

    for(j=1; j<=yellowblink;j=j+1) {
      
  digitalWrite(yPin,HIGH);
  delay(dty);
  digitalWrite(yPin,LOW);
  delay(dty);
    }
  
    for(j=1; j<=redblink;j=j+1) {
  digitalWrite(rPin,HIGH);
  delay(dtr);
  digitalWrite(rPin,LOW);
  delay(dtr);
     }

}
