 #include <Servo.h>
  
  Servo test_servo;
  
  int const LEDPin = 3;
  int angle;
  int light;
  
  void setup() 
  {
    test_servo.attach(10);
    pinMode(LEDPin,OUTPUT);
  }
  
  void loop() 
  {
  for (                         )
   {
    test_servo.write(angle);
    
    if (          ) 
    {
      light = map(                );
      analogWrite(LEDPin,light);  
    }
    else
    {
      light = map(                );
      analogWrite(LEDPin,light);
    }
   }
   
   delay(15);
  }
