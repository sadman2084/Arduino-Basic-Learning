int pir=7;
int led=8;
int state;
void setup() {
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
 state=digitalRead(pir);
 digitalWrite(led,state);
 delay(500);

}
