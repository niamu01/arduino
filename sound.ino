void setup() {
  Serial.begin(9600);
  pinMode(D6, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);

  Serial.println(sensorValue);

  if (sensorValue < 290)
    analogWrite(D6, 0);
  else if (sensorValue > 290)
    analogWrite(D6, 255);

}
