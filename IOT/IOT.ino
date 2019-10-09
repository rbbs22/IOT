/**
 * IOT Leitura de sensor no APP
 * @author rogerio
 */

#include <Ultrasonic.h>


Ultrasonic ultrasonic(12, 13);
int distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distancia in inches
  distancia = ultrasonic.read();
  Serial.println(distancia);
  Serial.print("");
  delay(500);
}
