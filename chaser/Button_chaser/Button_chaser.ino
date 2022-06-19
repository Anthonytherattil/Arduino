/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int led1 =  13;      // the number of the LED pin
const int led2 =  12;
const int led3 =  11;
const int led4 =  10;
// variables will change:
int buttonState=0         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  } else {
    // turn LED off:
    digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second

  
     // wait for a second

  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second

   digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  

  delay(1000);                 // wait for a second

   digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, HIGH);    // turn the LED off by making the voltage LOW
  

  delay(1000);               
  }
}
