#include "LIGHT.h" //include the declaration for this class
 
/** LIGHT class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/
int LIGHT_PIN;
int LED_PIN;
int threshold;
LIGHT::LIGHT()
{
	pinMode(LIGHT_PIN,OUTPUT);
	pinMode(LED_PIN,INPUT);
}
 
//<<destructor>>
LIGHT::~LIGHT()
{/*nothing to destruct*/}
 
/******************************************************************************
 * User API
 ******************************************************************************/
  
void LIGHT::read(int LIGHT_PIN, int LED_PIN, int threshold)
{
    int sensorValue = analogRead(LIGHT_PIN);    //the light sensor is attached to analog 0
    if(sensorValue<threshold)
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }
}
/**LIGHT class ends**/
