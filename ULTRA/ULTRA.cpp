#include "Arduino.h"
#include "ULTRA.h"
int pin1, pin2, threshold=1000;

/** ULTRA class begins**/
/******************************************************************************
 * Constructors
 ******************************************************************************/

ULTRA::ULTRA()
 {
  pinMode(pin1, INPUT);
  pinMode(pin2, OUTPUT);
  analogWrite(pin1, 0);
 }

void ULTRA::start(int pin1)
   {
  analogWrite(pin1, 255);
   }

void ULTRA::check(int pin2)
 {
  int a=analogRead(pin2);
  delay(10); 
  t=t+10; 
   if(a>threshold)
       Serial.print("The distance in m is ",(300*t/2000));
       return;   
   else
         break;    
 } 
