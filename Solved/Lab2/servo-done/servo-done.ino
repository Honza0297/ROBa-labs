const int SERVO_MIN[] = {50, 20};
const int SERVO_MAX[] = {110, 150};

int servo_pins[] = {4, 5}; 


// Timing values. not required to use
int period = 20000; //[us], how often send pulses
int ontime = 1500; //[us] default ontime of 1500 us (90 degrees)
int offtime = period-ontime; //[us], default offtime

void servo_write(int servo, int angle)
{
    // check whether angle is in boundaries for given servo - DO NOT CHANGE
    if (angle > SERVO_MAX[servo] || angle < SERVO_MIN[servo])
    {
      return;
    }
    else
    {
      /*
       * TODO: Find a way to send 1000-2000 us pulse every 20000 us
       */
      ontime = map(angle, 0, 180, 1000, 2000); // convert angle 0-180 to pulse of 1000-2000 us
      offtime = period-ontime;
      digitalWrite(servo_pins[servo], HIGH);
      delayMicroseconds(ontime);
      digitalWrite(servo_pins[servo], LOW);
      delayMicroseconds(offtime);
    }
}


void setup()
{
  pinMode(servo_pins[0], OUTPUT);
  pinMode(servo_pins[1], OUTPUT);

}


void loop()
{
  int myservo = 0;

  /*
   * TODO
   * 1) Finish servo_write function
   * 2) Try to grip something :)
   */

  // sweep from min angle to max angle, wait in the edge position for 500 ms
  for(int i = SERVO_MIN[myservo]; i < SERVO_MAX[myservo]; i++)
  {
    servo_write(1, i);
  }
  delay(500);
  for(int i = SERVO_MAX[myservo]; i > SERVO_MIN[myservo]; i--)
  {
    servo_write(1, i);
  }
  delay(500);
  
}
