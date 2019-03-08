void loop(){
  current = millis();
  while (millis() < current + 5000){
    sensorValue = analogRead(A0);
    
    if (sensorValue > sensorHigh)
    {sensorHigh = sensorValue;}
    
    if (sensorValue < sensorLow)
    {sensorLow = sensorValue;}
  }
}
