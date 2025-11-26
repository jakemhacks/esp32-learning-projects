// First Project on ESP32
// Simple blink test to get used to 
// CPP and make sure everything is working
//
// Author: Jake
// Date: 11/26/25

// library for the main esp32 commands
#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);  // Set GPIO 2 as output
}

void loop() {
  digitalWrite(2, HIGH);  // Turn LED on
  delay(1000);            // Wait 1 second
  digitalWrite(2, LOW);   // Turn LED off
  delay(1000);            // Wait 1 second
}