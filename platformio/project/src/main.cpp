#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hello ESP32 PlatformIO!");
}

void loop() {
  delay(1000);
}
