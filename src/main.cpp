#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

#define FSR_PIN A0

int fsrValue = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("=== FSR Force Measurement System Initialized ===");
}

void loop() {

    fsrValue = analogRead(FSR_PIN);

    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
