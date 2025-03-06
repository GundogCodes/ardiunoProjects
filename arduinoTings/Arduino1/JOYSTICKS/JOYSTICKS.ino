//JOYSTICKS

int VoltageXpin = A0;
int Xval;

int VoltageYpin = A1;
int Yval;

int SwitchPin = 0;
int SwitchVal;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(VoltageXpin,INPUT);
  pinMode(VoltageYpin, INPUT);
  pinMode(SwitchPin,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  Xval = analogRead(VoltageXpin);
  Serial.print("X Val: ");
  Serial.print(Xval);

  Yval = analogRead(VoltageYpin);
  Serial.print(", Y Val: ");
  Serial.print(Yval);

  SwitchVal = digitalRead(SwitchPin);
  Serial.print(", Switch Val: ");
  Serial.println(SwitchVal);

}
