#include <SoftwareSerial.h>

SoftwareSerial swSerial(D4, D5); //RX, TX
//rx를 tx에 연결

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  swSerial.begin(9600);
  Serial.flush();
  pinMode(D6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    String inputStr = Serial.readStringUntil('\n');
    Serial.flush(); //버퍼비우기 
    Serial.println(inputStr);
    swSerial.println(inputStr);
    Serial.flush();
  }
}
