int led = 8;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int i = 0;
  for (i; i < 255; i = i + 5) {
    analogWrite(led, i);
    delay(60);
  }
  
}
