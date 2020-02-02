/*
* Micromouse project code 
*/
#include <Arduino.h>
#define receiver A0 
#define emitter A1

void setup() {
  pinMode(receiver,INPUT); //pass in var receiver A0 
  pinMode(emitter,OUTPUT); //pass in var emitter A1
  Serial.begin(9600); //starts serial monitor
  //unsigned long baud 9600
}

void loop() {
  digitalWrite(emitter,HIGH);
  delay(1000);
  Serial.println(analogRead(receiver));
  digitalWrite(emitter,LOW);
  delay(1000); 
}

/*
* Once you are done with code, click the check button
* to build the cpp project,
* then to the right of the check butotn, click the right button
* to upload the code to the teensy 3.2
*
* to view the serial monitor output for the teensy, click on the plug icon+6
*
* Movement Class
* Sensor Class
*/