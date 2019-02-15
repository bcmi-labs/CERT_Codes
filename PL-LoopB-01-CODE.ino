for (int i = 0; i < 5; i++)
{
  digitalWrite(LED1, HIGH);
  delay(250);
  digitalWrite(LED1, LOW);
  delay(250);
  for (int i = 26; i > 18; i--)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(250);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(250);
  }  
}
