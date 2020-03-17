#include "Arduino.h"

#include "Button.h"

Button::Button(byte pin, bool pressed_when, unsigned long time_delay) :
  pin(pin),
  pressed_when(pressed_when),
  time_delay(time_delay),
  ignore_until(0),
  was_in(false),
  is_in(false),
  been_pressed(false),
  pressed_now(false),
  been_released(true),
  released_now(false) {}

void Button::refresh(){
  is_in = digitalRead(pin) == pressed_when;
  pressed_now = false;
  released_now = false;
  if (!is_in){
    if (was_in && been_pressed){
      been_released = true;
      been_pressed = false;
      released_now = true;
    }
  }
  else if (time_delay){
    if (millis() >= ignore_until){
      been_pressed = true;
      been_released = false;
      pressed_now = true;
      ignore_until = millis() + time_delay;
    }
  }
  else if (been_released){
    been_pressed = true;
    been_released = false;
    pressed_now = true;
  }
  was_in = is_in;
}

const bool Button::pressed(bool reset = true){
  if (reset){ refresh(); }
  return pressed_now;
}
const bool Button::released(bool reset = true){
  if (reset){ refresh(); }
  return released_now;
}
const bool Button::in(bool reset = true){
  if (reset){ refresh(); }
  return was_in;
}