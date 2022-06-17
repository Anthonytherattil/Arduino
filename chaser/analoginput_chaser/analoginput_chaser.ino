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

int sensorPin = A0;    // select the input pin for the potentiometer
const int led1 =  13;      // the number of the LED pin
const int led2 =  12;
const int led3 =  11;
const int led4 =  10;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  

  delay(sensorValue);                 // wait for a second

  
     // wait for a second

  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  

  delay(sensorValue);                 // wait for a second

   digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, HIGH);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  

  delay(sensorValue);                 // wait for a second

   digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(led4, HIGH);    // turn the LED off by making the voltage LOW
  

  delay(sensorValue);

  
  
}
