#ifndef Button_h
#define Button_h

class Button{
  bool pressed;
  long time_out;
  
  byte pin;
  unsigned int time_delay;
  bool releaseMode;
  
public:
  Button(byte pin, unsigned int time_delay, bool releaseMode);
  const bool toggled();
};

#endif