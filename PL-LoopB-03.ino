for (int i = 0; i <= 7; i++)
{
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED2, LOW);
  delay(250);
}
for (int i = 33; i >= 28; i--)
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(250);
}
