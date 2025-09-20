#include <Arduino.h>

#define PIR_PIN 4   // GPIO onde o PIR está conectado
#define LED_PIN 2   // GPIO do LED (no ESP32-S3 geralmente é o 2)

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int movimento = digitalRead(PIR_PIN);
  
  if (movimento == HIGH) {
    Serial.println("🚶 Movimento detectado!");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("Sem movimento...");
    digitalWrite(LED_PIN, LOW);
  }

  delay(200); // Evita poluir o Serial
}