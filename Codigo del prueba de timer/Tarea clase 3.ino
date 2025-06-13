#include <Ticker.h>

Ticker timer;

void timer_callback() {
  Serial.println("Timer triggered!");
}

void setup() {
  Serial.begin(115200);
  timer.attach(1.0, timer_callback); // Cada 1 segundo
  Serial.println("Timer iniciado correctamente");
}

void loop() {
  // No es necesario hacer nada aquí
  delay(1000);
}