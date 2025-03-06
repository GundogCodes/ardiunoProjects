byte myByte = 0x00;
int dt =100;

void setup() {
  
  // put your setup code here, to run once:

  Serial.begin(9600);
 
 

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("In Decimal: ");
  Serial.print(myByte,DEC);
  Serial.print(" In Hexadecimal: ");
  Serial.print(myByte,HEX);
  Serial.print(" In Binary: ");
  Serial.println(myByte,BIN);
  
   myByte = myByte +1;
  delay(dt);
}
