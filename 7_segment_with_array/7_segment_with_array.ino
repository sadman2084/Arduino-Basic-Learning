int arr[4][7] = {
  { 1, 1, 1, 1, 1, 1, 0 },  //0
  { 0, 1, 1, 0, 0, 0, 0 },  //1
  { 1, 1, 0, 1, 1, 0, 1 },  //2
  { 1, 1, 1, 1, 0, 0, 1 }   //3
};
int i, j, k;
void setup() {
  for (i = 1; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (k = 1; k <= 4; k++) {
    for (j = 1; j <= 7; j++) {
      digitalWrite(j, arr[k - 1][j - 1]);
    }
    delay(300);
  }
}
