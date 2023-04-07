#include <CO2Sensor.h>


#include "CO2Sensor.h"

CO2Sensor co2Sensor(A0, 0.99, 100);

void setup() {
  Serial.begin(9600);
  Serial.println("=== Initialized ===");
  co2Sensor.calibrate();
}

void loop() {
  int b  = 400;
  float val = co2Sensor.read();
  float voltage = val/204.6;
  float co2 = voltage * 1000;
  
  Serial.print("CO2 value: ");
  Serial.println(co2);
  //Serial.print("Volt");
  //Serial.println(voltage);
  //Serial.print("Val");
  //Serial.println(val);

  delay(1000);
}
