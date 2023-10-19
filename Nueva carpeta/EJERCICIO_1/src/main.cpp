#include <Arduino.h>

void setup() {
  Serial.begin(9600);
   Serial.println();


   Serial.println("DIGITE SU EDAD");
   while(!Serial.available()){}
   int EDAD =Serial.parseInt();
   Serial.println("EDAD:"+String(EDAD));    

    Serial.println("DIGITE SU ALTURA");
    while(!Serial.available()){}
    float ALTURA =Serial.parseInt();
    Serial.println ("ALTURA:"+String(ALTURA));

 Serial.println("EDAD:" + String(EDAD));
 
 Serial.println("ALTURA:" + String(ALTURA));

   
   
   }


void loop() {
  
}
