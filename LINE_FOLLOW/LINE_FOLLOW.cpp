#include "LINE_FOLLOW.h" //include the declaration for this class
/*------ Program for Line Follower Robot using Arduino----- */
/*-------definning Inputs------*/
int led; 
int LS;     // left sensor
int RS;      // right sensor
/*-------definning Outputs------*/
int LM1;       // left motor
int LM2;       // left motor
int RM1;       // right motor
int RM2;       // right motor


//<<constructor>> setup the pins
LINE_FOLLOW::LINE_FOLLOW()
{         
  //make that pin an OUTPUT and INPUT
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}
 
//<<destructor>>
LINE_FOLLOW::~LINE_FOLLOW(){/*nothing to destruct*/}
 
//run the bot
void LINE_FOLLOW::run(int int led, int LS, int RS, int LM1, int LM2, int RM1, int RM2)
{ 
  digitalWrite(led);
  delay(10);
  int a=digitalRead(LS); 
  int b=digitalRead(RS);
  
  if(a && b)     // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if((!a) && b)     // Turn left
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(a && (!b))     // turn right
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  
  if((!a) && (!b))     // stop
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  delay(100);     
}
