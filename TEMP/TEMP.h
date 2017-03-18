#ifndef TEMP_H
#define TEMP_H
 
#include <Arduino.h>
 
class TEMP {
public:
        
        TEMP();
        ~TEMP();
        void read(int TEMP_PIN);
             };
 
#endif