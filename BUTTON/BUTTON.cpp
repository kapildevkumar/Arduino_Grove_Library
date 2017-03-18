#include "BUTTON.h" //include the declaration for this class

int  BUTTON_PIN;
int LED_PIN;
//<<constructor>> setup the pins
BUTTON::BUTTON()
{         
    pinMode(BUTTON_PIN, INPUT); //make that pin an OUTPUT and INPUT
    pinMode(LED_PIN, OUTPUT);
}
 
//<<destructor>>
BUTTON::~BUTTON(){/*nothing to destruct*/}
 
//turn the LED on
void BUTTON::onoff(int BUTTON_PIN, int LED_PIN)
{
if(digitalRead(BUTTON_PIN)>0)
  {
  digitalWrite(LED_PIN,HIGH);   
  }
 else 
  {
  digitalWrite(LED_PIN,LOW);   
  }
delay(100);
}
