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

  
  // you can get a more precise measurement of altitude
  // if you know the current sea level pressure which will
  // vary with weather and such. If it is 1015 millibars
  // that is equal to 101500 Pascals.
  
  Serial.print("Real altitude = ");
  Serial.print(bmp.readAltitude(101500));
  
  Serial.println();
  delay(500);
}

