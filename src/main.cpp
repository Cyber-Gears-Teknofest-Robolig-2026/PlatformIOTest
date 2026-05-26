#include <Arduino.h>
#include "config.h"
#include "JsonStatus.h"

JsonStatus statusReporter(DEVICE_NAME, PROJECT_NAME);

bool ledState = false;
int counter = 0;

void setup() {
  Serial.begin(SERIAL_BAUD_RATE);
  delay(1000);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Ana program basladi.");
  statusReporter.begin();
}

void loop() {
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState ? HIGH : LOW);

  statusReporter.printStatus(ledState, counter, millis());

  counter++;

  delay(LOOP_DELAY_MS);
}