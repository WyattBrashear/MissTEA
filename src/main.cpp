#include <Arduino.h>
// Simple test script to figure out if everything is working
int buttonpin = 2;
void setup() {
// write your initialization code here
    pinMode(buttonpin, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
// write your code here
    Serial.println(digitalRead(buttonpin));
}