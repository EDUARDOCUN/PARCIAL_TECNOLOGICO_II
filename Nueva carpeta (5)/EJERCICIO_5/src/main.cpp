#include <Arduino.h>

struct Corredor {
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
} c1;

char categoria[20];

void setup() {
    Serial.begin(9600);
    Serial.println("Ingrese los siguientes datos:");

    Serial.print("Nombre: ");
    while (!Serial.available()) {}
    Serial.readBytesUntil('\n', c1.nombre, sizeof(c1.nombre));

    Serial.print("Edad: ");
    while (!Serial.available()) {}
    c1.edad = Serial.parseInt();
    Serial.read(); 

    Serial.print("Sexo: ");
    while (!Serial.available()) {}
    Serial.readBytesUntil('\n', c1.sexo, sizeof(c1.sexo));

    Serial.print("Club: ");
    while (!Serial.available()) {}
    Serial.readBytesUntil('\n', c1.club, sizeof(c1.club));

    if (c1.edad <= 18) {
        strcpy(categoria, "Juvenil");
    } else if (c1.edad <= 40) {
        strcpy(categoria, "Senior");
    } else {
        strcpy(categoria, "Veterano");
    }

    Serial.println("\n\nMostrando Datos");
    Serial.print("Nombre: ");
    Serial.println(c1.nombre);
    Serial.print("Edad: ");
    Serial.println(c1.edad);
    Serial.print("Sexo: ");
    Serial.println(c1.sexo);
    Serial.print("Club: ");
    Serial.println(c1.club);
    Serial.print("Categoria: ");
    Serial.println(categoria);
}

void loop() {

}