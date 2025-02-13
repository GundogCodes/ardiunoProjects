#include <IRremote.h> // open IR remote Library
int IRpin = 5; 
int dt = 0;
String myCmd; // create a string which we will read the data from the remote to


int bPin = 11;
int gPin =10;
int rPin = 9;

int rVal = 0;
int gVal = 0;
int bVal = 0;

IRrecv IR(IRpin); // create receiver object


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  
  IrReceiver.begin(IRpin,ENABLE_LED_FEEDBACK); // start receiver

  
}

void loop() {
  // put your main code here, to run repeatedly:

 
 
  while (IrReceiver.decode()==0){} // wait for data from remote

  myCmd = IrReceiver.decodedIRData.decodedRawData; // decode the data from the receiver to myCmd string
  
  delay(dt);
  IrReceiver.resume(); // resume receiver function (waiting for data from remote)

 
  if (myCmd == "3125149440") { // commands if specific button is pressed
    rVal = 255;
    gVal =255;
    bVal = 255;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("POWER");
    
  }
  
  if (myCmd == "3108437760") {
       rVal = rVal + 25;
    gVal = gVal + 25;
    bVal = bVal + 25;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("VOLUME + ");

    
  }
  
  if (myCmd == "3091726080") { 
    rVal = 0;
    gVal =0;
    bVal = 0;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("FUNCTION/STOP");
  }
  
  if (myCmd == "3141861120") {
    Serial.println("REVERSE");
  }

   if (myCmd == "3208707840") { 
    Serial.println("PLAY/PAUSE");
    
  }
  
  if (myCmd == "3158572800") {
    Serial.println("FAST FORWARD");
  }
  
  if (myCmd == "4161273600") { 
    Serial.println("DOWN");
    
  }
  
  if (myCmd == "3927310080") {
    
    rVal = rVal - 25;
    gVal = gVal - 25;
    bVal = bVal - 25;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("VOLUME -");
  }
  
  if (myCmd == "4127850240") {
    Serial.println("UP");
  }
  if (myCmd == "3910598400") {
      rVal = gVal = bVal;
    
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal); 
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("0");
    
  }
  if (myCmd == "3860463360") {
    Serial.println("EQ");
  }

   if (myCmd == "4061003520") { 
    Serial.println("START/REPEAT");
    
  }
  if (myCmd == "4077715200") {
    rVal = 255;
    gVal =0;
    bVal = 0;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("1");
  }
  if (myCmd == "3877175040") { 
    rVal = 0;
    gVal = 255;
    bVal = 0;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("2");
  }
  
  if (myCmd == "2707357440") {
    rVal = 0;
    gVal =0;
    bVal = 255;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("3");
  }

  if (myCmd == "4144561920") {
    rVal = 0;
    gVal =gVal;
    bVal = bVal;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("4");
  }

    if (myCmd == "3810328320") {
    rVal = 255;
    gVal =0;
    bVal = 255;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal);
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("5");
  }
  if (myCmd == "2774204160") {
    rVal = 255;
    gVal =255;
    bVal = 0;
    analogWrite(rPin,rVal);
    analogWrite(gPin,gVal);
    analogWrite(bPin,bVal); 
    Serial.print(" rVal: ");
    Serial.print(rVal);
    Serial.print(" gVal: ");
    Serial.print(gVal);
    Serial.print(" bVal: ");
    Serial.print(bVal);
    Serial.println("6");
  }
  
  if (myCmd == "3175284480") {
  
    Serial.println("7");
  }

  if (myCmd == "2907897600") {
    
    Serial.println("8");
  }

  if (myCmd == "3041591040") {
    
    Serial.println("9");
  }
  
  
 
}
