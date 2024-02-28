int led = 8;

void setup() {

  pinMode(led, OUTPUT);
}

void loop() {

  int i = 0;
  for (i = 0; i < 5; i++) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }
}
