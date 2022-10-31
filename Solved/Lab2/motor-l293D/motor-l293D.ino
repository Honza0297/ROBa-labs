int control_pins[2] = {6,7};
int enable_pin = 8;
void setup() {
  pinMode(control_pins[0], OUTPUT);
  pinMode(control_pins[1], OUTPUT);
  pinMode(enable_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(control_pins[0], LOW);
  digitalWrite(control_pins[1], HIGH);

  for(int i = 0; i < 256; i++)
  {
    analogWrite(enable_pin, i);
    delay(10);
  }
  delay(1000);
  for(int i = 255; i > -1; i--)
  {
    analogWrite(enable_pin, i);
    delay(10);
  }
  delay(1000);
}
