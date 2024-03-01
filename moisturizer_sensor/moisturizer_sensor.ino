int soil;
int moisture;
void setup() {
  Serial.begin(9600);
}

void loop() {

  soil = analogRead(A0);
  //map(the value coming from,the value normally starts from,the value normally ends to,the percentage of starting value,the percentage of ending value);
  moisture = map(soil, 0, 1023, 100, 0);
  Serial.println("moisture");
  Serial.println(moisture);
  delay(500);
}
