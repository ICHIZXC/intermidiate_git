#include "DHT.h"
DHT dht;

Serial.println();
Serial.println("Status\tHumidity (%)\tTemperature (C)\t(F)");
dht.setup(4);

delay(dht.getMinimumSamplingPeriod());
float humidity = dht.getHumidity(); // ดึงค่าความชื้น
float temperature = dht.getTemperature(); // ดึงค่าอุณหภูมิ
Serial.print(dht.getStatusString());
Serial.print("\t");
Serial.print(humidity, 1);Serial.print("\t\t");
Serial.print(temperature, 1);
Serial.print("\t\t");
Serial.println(dht.toFahrenheit(temperature), 1);
delay(500);
}