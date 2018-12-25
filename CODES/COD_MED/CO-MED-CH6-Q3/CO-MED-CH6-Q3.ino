unsigned long current;
int interval = 2000;

void setup()
{
  pinMode(13,OUTPUT);
}
void loop()
{
  current = millis();
  while(millis() < current+prueba)
  {
   digitalWrite(13,HIGH);
  }
  while(millis() < current+2*prueba)
  {
   digitalWrite(13,LOW);
  }
}
