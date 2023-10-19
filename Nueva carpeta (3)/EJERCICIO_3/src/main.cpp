#include <Arduino.h>

int suma = 0;
int cuadrado;

void setup() {
  Serial.begin(9600);
   Serial.println();}

void loop() {
  for (int i = 1; i <= 10; i++) {
    cuadrado = i * i;
    suma += cuadrado;
  }

  Serial.print("El resultado es: ");
  Serial.println(suma);


  while (1) {
    continue;
  }
}