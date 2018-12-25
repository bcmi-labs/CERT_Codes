#include <Servo.h>
  
  Servo test_servo;
  
  int const LEDPin = 3;
  int angle;
  int light;
  
  void setup() 
  {
             .attach(10);
    pinMode(LEDPin,OUTPUT);
  }
  
  void loop() 
  {
  for (                     )
   {
    test_servo.write(angle);
     
    light = map(            );
    analogWrite(9,light);  
    delay(15);
   }
  }
