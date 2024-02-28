//Serial.begin(9600)    ->baud number
//Serial.print()        ->the output will be shown in serial monitor
//Serial.available()    ->is the serial monitor connected or not
//Serial.read()         ->takes input from serial monitor


int red = 8;
int blue = 9;
char sms;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() != 0) {
    sms = Serial.read();
  }

  if (sms == '1') {
    digitalWrite(red, HIGH);
    Serial.println("red is on");
    //delay(1000);
  }
  if (sms == '2') {
    digitalWrite(red, LOW);
    Serial.println("red is off");
    //delay(1000);
  }
  if (sms == '3') {
    digitalWrite(blue, HIGH);
    Serial.println("blue is on");
    //delay(1000);
  }
  if (sms == '4') {
    digitalWrite(blue, LOW);
    Serial.println("blue is off");
    //delay(1000);
  }
}
