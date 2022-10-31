#include "Hbridge.h"

/*
 *       ____VCC_____
 *      |            |
 *   PNP-0          PNP-1    OPENS WITH LOW
 *      |_____M______|
 *      |            |
 *   NPN-2        NPN-3      OPENS WITH HIGH
 *      |____GND_____|
 *         
 */

 
HBridge::HBridge()
 {
  for(auto const& pin: this->pins)
  {
    pinMode(pin, OUTPUT);
  }
  for(int i = 0; i < 4; i++)
  {
   this->values[i]= 0;
   this->commit(i);
  }
 }

void HBridge::commit(int tran)
{
  switch(tran)
  {
    case 0:
    case 1:
      analogWrite(this->pins[tran], 255-this->values[tran]);
      break;
    case 2:
    case 3:
      analogWrite(this->pins[tran], this->values[tran]);
      break;
    default:
      break;
  }
}


bool HBridge::set(int tran, int val)
{
 bool retval = false;
  if(tran > 3 || tran < 0 || val < 0 || val > 255)
  {
    return retval; 
  }
  // allowed pairs with non-zero value: 0-3 and 1-2, nothing else 
  switch(tran)
  {
    case 0:
    case 3:
    if(this->values[1] || this->values[2])
    {
      retval = false;
    }
    else
    {
      this->values[tran] = val;
      this->commit(tran);
      retval = true;
    }
    break;
    case 1:
    case 2:
     if(this->values[0] || this->values[3])
    {
      retval = false;
    }
    else
    {
      this->values[tran] = val;
      this->commit(tran);
      retval = true;
    }
    break;
    default: 
      retval = false;
  }
  return retval;  
}

int* HBridge::get_values()
{
  return this->values;
}
