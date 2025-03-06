// ACTIVE BUZZERS!!
// 
int potVal;
int buzzPin = 8;
int potPin = A0;
String msg = "Please Input Your Number?";
int dt = 1000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:



  potVal = analogRead(potPin);
  Serial.print("Pot Val: ");
  Serial.println(potVal);
  
  

  if (potVal >= 1000) {

      digitalWrite(buzzPin,HIGH);
      
     
  }

  if (potVal < 1000) {

      digitalWrite(buzzPin,LOW);
      
     
  }
}
