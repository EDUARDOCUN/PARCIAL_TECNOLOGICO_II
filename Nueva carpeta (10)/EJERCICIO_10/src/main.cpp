#include <Arduino.h>


void pedirDatos();
void ordenarNumeros(int *, int);
void mostrarArregloOrdenado(int *, int);

int nElementos, *elemento;

void setup() {
  Serial.begin(9600); 
  pedirDatos();
  ordenarNumeros(elemento, nElementos);
  mostrarArregloOrdenado(elemento, nElementos);
  delete[] elemento;
}

void loop() {
  
}

void pedirDatos() {
  Serial.println("Digite el numero de elementos: ");
  while (!Serial.available()) {
    
  }
  nElementos = Serial.parseInt(); 

  elemento = new int[nElementos];

  for (int i = 0; i < nElementos; i++) {
    Serial.print("Digite un numero [");
    Serial.print(i);
    Serial.print("]: ");
    while (!Serial.available()) {
      
    }
    *(elemento + i) = Serial.parseInt(); 
  }
}

void ordenarNumeros(int *elemento, int nElementos) {
  int aux;

  
  for (int i = 0; i < nElementos; i++) {
    for (int j = 0; j < nElementos - 1; j++) {
      if (*(elemento + j) > *(elemento + j + 1)) {
        aux = *(elemento + j);
        *(elemento + j) = *(elemento + j + 1);
        *(elemento + j + 1) = aux;
      }
    }
  }
}

void mostrarArregloOrdenado(int *elemento, int nElementos) {
  Serial.println("\n\nMostrando Arreglo Ordenado: ");
  for (int i = 0; i < nElementos; i++) {
    Serial.print(*(elemento + i));
    Serial.print(" ");
  }
}