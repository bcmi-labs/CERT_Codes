int count = 0;

void setup() 
{
  pinMode(13,OUTPUT);
   
  while (count < 30)
  {
    digitalWrite(13,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
  }
  count++;
}

void loop() 
{
      
}
