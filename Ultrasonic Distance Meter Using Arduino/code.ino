#define trigPin 7
#define echoPin 8
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
lcd.begin(16, 2);
lcd.print("Electro");
lcd.setCursor(0, 1);
lcd.print("Gadget");
delay(2000);
lcd.clear();
lcd.print("Ultrasonic");
lcd.setCursor(0, 1);
lcd.print("Distnance Meter");
delay(2000);
lcd.clear();
lcd.print("Designed by:");
lcd.setCursor(0, 1);
lcd.print("Electro Gadget");
}
void loop() {
int timetaken, dist;
lcd.clear();
lcd.print("Distance in cm:");
digitalWrite(trigPin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin, LOW);
timetaken = pulseIn(echoPin, HIGH);
dist = (timetaken/2) * 0.034049 ;
if (dist >= 300 || dist <= 0)
{
lcd.setCursor(0, 1);
lcd.print("Out Of Range");
}
else
{
lcd.setCursor(0, 1);
lcd.print(dist);
}
delay(500);
}