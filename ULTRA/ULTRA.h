#ifndef ULTRA_h
#define ULTRA_h
#include "Arduino.h"

class ULTRA
{
public: 
       ULTRA();
       ~ULTRA();
       void start(int pin1);
       void check(int pin2);
};

#endif
