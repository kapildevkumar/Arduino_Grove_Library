#include "ROTARY.h" //include the declaration for this class
int  ROTARY_PIN;

    #define LED 2//the Grove - LED is connected to D3 of Arduino
    #define ADC_REF 5//reference voltage of ADC is 5v.If the Vcc switch on the seeeduino
                     //board switches to 3V3, the ADC_REF should be 3.3
    #define GROVE_VCC 5//VCC of the grove interface is normally 5v
    #define FULL_ANGLE 300//full value of the rotary angle is 300 degrees

/** Rotary class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/

ROTARY::ROTARY()
{         
    pinMode(ROTARY_PIN, INPUT); //make that pins as INPUTS and OUTPUT
    Serial.begin(9600);
}
 
//<<destructor>>
ROTARY::~ROTARY(){/*nothing to destruct*/}

/******************************************************************************
 * User API
 ******************************************************************************/
 
//Check the Rotary
void ROTARY::angle(int ROTARY_PIN)
{
        int sensor_value = analogRead(ROTARY_PIN);
        float voltage;
        voltage = (float)sensor_value*ADC_REF/1023;
        float degrees = (voltage*FULL_ANGLE)/GROVE_VCC;               
        Serial.println("The angle between the mark and the starting position:");
        Serial.println(degrees);   

delay(100);
}    
