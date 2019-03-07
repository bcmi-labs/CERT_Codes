if ((digitalRead(B1) == 1 && 
     digitalRead(B3) == 0) || 
    digitalRead(B2) == 1) {
  digitalWrite(13, HIGH);
}
else {
  digitalWrite(13, LOW);
}
