#include "Arduino.h"

#include "Button.h"

Button::Button(byte pin, bool pressed_when, unsigned int time_delay) :
  pin(pin),
  pressed_when(pressed_when),
  time_delay(time_delay),
  in(false),
  ignore_until(0) {}

const bool Button::pressed(){
  if (time_delay){
    if (millis() < ignore_until){
      if (digitalRead(pin) == pressed_when){
        in = true;
      }
      else{
        in = false;
      }
      return false;
    }
    if (digitalRead(pin) == pressed_when){
      in = true;
      ignore_until = millis() + time_delay;
      return true;
    }
    in = false;
    return false;
  }
  
  if (digitalRead(pin) == pressed_when){
    if (in == true){
      return false;
    }
    in = true;
    return true;
  }
  if (in == true){
    in = false;
  }
  return false;
}


const bool Button::is_in(){
  return in;
}