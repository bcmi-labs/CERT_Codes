if ((digitalRead(B1) == 1 && 
     digitalRead(B3) == 1) || 
    digitalRead(B2) == 0) {
  digitalWrite(13, HIGH);
}
else {
  digitalWrite(13, LOW);
}
