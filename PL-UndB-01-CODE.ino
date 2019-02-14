if ((digitalRead(B1) == 1 && digitalRead(B3) == 0)
    || digitalRead(B2) == 0)
{
  digitalWrite(4, HIGH);
}
else
{
  digitalWrite(4, LOW);
}
