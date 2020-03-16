#include "Arduino.h"

#include "Button.h"

Button::Button(byte pin, unsigned int time_delay, bool releaseMode) :
  pin(pin),
  time_delay(time_delay),
  releaseMode(releaseMode),
  pressed(false),
  time_out(0){
    pinMode(pin, INPUT);
}

const bool Button::toggled(){
  if (releaseMode == false){
    if (millis() < time_out){
      return false;
    }
    if (digitalRead(pin) == true){
      time_out = millis() + time_delay;
      return true;
    }
  }
  if (pressed == digitalRead(pin)){
    return false;
  }
  if (digitalRead(pin) == true){
    pressed = true;
    return true;
  }
  pressed = false;
  return false;
}