void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
}
