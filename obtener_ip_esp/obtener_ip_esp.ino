#include <ESP8266WiFi.h>

const char* ssid = "SGSLab";
const char* password = "x2MCQcqz#6aZ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  WiFi.begin(ssid,password);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("-");
    delay(200);
  }

  Serial.println("\nConnected");

}

void loop() {
  // put your main code here, to run repeatedly
  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("Conectado a  :  ");
    Serial.println(WiFi.localIP());
  }

  delay(5000);
}
