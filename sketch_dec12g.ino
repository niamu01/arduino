#include <SoftwareSerial.h>

SoftwareSerial swSerial(D4, D5); //RX, TX
//rx->tx, tx->rx 연결

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  swSerial.begin(9600);
  Serial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    String inputStr = Serial.readStringUntil('\n');
    Serial.println(inputStr);
    swSerial.println(inputStr);
  }
  if (swSerial.available())
  {
    String inputStr = swSerial.readStringUntil('\n');
    Serial.println(inputStr);
    swSerial.println(inputStr);
  }
}
