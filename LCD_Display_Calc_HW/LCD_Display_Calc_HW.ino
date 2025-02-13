#include <LiquidCrystal.h>

int rs =7;
int en = 8;
int d4 = 9;
int d5 =10;
int d6 = 11;
int d7 =12;

int dt =5000;


int num1;
int num2;
String Oper;

String mssg1 = "Plz Enter Num 1 ";

String mssg2 = "Plz Enter Num 2 ";

String mssg3 = "Operator? (+-*/)";

String mssg4 = "Answer is: ";

String mssg5 = "THANKS 4 USING";

int Ans;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print(mssg1);
  while(Serial.available() == 0) {}
  num1 = Serial.parseInt();
  lcd.clear();

lcd.print(mssg3);
  while(Serial.available() == 0) {}
  Oper = Serial.readString();
  lcd.clear();

  lcd.print(mssg2);
  while(Serial.available() == 0) {}
  num2 = Serial.parseInt();
  lcd.clear();

  

  if (Oper == "+") {
    Ans = num1 + num2;
  }
  if (Oper == "-") {
    Ans = num1 - num2;
  }
  if (Oper == "*") {
    Ans = num1 * num2;
  }
  if (Oper == "/") {
    Ans = num1  / num2;
  }

  lcd.print("Ans:" + String(num1) + Oper + String(num2) + "=" + String(Ans));
  lcd.setCursor(0,1);
  lcd.print(mssg5);
  delay(dt);
  lcd.clear();

}
