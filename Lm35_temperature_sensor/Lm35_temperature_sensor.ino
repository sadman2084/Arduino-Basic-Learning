#include < LiquidCrystal.h>  //calling the library for display


float value;
float milivolt;
int temp;
//LiquidCrystal lcd(RS,E,D4,D5,D6,D7);
LiquidCrystal lcd(5, 6, 7, 8, 9, 10);
void setup() {
  lcd.begin(16, 2);  //for 16*2 lcd display
  //lcd.begin(20,4);//for 20*4 lcd display
}

void loop() {
  value = analogRead(A0);
  milivolt = (value * 5000) / 1024;
  temp = milivolt / 10;
  lcd.setCursor(0, 0);
  lcd.print("Digital Thermometer");
  lcd.setCursor(0, 1);
  lcd.print(temp);
}
