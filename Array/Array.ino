//how to use array

int arr[]={1,3,6,7,10};
int i, j;
void setup() {
  for (i = 0; i < 5; i++) {
    pinMode(arr[i], OUTPUT);
  }
}

void loop() {
  for (j = 0; j < 5; j++) {
    digitalWrite(arr[j], HIGH);
    delay(60);
    digitalWrite(arr[j], LOW);
    delay(60);
  }
}
