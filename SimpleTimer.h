
#include <Arduino.h>

class SimpleTimer { 
public:
  typedef void (*Callback)();

  void SetTimer(int Minute, Callback c);
	void RunTimer();
};
