void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(500);
}
