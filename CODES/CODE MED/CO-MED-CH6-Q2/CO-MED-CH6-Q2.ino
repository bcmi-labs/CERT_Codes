
int count = 0;

void setup() 
{
  pinMode(13,OUTPUT);
  
  while (count < 15)
  {
    digitalWrite(13,HIGH);
    delay(1250);
    digitalWrite(13,LOW);
    delay(1250);
     while (count < 10)
    {
    digitalWrite(13,HIGH);
    delay(1250);
    digitalWrite(13,LOW);
    delay(1250);
    count++;
   }
  }
}

void loop() 
{
      
}
