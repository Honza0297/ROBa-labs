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
bool inc = true;
void loop() {
  analogWrite(LED_BUILTIN, brightness);
  brightness += inc ? 1 : -1;
  if (brightness == 255)
    {
      inc = false;
    }
   else if (brightness == 0)
   {
    inc = true;
   }
  delay(5);
  

}
