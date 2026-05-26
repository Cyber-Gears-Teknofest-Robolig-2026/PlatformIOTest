#include "JsonStatus.h"

JsonStatus::JsonStatus(const char* deviceName, const char* projectName) {
  _deviceName = deviceName;
  _projectName = projectName;
}

void JsonStatus::begin() {
  Serial.println();
  Serial.println("JsonStatus kutuphanesi baslatildi.");
}

void JsonStatus::printStatus(bool ledState, int counter, unsigned long uptimeMs) {
  JsonDocument doc;

  doc["device"] = _deviceName;
  doc["project"] = _projectName;
  doc["library"] = "JsonStatus";
  doc["counter"] = counter;
  doc["led"] = ledState ? "ON" : "OFF";
  doc["uptime_ms"] = uptimeMs;

  serializeJsonPretty(doc, Serial);
  Serial.println();
  Serial.println("------------------------------");
}