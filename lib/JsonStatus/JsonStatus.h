#pragma once

#include <Arduino.h>
#include <ArduinoJson.h>

class JsonStatus {
public:
  JsonStatus(const char* deviceName, const char* projectName);

  void begin();
  void printStatus(bool ledState, int counter, unsigned long uptimeMs);

private:
  const char* _deviceName;
  const char* _projectName;
};