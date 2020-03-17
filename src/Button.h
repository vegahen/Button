#ifndef Button_h
#define Button_h

class Button{
  byte pin;
  bool pressed_when;
  unsigned long time_delay;
  
  long ignore_until;
  
  bool was_in;
  bool is_in;
  bool been_pressed;
  bool pressed_now;
  bool been_released;
  bool released_now;
  
public:|
  Button(byte pin, bool pressed_when, unsigned long time_delay = 0);
  void refresh();
  const bool pressed(bool reset = true);
  const bool released(bool reset = true);
  const bool in(bool reset = true);
};

#endif