float sinVal;
float cosVal;
float j;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (j=0; j<=2*3.14159265; j=j+0.1){

    sinVal = sin(j);
    cosVal = cos(j);
    Serial.print(sinVal);
    Serial.print(",");
    Serial.println(cosVal);
    
    
  }

}
