if ((digitalRead(B1) == 0 || 
     digitalRead(B2) == 1) || 
    digitalRead(B3) == 0) {
  digitalWrite(13, HIGH);
}
else {
  digitalWrite(13, LOW);
}
