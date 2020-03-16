#include <Button.h>

Button B2(2, HIGH, 3500);
Button B3(3, HIGH);

void setup() {
  pinMode(13, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  B2.refresh();
  B3.refresh();
  if (B2.pressed()){
    Serial.println("a pressed");
  }
  if (B2.released()){
    Serial.println("a released");
  }
  if (B3.pressed()){
    Serial.println("b pressed");
  }
  if (B3.released()){
    Serial.println("b released");
  }
}
