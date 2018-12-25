#include <Servo.h>
  
  Servo 
  Servo 
  
  int const pot_1_Pin = A0;
  int const pot_2_Pin = A1;
  
  int pot_1_Val;
  int pot_2_Val;
  int angle_1;
  int angle_2;
  
  void setup() 
  {
           .attach(9);
           .attach(10);
    
    Serial.begin(9600);
  }
  void loop() 
  {
    pot_1_Val = analogRead(pot_1_Pin);
    pot_2_Val = analogRead(pot_2_Pin);
    
    angle_1 = map(                          );
    angle_2 = map(                          );
    
    Serial.print("pot_1_Val: ");
    Serial.print(pot_1_Val);
    Serial.print(", angle_1: ");
    Serial.println(angle_1);
    
    Serial.print("pot_2_Val: ");
    Serial.print(pot_2_Val);
    Serial.print(", angle_2: ");
    Serial.println(angle_2);
    
    servo_1.write(angle_1);
    servo_2.write(angle_2);
    
    delay(15);
  }
