#ifndef TOUCH_H
#define TOUCH_H
 
#include <Arduino.h>
 
class TOUCH {
public:
        
        TOUCH();
        ~TOUCH();
        void onoff(int TOUCH_PIN, int LED_PIN);
             };
 
#endif