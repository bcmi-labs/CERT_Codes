void loop() 
{
redSensorValue = analogRead(redSensorPin);
delay(5);
greenSensorValue = analogRead(greenSensorPin);
delay(5);
blueSensorValue = analogRead(blueSensorPin);
delay(5);

redValue   = redSensorValue   / 4;
greenValue = greenSensorValue / 4;
blueValue  = blueSensorValue  / 4;

analogWrite(redLEDPin, redValue);
analogWrite(greenLEDPin, greenValue);
analogWrite(blueLEDPin, blueValue);
