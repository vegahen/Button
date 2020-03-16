#ifndef Button_h
#define Button_h

class Button{
  byte pin;
  bool pressed_when;                  // Button is pressed when HIGH or LOW
  unsigned int time_delay;            // Release Mode when = 0
  
  bool in;
  long ignore_until;
  
public:
  Button(byte pin, bool pressed_when, unsigned int time_delay);
  const bool pressed();
  //const bool released();
  const bool is_in();
};

#endif