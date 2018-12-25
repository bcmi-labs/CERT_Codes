void setup() 
{
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6,___);
 pinMode(7,___);

}

void loop() 
{
   //Turning ON
   digitalWrite(3,HIGH);
   digitalWrite(7,___);
   delay(200);
   digitalWrite(4,___);
   digitalWrite(6,___);
   delay(200);
   digitalWrite(5,HIGH);
   delay(450);
   
   //Turning OFF
   digitalWrite(5,LOW );
   delay( 200);
   digitalWrite(6,___);
   digitalWrite(4,___);
   delay( 200);
   digitalWrite(3,LOW );
   digitalWrite(7,___);
   delay(450);
}
