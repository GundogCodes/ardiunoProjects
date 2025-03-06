int j;
int dt = 2000;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

for (j=10;j>= 0;j=j-1) {
  
  Serial.println(j);
  Serial.println();
  delay(dt);
}


}
