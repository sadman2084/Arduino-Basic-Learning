//first install "Servo" extension
#include<Servo.h>
Servo s;
void setup(){

  s.attach(10);
}
void loop() {
  s.write(0);  // set to 0 degree
  delay(5000);

  s.write(90);
  delay(3000);

  s.write(180);
  delay(3000);

  int t;
  for (t = 180; t > 0; t -= 5) {  
    delay(200);
  }
}
