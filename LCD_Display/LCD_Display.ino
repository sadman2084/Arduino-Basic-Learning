#include < LiquidCrystal.h>  //calling the library for display

//LiquidCrystal lcd(RS,E,D4,D5,D6,D7);
LiquidCrystal lcd(5, 6, 7, 8, 9, 10);
void setup() {
  lcd.begin(16, 2);  //for 16*2 lcd display
  //lcd.begin(20,4);//for 20*4 lcd display
}

void loop() {
  int i = 20;
  //To print the messege in lcd,need to fix the cursor
  lcd.setCursor(3, 0);  //Row 3 and column 0
  lcd.print("Hello");
  lcd.setCursor(0, 1);
  lcd.print(i);
  lcd.clear();//to clear the lcd display
}
