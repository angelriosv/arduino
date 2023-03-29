#include "HX711.h"
const int DT = A0;
const int CLK = A1;
const int BZ = 5;
float peso = 0;

HX711 balanza;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  balanza.begin(DT,CLK);

  Serial.print("Lectura del valor del ADC : ");
  Serial.println(balanza.read());
  Serial.println("No ponga ningún objeto sobre la balanza");
  Serial.println("Destarando...");
  balanza.set_scale(26050.1409); //La escala por defecto es 1, aqui colocar la escala
  balanza.tare(20);  //El peso actual es considerado Tara.
  Serial.println("Coloque un peso conocido:");

}

void loop() {
  // put your main code here, to run repeatedly:
  peso = balanza.get_units(20);

  if (peso < 0) {
    Serial.print("Valor de lectura: \t");
    Serial.print("0.0");
    Serial.println(" kg");
  } else {
    Serial.print("Valor de lectura: \t");
    Serial.print(peso,1);
    Serial.println(" kg");
  }
  if (peso <= 0.35) {
    tone(BZ,493);
  } else {
    noTone(BZ);
  }
  // delay(100);
}
