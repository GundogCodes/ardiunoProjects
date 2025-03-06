int powerPin = 2;  // Not used in this example, but defined
int readPin = 3;   // The button pin
int ledPin1 = 7;    // The LED pin
int ledPin2 = 6;    // The LED pin
bool ledState = false;  // Tracks whether the LED is on or off
bool buttonState = false;  // Tracks the previous button state

void setup() {
  pinMode(readPin, INPUT_PULLUP);  // Use internal pull-up resistor
  pinMode(ledPin1, OUTPUT);  // LED pin as output
  pinMode(ledPin2, OUTPUT);  // LED pin as output
  Serial.begin(9600);
}

void loop() {
  int buttonVal = digitalRead(readPin);  // Read the button state

  // If the button is pressed (LOW) and was not pressed before
  if (buttonVal == LOW && !buttonState) {
    ledState = !ledState;  // Toggle the LED state
    digitalWrite(ledPin1, ledState ? HIGH : LOW);  // Update the LED
    digitalWrite(ledPin2, ledState ? HIGH : LOW);  // Update the LED
    buttonState = true;  // Set the button state to pressed
  }
  // If the button is released (HIGH) and was pressed before
  else if (buttonVal == HIGH && buttonState) {
    buttonState = false;  // Reset the button state to released
  }
  
  delay(50);  // Debounce delay
}
