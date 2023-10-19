#include <Arduino.h>

int numero, *dir_numero;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite un numero: ");
}

void loop() {
  if (Serial.available() > 0) {
    numero = Serial.parseInt();
    dir_numero = &numero;

    if (*dir_numero % 2 == 0) {
      Serial.print("El numero: ");
      Serial.println(*dir_numero);
      Serial.print("Posicion: ");
      Serial.println((unsigned long)dir_numero, HEX);
      Serial.println("Es par");
    } else {
      Serial.print("El numero: ");
      Serial.println(*dir_numero);
      Serial.print("Posicion: ");
      Serial.println((unsigned long)dir_numero, HEX);
      Serial.println("Es impar");
    }
  }
}