int pinB1 = digitalRead(11);
int pinB2 = digitalRead(6);
int pinB3 = digitalRead(3);

if ((pinB1 == 1 || pinB2 == 0) && 
    pinB3 == 1) 
{
  digitalWrite(13, HIGH);
}
else 
{
  digitalWrite(13, LOW);
}
