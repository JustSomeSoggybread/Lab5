/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/evanh/OneDrive/Desktop/CTD/InternetOfThings/Lab5/src/Lab5.ino"
void setup();
void loop();
#line 1 "c:/Users/evanh/OneDrive/Desktop/CTD/InternetOfThings/Lab5/src/Lab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(A5, INPUT);
  pinMode(D8, OUTPUT);

}

void loop() {
  int value = analogRead(A5);

  map(value, 0, 4095, 0, 255);

  analogWrite(D8, value);

}