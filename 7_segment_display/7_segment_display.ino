/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13 through 220 ohm resistor
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInput
*/
const int a =  2;      // the number of the LED pin
const int b =  3;
const int c =  4;
const int d =  5;
const int e =  6;      // the number of the LED pin
const int f =  7;
const int g =  8;
const int h =  9;
const int buttonPin = 10;
int buttonState=0 ;
int i=0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the value from the sensor:
  // turn the ledPin on
  //0
  buttonState = digitalRead(buttonPin);
  if (buttonState==HIGH){
    i=i+1;
  }
if (i == 0) {
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(c, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(d, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(e, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(f, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(g, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(h, HIGH);    // turn the LED off by making the voltage LOW
  

  delay(1000);    
  // wait for a second
 } if {i==1){
  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(c, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(d, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(e, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(f, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(g, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(h, HIGH);    // turn the LED off by making the voltage LOW
  }

  delay(1000);                 // wait for a second

  
     // wait for a second


  
  
}
