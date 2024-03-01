//first install the extension "liquidcrystal_i2c"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(address,row,column;
LiquidCrystal_I2C lcd(0x27, 16, 2);  //if doesn't work then try
//LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  lcd.begin();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hello");
}
