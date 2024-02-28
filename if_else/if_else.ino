float value;
float volt;
int led = 7;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  value = analogRead(A0);
  volt = value * 5 / 1023;
  if (value > 512) {
    digitalWrite(led, HIGH);
    Serial.println(volt);
  } else {
    digitalWrite(led, LOW);
    Serial.println(volt);
  }
}
