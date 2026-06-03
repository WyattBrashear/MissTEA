#include <Arduino.h>
#include <WiFiS3.h>
#include <arduino_secrets.h>
// Simple test script to figure out if WiFi works
char ssid[] = SECRET_SSID;
char pass[] = SECRET_PASS;
int startButton = 2;
int tempPot = A0;
int timePot = A1;
int speedPot = A2;
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(startButton, INPUT_PULLUP);
}

void loop() {
// write your code here
    Serial.print("Status: ");
    Serial.print(analogRead(tempPot));
    Serial.print(", ");
    Serial.print(analogRead(timePot));
    Serial.print(", ");
    Serial.print(analogRead(speedPot));
    Serial.print(", ");
    Serial.println(digitalRead(startButton));
    delay(100);
}
