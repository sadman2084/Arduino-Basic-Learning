int soundSensor = 8;  //define sound sensor pin
int LED = 9;          //define relay input pin
void setup() 
{
  pinMode (soundSensor, INPUT); //define Sound Sensor as input
  pinMode (LED, OUTPUT);        //define LED Strip as output
}
void loop()
{
  int statusSensor = digitalRead (soundSensor);   //define variable of the sound sensor status
                                                  //and read value of the sensor's
  
  if (statusSensor == 1)        //When the Sensor detects a signal
  {
    digitalWrite(LED, LOW);
  }
  
  else                          //If no signal is detected
  {
    digitalWrite(LED, HIGH);
  }
  
} 