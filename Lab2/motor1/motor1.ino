
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
  analogWrite(motor_pin, 0); //stop the motor
  delay(1000);

}
