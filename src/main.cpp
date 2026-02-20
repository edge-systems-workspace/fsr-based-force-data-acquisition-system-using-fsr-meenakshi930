#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author meenakshi
 * @date 2026-01-30
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

#include <Arduino.h>

int pressureValue = 0;
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

void loop() {
    pressureValue = analogRead(A0);

    Serial.print("Pressure Sensor Value: ");
    Serial.println(pressureValue);

    delay(500);
}
