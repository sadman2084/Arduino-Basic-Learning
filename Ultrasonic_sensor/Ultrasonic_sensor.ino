float trigpin = A0;
float echopin = A1;
float distance;
float duration;
void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
}

void loop() {
  //it clears if there is any high signal
  digitalWrite(trigpin, LOW);
  delay(2);  //time in miliseconds

  //main part
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);  //time in microseconds

  digitalWrite(trigpin, LOW);
  duration=pulseIn(echopin, HIGH);//The time duration represents how long the trig pin remains in a high state.

  distance=(duration*0.034)/2;//in centimeter

  Serial.println(distance);
  delay(500);

}
