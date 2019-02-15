void setup()
{
  current = millis();
  while (millis() < current + interval)
  {
    digitalWrite(13, HIGH);
  }
  while (millis() < current + 2 * interval)
  {
    digitalWrite(13, LOW);
  }
}
