#include <Arduino.h>

#define myLED 6

void setup() {
  // put your setup code here, to run once:
  pinMode(myLED ,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myLED, HIGH);
  Serial.println("LED ON");
  delay(500);

  digitalWrite(myLED, LOW);
  Serial.println("LED OFF");
  delay(500);
}