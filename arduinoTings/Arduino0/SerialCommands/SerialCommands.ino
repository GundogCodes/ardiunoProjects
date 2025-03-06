int j =1;
int waitT = 750;
String myString = " + ";
int x = 3;
int y =7;
int z;
float pi = 3.14;
float r = 3;
float area ;

 
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
/*
z = x + y;
Serial.print(x);
Serial.print(myString);
Serial.print(y);
Serial.print(" = ");
Serial.println(z);
delay(waitT);
*/
area = pi* r*r;
Serial.print(" A Circle with Radius ");
Serial.print(r);
Serial.print(" Has an area of ");
Serial.println(area);
delay(waitT);
r = r +1;
}
