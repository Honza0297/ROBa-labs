/*
 * Task 1: PWM
 * 
 * Make the builtin LED dimm continuously from OFF to ON and back.
 * 
 * Author: Jan Beran
 */
 
void setup() {
 // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

int brightness = 0;
void loop() {

  //TODO: Delete the line below and make builtin LED change its brightness from min to max gradually
  analogWrite(LED_BUILTIN, brightness+(analogRead(A0)%256)); //placeholder

  delay(5); // Do not remove this line
}
