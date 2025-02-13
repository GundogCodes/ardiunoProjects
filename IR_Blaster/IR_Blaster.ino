// IR Blaster
#include <IRremote.h> // open IR remote Library
int IRpin = 9; 
int dt = 0;
String myCmd; // create a string which we will read the data from the remote to

int bPin = 2;


IRrecv IR(IRpin); // create receiver object


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  IrReceiver.begin(IRpin,ENABLE_LED_FEEDBACK); // start receiver
  pinMode(bPin,OUTPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while (IrReceiver.decode()==0){} // wait for data from remote

  myCmd = IrReceiver.decodedIRData.decodedRawData; // decode the data from the receiver to myCmd string
  Serial.println(myCmd); //print ut
  delay(dt);
  IrReceiver.resume(); // resume receiver function (waiting for data from remote)

  if (myCmd == "3910598400") { // commands if specific button is pressed
    Serial.print(" YOU PRESSED 0 (ON) ");
    digitalWrite(bPin,HIGH);
  }
  if (myCmd == "4077715200") {
    Serial.print(" YOU PRESSED 1 (OFF) ");
    digitalWrite(bPin,LOW);
  }

 
}
