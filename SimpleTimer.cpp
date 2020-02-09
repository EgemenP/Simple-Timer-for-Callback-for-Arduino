#include "SimpleTimer.h"
unsigned long DestinationTime;
bool Active = false;

void (*functionPointer)(void);


void SimpleTimer :: SetTimer(int Minute, Callback c){
    functionPointer = c;
    DestinationTime = millis() +  Minute *1000;
    Active = true;
}

void SimpleTimer :: RunTimer(){
  if (millis() > DestinationTime && Active == true){
    Active = false;
    functionPointer();
  }
}
