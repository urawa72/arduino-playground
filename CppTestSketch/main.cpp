#include <Arduino.h>
#include <ArduinoSTL.h>

std::vector<String> v;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 10; i++) {
    v.push_back(String("hello!") + String(i));
  }
}

void loop() {
  std::sort(v.begin(), v.end());
  for(int i = 0; i < 10; i++) {
    Serial.println(v[i]);
    delay(2000);
  }
}
