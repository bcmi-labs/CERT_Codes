void loop()
{
  button = digitalRead(buttonPin);
  if (button == 1) //Button pressed
  {
    for (int i = 0; i < 5; i++)
    {
      digitalWrite(LED1, HIGH);
      delay(250);
      digitalWrite(LED1, LOW);
      delay(250);
      for (int i = 0; i < 5; i++)
      {
        digitalWrite(LED2, HIGH);
        delay(250);
        digitalWrite(LED2, LOW);
        delay(250);
      }
    }
  }
  else
  {
    digitalWrite(LED2, HIGH);
    delay(250);
    digitalWrite(LED2, LOW);
    delay(250);;
    for (int i = 37; i > 28; i--)
    {
      digitalWrite(LED2, HIGH);
      delay(250);
      digitalWrite(LED2, LOW);
      delay(250);
    }
  }
}
