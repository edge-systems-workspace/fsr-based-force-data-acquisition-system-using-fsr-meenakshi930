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

int pressureVal = 0;
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

void loop() {
    pressureVal = analogRead(A0);

    Serial.print("Force Pressure Sensor Value: ");
    Serial.println(pressureVal);

    delay(500);
}
