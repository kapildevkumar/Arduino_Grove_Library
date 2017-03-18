#ifndef BUZZER_H
#define BUZZER_H
 
#include <Arduino.h>
 
class BUZZER {
public:
        BUZZER();
        ~BUZZER();
        void playNote(int BUZZER_PIN, char note, int duration);
        void playmelody(int BUZZER_PIN, int length, char note[], int duration, int tempo);
        void playTone(int BUZZER_PIN, int tone, int duration); 


}; 
#endif