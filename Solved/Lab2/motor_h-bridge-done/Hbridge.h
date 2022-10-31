#ifndef HBRIDGE_H
#define HBRIDGE_H 1
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

#include "Arduino.h"
class HBridge
{
  public:
    HBridge();
    bool set(int tran, int val);
    int* get_values();

  private:
    int values[4]; //for transistors from 0 to 3 as imaged above. Only 0-3 and 1-2 can be opened simultaneously. 
    int pins[4] = {10,12,11,9}; 
    void commit(int tran);
};

#endif
