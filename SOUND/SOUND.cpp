#include "SOUND.h" //include the declaration for this class

const int SOUND_PIN = A0; 
//<<constructor>> setup the LED, make pin 13 an OUTPUT

LED13::LED13()
{
    Serial.begin(115200);
    pinMode(SOUND_PIN, OUTPUT); //make that pin an OUTPUT
}
 
//<<destructor>>
SOUND::~SOUND(){/*nothing to destruct*/}
 
//blink the LED in a period equal to paramterer -time.
void LED13::check(int SOUND_PIN)
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(pinAdc);
    }
    sum >>= 5;
    Serial.println(sum);
    delay(10);
}
