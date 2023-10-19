#include <Arduino.h>

void tiempo(int totalSeg, int& horas, int& min, int& seg);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int totalSeg, horas, min, seg;

  Serial.print("Digita la cantidad de segundos: ");
  while (!Serial.available()) {
    // Wait for user input
  }
  totalSeg = Serial.parseInt();

  tiempo(totalSeg, horas, min, seg);

  Serial.println("\nHoras: " + String(horas));
  Serial.println("Minutos: " + String(min));
  Serial.println("Segundos: " + String(seg));
}

void tiempo(int totalSeg, int& horas, int& min, int& seg) {
  horas = totalSeg / 3600;
  totalSeg %= 3600;
  min = totalSeg / 60;
  seg = totalSeg % 60;
}
