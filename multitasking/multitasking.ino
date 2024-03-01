unsigned long currentTime = 0;
unsigned long previousTime1 = 0;
unsigned long previousTime2 = 0;
boolean state1 = true;
boolean state2 = true;
#include <Wire.h>
void setup() {

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  currentTime = millis();
  if (currentTime - previousTime1 > 400) {
    digitalWrite(8, state1);
    state1 = !state1;
    previousTime1 = currentTime;
  }

  if (currentTime - previousTime2 > 700) {
    digitalWrite(9, state2);
    state2 = !state2;
    previousTime2 = currentTime;
  }
}
