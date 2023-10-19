#include <Arduino.h>

void mult(float x, float y);
void pedirDatos();

float n1, n2;

void setup() {
  Serial.begin(9600);
  pedirDatos();
  mult(n1, n2);
}

void loop() {
  
}

void pedirDatos() {
  Serial.print("Digite 2 numeros: ");
  while (Serial.available() < 2) {
    
  }
  n1 = Serial.parseFloat();
  n2 = Serial.parseFloat();
}

void mult(float x, float y) {
  float multiplicacion = x * y;
  Serial.print("La multiplicacion es: ");
  Serial.println(multiplicacion);
}