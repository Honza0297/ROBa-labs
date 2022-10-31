int control_pins[2] = {6,7};
int enable_pin = 8;

void setup() {
  pinMode(control_pins[0], OUTPUT);
  pinMode(control_pins[1], OUTPUT);
  pinMode(enable_pin, OUTPUT);

}

void loop() {
  /*
   * TODO
   *  Try to control the motor with L293D - details in slides
   */
  //placeholder code below to stop the motor
  digitalWrite(control_pins[0], LOW);
  digitalWrite(control_pins[1], LOW);
  digitalWrite(enable_pin, LOW);
}
