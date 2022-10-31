
const int motor_pin = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin, OUTPUT);
  
}

void loop() {

  /*
   * TODO:
   * 1) Gradually increase the speed of the motor to the maximum and decrease it to the minimum afterwards
   */
  //PLACE FOR YOUR CODE
  for(int i = 0; i < 255; i++)
  {
    analogWrite(motor_pin, i);
    delay(2);
  }
  delay(1000);
  for(int i = 255; i > 0; i--)
  {
    analogWrite(motor_pin, i);
    delay(2);
  }
  delay(1000);
}
