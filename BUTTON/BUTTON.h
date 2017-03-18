#ifndef BUTTON_H
#define BUTTON_H
 
#include <Arduino.h>
 
class BUTTON {
public:
        
        BUTTON();
        ~BUTTON();
        void onoff(int BUTTON_PIN, int LED_PIN);
             };
 
#endif