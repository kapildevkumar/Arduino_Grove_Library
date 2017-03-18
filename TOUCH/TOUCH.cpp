#include "TOUCH.h" //include the declaration for this class
int  TOUCH_PIN;
int LED_PIN;

/** Button class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/

TOUCH::TOUCH()
{         
    pinMode(TOUCH_PIN, INPUT); //make that pins as INPUTS and OUTPUT
    pinMode(LED_PIN, OUTPUT);
}
 
//<<destructor>>
TOUCH::~TOUCH(){/*nothing to destruct*/}

/******************************************************************************
 * User API
 ******************************************************************************/
 
//Check the TOUCH for ON and OFF : onoff
void TOUCH::onoff(int TOUCH_PIN, int LED_PIN)
{
if(digitalRead(TOUCH_PIN)>0)
  {
  digitalWrite(LED_PIN,HIGH);   
  }
 else 
  {
  digitalWrite(LED_PIN,LOW);   
  }
delay(100);
}

/**Button class ends**/
