#include "Keyboard.h"
#include "Mouse.h"

const int led = 13;

void setup() {
  Serial.begin(9600);
  Mouse.begin();
}

void blink() {
  digitalWrite(led, HIGH); 
  delay(100);
  digitalWrite(led, LOW); 
}

void wiggle() {
  blink();
  Mouse.move(10, 0);
  delay(100);
  Mouse.move(-10, 0);
}

void loop() {
  wiggle();
  delay(2000);
}
