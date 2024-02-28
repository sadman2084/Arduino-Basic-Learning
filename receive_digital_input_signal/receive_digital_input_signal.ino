int led = 13;
int inp = 3;
int state;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(inp, HIGH);
}

void loop() {
  state = digitalRead(inp);
  digitalWrite(led, state);
}
