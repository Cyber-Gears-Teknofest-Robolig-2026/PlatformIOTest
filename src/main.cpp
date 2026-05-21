#include <Arduino.h>
#include <ArduinoJson.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

const int ledPin = LED_BUILTIN;

bool ledDurumu = false;
int sayac = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  Serial.println();
  Serial.println("Deneyap Kart + ArduinoJson + LED testi basladi");
}

void loop() {
  ledDurumu = !ledDurumu;

  digitalWrite(ledPin, ledDurumu ? HIGH : LOW);

  JsonDocument doc;

  doc["kart"] = "Deneyap Kart";
  doc["kutuphane"] = "ArduinoJson";
  doc["sayac"] = sayac++;
  doc["led_pin"] = ledPin;
  doc["led_durumu"] = ledDurumu ? "ACIK" : "KAPALI";
  doc["millis"] = millis();

  serializeJsonPretty(doc, Serial);
  Serial.println();
  Serial.println("----------------------");

  delay(1000);
}