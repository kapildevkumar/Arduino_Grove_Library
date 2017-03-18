#include "BUZZER.h" //include the declaration for this class
/** Buzzer class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/
int BUZZER_PIN;

BUZZER::BUZZER()
{
	pinMode(BUZZER_PIN,OUTPUT);
} 
//<<destructor>>
BUZZER::~BUZZER(){/*nothing to destruct*/}

/******************************************************************************
 * User API
 ******************************************************************************/

void BUZZER::playTone(int BUZZER_PIN, int tone, int duration) 
 {
    for (long i = 0; i < duration * 1000L; i += tone * 2) 
    {
        digitalWrite(BUZZER_PIN, HIGH);
        delayMicroseconds(tone);
        digitalWrite(BUZZER_PIN, LOW);
        delayMicroseconds(tone);
    }
 }

void BUZZER::playNote(int BUZZER_PIN, char note, int duration) 
 {
    char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
    int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
    // play the tone corresponding to the note name
    for (int i = 0; i < 8; i++) 
     {
        if (names[i] == note) 
        {
            playTone(BUZZER_PIN, tones[i], duration);
        }
     }
 }

void BUZZER::playmelody(int BUZZER_PIN, int length, char note[], int duration, int tempo) 
{  
  for (int i = 0; i < length; i++) 
    {
        if (note[i] == ' ')
        {
            delay(tempo); // rest
        }
        else
        {
            playNote(BUZZER_PIN, note[i], tempo);
        }
        // pause between notes
        delay(tempo / 2);
    }
}
/**Buzzer class ends**/
