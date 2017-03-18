#include "CAR.h" //include the declaration for this class
int pin1, pin2, pin3, pin4, s;

/** Car class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/

CAR::CAR()
{         
    pinMode(pin1, OUTPUT); //make that pins as INPUTS and OUTPUT
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}
 
//<<destructor>>
CAR::~CAR(){/*nothing to destruct*/}

/******************************************************************************
 * User API
 ******************************************************************************/
 
//Run the car
void CAR::run(int pin1,int pin2,int pin3,int pin4,int s)
 {
  analogWrite(pin2, 0);
  analogWrite(pin4, 0);
  switch(s)
   {
       case 1:
       analogWrite(pin1, 64);
       analogWrite(pin3, 64);
       case 2:
       analogWrite(pin1, 128);
       analogWrite(pin3, 128);
       case 3:
       analogWrite(pin1, 255);
       analogWrite(pin3, 255);
   }
 } 

void CAR::turn(int pin1,int pin2,int pin3,int pin4,int s)
 {
  analogWrite(pin2, 0);
  analogWrite(pin4, 0);
  switch(s)
   {
       case 1:
            analogWrite(pin1, 45);
            analogWrite(pin3, 255);
       case 2 :
            analogWrite(pin1, 255);
            analogWrite(pin3, 45);       
   }
 }

/**Car class ends**/
