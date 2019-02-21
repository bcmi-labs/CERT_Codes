if ((digitalRead(B1) == 0 && 
     digitalRead(B3) == 0) || 
    digitalRead(B2) == 1) {
  digitalWrite(4, HIGH);
}
else {
  digitalWrite(4, LOW);
}
