if ((digitalRead(7) == 1 || digitalRead(3) == 0) && digitalRead(6) == 0)
    {
      digitalWrite(4, HIGH);
      }
    else
    {
      digitalWrite(4, LOW);
      }
