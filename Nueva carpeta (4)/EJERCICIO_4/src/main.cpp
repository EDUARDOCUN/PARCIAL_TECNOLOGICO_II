#include <Arduino.h>

void setup() {
    Serial.begin(9600);
}

void loop() {
    int n;
    Serial.println("DIGITE EL NUMERO DE ELEMENTOS: ");
    while (Serial.available() == 0) {
        
    }
    n = Serial.parseInt();

    if (n <= 0) {
        Serial.println("El número de elementos debe ser mayor que 0.");
        return;
    }

    int x = 0, y = 1, z;
    Serial.println("Serie de Fibonacci de " + String(n) + " elementos:");
    Serial.print("1");  

    for (int i = 2; i <= n; i++) {
        z = x + y;
        Serial.print(", " + String(z));
        x = y;
        y = z;
    }

    Serial.println();
}