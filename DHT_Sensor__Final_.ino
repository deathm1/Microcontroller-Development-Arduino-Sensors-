#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN,DHTTYPE);                // Setting the pin for the dht sensor and the type of dht

void setup()
{
  Serial.begin(9600);   //Baud rate
  Serial.println("DHT Test");
  dht.begin();
}


void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if( isnan(t) || isnan(h) )
  {
    Serial.println("Invalid Readings | Please Check Your Connections.");
  }
  else
  {
    Serial.println("Humidity (%):");
    Serial.println(h);
    Serial.println("Temperature (Celsius):");
    Serial.println(t);
  }
}

