#include "SimpleTimer.h"

SimpleTimer SimpleTimer;

void setup() {
  Serial.begin(9600);
  
  SimpleTimer.SetTimer(10, TimerCallBack);
}

void loop() {
  
  SimpleTimer.RunTimer();
}

void TimerCallBack() {
  Serial.println("alert");
}
