#include "Hbridge.h"

HBridge *bridge;
void setup() {
  // put your setup code here, to run once:
  bridge = new HBridge();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  serial_control();
}

// Protocol: send via Serial line string in format "transistor state" without quotes (for example: 1 1 to set transistor on index 1)
void serial_control()
{
  int tran = 0;
  int state = 0;
  if(Serial.available()>1)
  {
    tran = Serial.parseInt();
    state = Serial.parseInt();
    bool rv = false;
    rv = bridge->set(tran, state);
    Serial.println(rv);
    dump();
  }
}

// Prints values for debug purposes
void dump()
{
  int *vals = bridge->get_values();
  for(int i =0; i < 4; i++)
  {
   Serial.print(vals[i]);
   Serial.print(" "); 
  }
  Serial.println("");
  delay(500);
  }
