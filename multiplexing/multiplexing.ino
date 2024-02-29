int digit[10][7] = {
  { 1, 1, 1, 1, 1, 1, 0 },  // 0
  { 0, 1, 1, 0, 0, 0, 0 },  // 1
  { 1, 1, 0, 1, 1, 0, 1 },  // 2
  { 1, 1, 1, 1, 0, 0, 1 },  // 3
  { 0, 1, 1, 0, 0, 1, 1 },  // 4
  { 1, 0, 1, 1, 0, 1, 1 },  // 5
  { 1, 1, 1, 0, 0, 1, 0 },  // 6
  { 1, 1, 1, 1, 1, 1, 0 },  // 7
  { 1, 1, 1, 1, 0, 1, 1 },  // 8
  { 1, 1, 1, 1, 1, 1, 1 }   // 9
};
int count;
int number;
int x, y;
int counter;
void setup() {
  for (x = 0; x <= 8; x++) {
    pinMode(x, OUTPUT);
  }
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}

void loop() {
  for (counter = 1; counter <= 100; counter++) {
    for (count = 0; count < 10; count++) {
      digitalWrite(7, LOW);
      for (y = 0; y <= 6; y++) {  //for 1st digit
        digitalWrite(y, digit[counter / 10][y]);
      }
      delay(20);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      for (y = 0; y <= 6; y++) {  //for 2nd digit
        digitalWrite(y, digit[counter % 10][y]);
      }
      delay(20);
      digitalWrite(8, HIGH);
    }
  }
}
