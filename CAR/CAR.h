#ifndef CAR_H
#define CAR_H
 
#include <Arduino.h>
 
class CAR {
public:
        
        CAR();
        ~CAR();
        void run(int pin1,int pin2,int pin3,int pin4,int s);
        void turn(int pin1,int pin2,int pin3,int pin4,int s);
             };
 
#endif