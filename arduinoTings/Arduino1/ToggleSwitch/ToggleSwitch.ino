//Push Buttons 

int rPin = 8;
int buttPin = 12;
int buttPin2 = 11;


int dt = 10000;

int LEDState = 0;
int buttonNewState;
int buttonOldState = 1 ; // starting state is off


void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    pinMode(rPin,OUTPUT);
    pinMode(buttPin,INPUT);
    
 
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonNewState = digitalRead(buttPin);
  Serial.println(buttonNewState);

  if (buttonOldState == 0 && buttonNewState ==1) {

       if (LEDState == 0) {
       digitalWrite(rPin,HIGH);
       LEDState = 1;
       
       }

        else {
          
          digitalWrite(rPin,LOW);
          LEDState = 0;
          
          }
  }

buttonOldState = buttonNewState;
    
}
