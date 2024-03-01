#include<LiquidCrystal.h>
#include<Wire.h>
float gas;

void setup() {
  Serial.begin(9600);
}

void loop() {
  gas = analogRead(A0);
  Serial.println(gas);
  delay(500);
}
