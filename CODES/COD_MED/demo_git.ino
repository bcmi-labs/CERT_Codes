
  if (digitalRead(Bot1) == 1 && digitalRead(Bot3) == 0
      || digitalRead(Bot2) == 0 && digitalRead(Bot3) == 1)
  {
    digitalWrite(LED, HIGH);
  }

  else
  {
    digitalWrite(LED, LOW);
  }
