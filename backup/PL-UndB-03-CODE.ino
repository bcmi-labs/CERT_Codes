void loop() {
  int sensorVal = analogRead(sensorPin);

  // mapping analogRead to voltage
  float voltage = (sensorVal / 1024.0) * 5;

  //calculating temperature
  float temperature = (voltage - 0.5) * 100;

  Serial.print("Temperature is: ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1);
}
