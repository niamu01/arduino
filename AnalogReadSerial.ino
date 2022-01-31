/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
int ledPin = 9;      // LED connected to digital pin 9
int analogPin = 3;   // potentiometer connected to analog pin 3
int val = 0;         // variable to store the read value

void setup() {
  Serial.begin(9600);
  pinMode(D6, OUTPUT);  // sets the pin as output
}

void loop() { 
  int sensorValue = analogRead(A0);
  int data = sensorValue / 4;
  if (sensorValue > 400)
    analogWrite(D6, 0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  else
    analogWrite(D6, 255);
  Serial.println(sensorValue);
  Serial.println(data);
}
