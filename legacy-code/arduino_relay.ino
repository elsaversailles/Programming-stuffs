#include <DHT.h>
#include <CO2Sensor.h>

#define DHTPIN 7          // Digital pin to which the DHT22 sensor is connected
#define DHTTYPE DHT22     // Type of the DHT sensor

DHT dht(DHTPIN, DHTTYPE);
CO2Sensor co2Sensor(A0, 0.99, 100);

const int RELAY_PIN = 8;
const int RELAY_DELAY = 10 * 60 * 10; // 10 minutes in milliseconds

void setup() {
  Serial.begin(9600);
  dht.begin();
  co2Sensor.calibrate();
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature(); // Read temperature value
  float humidity = dht.readHumidity(); // Read humidity value

  float co2 = co2Sensor.read() * 1000;

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.print(" %, CO2: ");
  Serial.print(co2);
  Serial.println(" ppm");

  if (temp >= 28 || co2 >= 2000) {
    digitalWrite(RELAY_PIN, HIGH); // Turn on the relay

    Serial.println("Relay ON");

    delay(RELAY_DELAY); // Wait for 10 minutes

    digitalWrite(RELAY_PIN, LOW); // Turn off the relay

    Serial.println("Relay OFF");
  }

  delay(1000); // Wait for 1 second before reading the sensors again
}
