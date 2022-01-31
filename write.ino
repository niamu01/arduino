void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    //String inputStr = Serial.readStringUntil('\n'); //개행이 나올때까지 입력받음 
    //Serial.println(inputStr);
    //Serial.println(inputStr);

    String inputStr = Serial.readStringUntil('\n');
    long int int_one;

    int_one = inputStr.toInt();
    if (int_one == 1)
      analogWrite(D6, 255);
    else if (int_one == 0)
      analogWrite(D6, 0);
    else
      Serial.println(inputStr);
  }
  // put your main code here, to run repeatedly:

}
