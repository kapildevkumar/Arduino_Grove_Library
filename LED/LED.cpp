#include "LED.h" //include the declaration for this class
 
/** LED class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/
int LED_PIN;
LED::LED()
{
	pinMode(LED_PIN,OUTPUT);
}
 
//<<destructor>>
LED::~LED()
{/*nothing to destruct*/}
 
/******************************************************************************
 * User API
 ******************************************************************************/
 
//turn the LED on
void LED::on(int LED_PIN)
{
        digitalWrite(LED_PIN,HIGH); //set the pin HIGH and thus turn LED on
}
 
//turn the LED off
void LED::off(int LED_PIN)
{
        digitalWrite(LED_PIN,LOW); //set the pin LOW and thus turn LED off
}
 
//blink the LED in a period equal to paramterer -time.
void LED::blink(int LED_PIN, int time1, int time2)
{
        on(LED_PIN);                   //turn LED on
        delay(time1);  //wait half of the wanted period
        off(LED_PIN);                  //turn LED off
        delay(time2);  //wait the last half of the wanted period
}

void LED::fade(int LED_PIN, int time)
{
     for(int i=0; i<255; i=i+20)
     {
       analogWrite(LED_PIN,i);   
       delay(time/12);
     }    
}

void LED::bright(int LED_PIN, float bright)
{
    analogWrite(LED_PIN,bright*255/100);     
}

/**LED class ends**/
