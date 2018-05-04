int bulb = 1;

/*--------------------------*/
void setup()
{
  pinMode(bulb,OUTPUT);
}

/*--------------------------*/

void loop()
{
  digitalWrite(bulb,HIGH);
  delay(1000);
  digitalWrite(bulb,LOW);
  delay(1000);
}



