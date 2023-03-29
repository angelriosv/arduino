#include "HX711.h"
const int DT = A0;
const int CLK = A1;

HX711 balanza;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  balanza.begin(DT,CLK);

  Serial.print("Lectura del valor del ADC:t");
  Serial.println(balanza.read());
  Serial.println("No ponga ningún objeto sobre la balanza");
  Serial.println("Destarando...");
  balanza.set_scale(); //La escala por defecto es 1, aqui colocar la escala
  balanza.tare(20);  //El peso actual es considerado Tara.
  Serial.println("Coloque un peso conocido:");

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Valor de lectura: \t");
  Serial.println(balanza.get_value(10),0);
  delay(100);
}
