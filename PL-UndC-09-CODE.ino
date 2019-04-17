void setup() {
  pinMode(11, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
}
