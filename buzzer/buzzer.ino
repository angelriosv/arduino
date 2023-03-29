const int buzz = 5;

#include <EasyBuzzer.h>
//#include <ESP8266WiFi.h>

#define DO  261
#define DOs 277
#define RE  293
#define REs 311
#define MI  329
#define FA  349
#define FAs 369
#define SOL  392
#define SOLs 415
#define LA  440
#define LAs 466
#define SI  493

void setup() {
  // put your setup code here, to run once:

  // tone(buzz, SI);
  // delay(1000);
  // noTone(buzz);
  // delay(1000);

  EasyBuzzer.setPin(buzz);
  // EasyBuzzer.singleBeep(10,200);
  // EasyBuzzer.stopBeep();

}

void loop() {
  // put your main code here, to run repeatedly:

  //generar tono de 440Hz durante 1000 ms
  // tone(buzz, SI);
  // delay(1000);
  // noTone(buzz);
  // delay(1000);
  // delay(500);
  // tone(buzz, SI, 500);
  // delay(500);
  // tone(buzz, SI, 1000);
  // delay(500);

  // tone(buzz, SI, 500);
  // delay(500);
  tone(buzz, SI, 500);
  delay(500);
  // tone(buzz, SI, 1000);
  // delay(500);

  noTone(buzz);

  // delay(1000);
  // EasyBuzzer.update();

  delay(500);
  // EasyBuzzer.beep(SI,3)

}
