float value;
float volt;
void setup() {

  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0);
  volt = value * 5 / 1023;
  Serial.println(volt);
}
