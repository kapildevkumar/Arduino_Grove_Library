#ifndef LED_H
#define LED_H
 
#include <Arduino.h>
 
class LED
{
public:
        LED();
        ~LED();
        void on(int LED_PIN);
        void off(int LED_PIN);
        void blink(int LED_PIN, int time1, int time2);
        void fade(int LED_PIN, int time);
        void bright(int LED_PIN, float bright);
};
 
#endif
