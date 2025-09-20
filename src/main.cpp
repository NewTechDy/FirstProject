#include <Arduino.h>

#define PIR_PIN 4   
#define LED_PIN 2   

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

  delay(200); 
}
