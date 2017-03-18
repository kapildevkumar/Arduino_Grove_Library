#include "TEMP.h" //include the declaration for this class
int  TEMP_PIN;
float temperature;
int B=3975;                  // B value of the thermistor
float resistance;

/** TEMP class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/

TEMP::TEMP()
{         
    pinMode(TEMP_PIN, INPUT); //make that pins as INPUTS and OUTPUT
    Serial.begin(9600); 
}
 
//<<destructor>>
TEMP::~TEMP(){/*nothing to destruct*/}

/******************************************************************************
 * User API
 ******************************************************************************/
 
//Check the BUTTON for ON and OFF : onoff
void TEMP::read(int TEMP_PIN)
{     
    int val = analogRead(TEMP_PIN);                               // get analog value
    resistance=(float)(1023-val)*10000/val;                      // get resistance
    temperature=1/(log(resistance/10000)/B+1/298.15)-273.15;     // calc temperature
    Serial.println(temperature);   
    delay(1000);          // delay 1s
}
/**TEMP class ends**/
