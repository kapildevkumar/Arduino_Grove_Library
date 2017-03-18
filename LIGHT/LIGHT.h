#ifndef LIGHT_H
#define LIGHT_H 
#include <Arduino.h>
 
class LIGHT
{
public:
        LIGHT();
        ~LIGHT();
        void read(int LIGHT_PIN, int LED_PIN, int threshold);
};
 
#endif
