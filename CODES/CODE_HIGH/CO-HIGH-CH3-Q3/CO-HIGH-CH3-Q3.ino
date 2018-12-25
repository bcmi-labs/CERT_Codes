 if ((digitalRead(3) || digitalRead(6)) || digitalRead(7))
    {
      digitalWrite(4, LOW);
      }
    else
    {
      digitalWrite(4, HIGH);
      }
