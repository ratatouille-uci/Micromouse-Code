#include <Arduino.h>
#define receiver A0 //LED port on teensy 3.2

void setup() {
  pinMode(receiver,INPUT); //pass in var receiver a0 into INPUT keyword is in Arduino library
  Serial.begin(9600); //start serial monitor

  //unsigned long baud 9600
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(receiver,LOW); //write signal to LED port off light
  delay(1000); //ms
  digitalWrite(receiver,HIGH); //write signal to LED port bright*/
  Serial.println(analogRead(receiver));
  delay(1000); //ms
  //Serial.println("loop completed");
}

/*
* Once you are done with code, clicke the check button
* to build the cpp project,
* then to the right of the check butotn, click the right button
* to upload the code to the teensy 3.2
*
* to view the serial monitor output for the teensy, lick on the plug
*
* Movement Class
* Sensor Class
*/