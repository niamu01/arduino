#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>

DHT mydht(A0, DHT11); //객체선언 

void setup() {
  // put yoursetup code here, to run once:
  Serial.begin(9600);
  mydht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = mydht.readTemperature(); //온도 
  int humi = mydht.readHumidity(); //습도 

  Serial.print("Temp : ");
  Serial.println(temp);
  Serial.print("Humidity : ");
  Serial.println(humi);
  delay(1000); //1초마다 반복 
}
