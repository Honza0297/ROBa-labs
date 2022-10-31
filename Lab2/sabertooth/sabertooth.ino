int saber_pin = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(saber_pin, OUTPUT);
}

// Timing values. not required to use
int period = 20000; //[us], how often send pulses
int ontime = 1500; //[us] default ontime of 1500 us (90 degrees)
int offtime = period-ontime; //[us], default offtime

//val: from -100 to +100 
void saber_write(int val)
{

  /*
   * TODO: Find a way to send 1000-2000 us pulse every 20000 us
   */
  
   
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i = 0; i < 101; i++)
  {
    saber_write(i);
    delay(5);
  }
    for(int i = 100; i > -101; i--)
  {
    saber_write(i);
    delay(5);
  }
  for(int i = -100; i < 1; i++)
  {
    saber_write(i);
    delay(5);
  }
  delay(1000);
}
