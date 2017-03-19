#ifndef LINE_FOLLOW_H
#define LINE_FOLLOW_H
 
#include <Arduino.h>
 
class LINE_FOLLOW {
public:
        
        LINE_FOLLOW();
        ~LINE_FOLLOW();
        void run(int int led, int LS, int RS, int LM1, int LM2, int RM1, int RM2);
             }; 
#endif