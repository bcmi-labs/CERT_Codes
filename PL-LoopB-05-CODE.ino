void setup()
{
  current = millis();
  while (millis() < current + 2000)
  {
    digitalWrite(13, HIGH);
  }
  while (millis() < current + 2 * 2000)
  {
    digitalWrite(13, LOW);
  }
}
