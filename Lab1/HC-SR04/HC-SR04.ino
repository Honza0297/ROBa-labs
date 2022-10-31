
int echo_pin = 4;
int trigger_pin = 5; 
long echo = 0; // value returned from HC-SR04 [us]
float sos = 0.0343; //speed of sound in cm/us

void setup() {
  // put your setup code here, to run once:
  pinMode(echo_pin, INPUT);
  pinMode(trigger_pin, OUTPUT);
  digitalWrite(trigger_pin, LOW);
  Serial.begin(9600);
}

void loop() {
  set_measurement();

  /*
   * TODO:
   * 1) Complete set_measurement function
   * 2) With the help of pulseIn function, read the echo length 
   * 3) Compute the distance from echo length (AKA time for sound to reach an obstacle AND RETURN)
   * 4) Print it via serial line
   */
   
  delay(250); //Do not remove this line
}

void set_measurement()
{
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);
  //TODO complete the function to set the trigger_pin to HIGH for 5 microseconds and then set LOW


}
