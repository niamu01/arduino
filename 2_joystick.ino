int joystick_x = A0;
int joystick_y = D5;
int joystick_z = D6;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(joystick_x, INPUT);
  pinMode(joystick_y, INPUT);
  pinMode(joystick_z, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(joystick_x);
  int y = analogRead(joystick_y);
  int sw = analogRead(joystick_z);

  Serial.print("X: ");
  Serial.print(x);
  Serial.print("\tY: ");
  Serial.print(y);
  Serial.print("\tSW: ");
  Serial.print(sw);
  Serial.print("\n");
  delay(1000);
}
