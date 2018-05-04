#include <Wire.h>
#include <Adafruit_BMP085.h>
Adafruit_BMP085 bmp;

void setup()
{
  Serial.begin(9600);
  if(!bmp.begin())
  {
    Serial.println("Error in connections.");
    while(1)
    {
      
    }
  }
}

void loop()
{
  float t = bmp.readTemperature();
  float p = bmp.readPressure();
  float a = bmp.readAltitude();
  
  Serial.println("Temperature(Celcius)");
  Serial.println(t);                                           //Print Temperature

  Serial.println("Pressure(Pascals):");
  Serial.println(p);                                           //Print Pressure
  
  Serial.println("Altitude(Meters):");
  Serial.println(a);                                          //Print Altitude

  Serial.print("Real altitude = ");
  Serial.print(bmp.readAltitude(101500));
  
  Serial.println();
  delay(500);
}

