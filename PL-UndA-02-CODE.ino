void loop() {
  redSensorValue = analogRead(redPin);
  delay(5);
  greenSensorValue = analogRead(greenPin);
  delay(5);
  blueSensorValue = analogRead(bluePin);
  delay(5);

  redValue   = redSensorValue   / 4;
  greenValue = greenSensorValue / 4;
  blueValue  = blueSensorValue  / 4;

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
