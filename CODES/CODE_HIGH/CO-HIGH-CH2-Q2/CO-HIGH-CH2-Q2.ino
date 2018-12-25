void setup() 
  {
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(7, OUTPUT); 
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
  }
  
  void loop() 
  {
    digitalWrite(2, HIGH );
    delay(___);  //All the blank delays are the same.
    digitalWrite(3,___);
    delay(250);
    digitalWrite(2,___);
    delay(   );
    digitalWrite(3, LOW );
    delay(250);
    digitalWrite(5, HIGH );
    delay(   );
    digitalWrite(7,    );
    delay(250);
    digitalWrite(5,   );
    delay(  );
    digitalWrite(7,  LOW );
    delay(250);
    digitalWrite(10, LOW );
    delay(  );
    digitalWrite(11, HIGH);
    delay(250);
    digitalWrite(10, LOW );
    delay(0);
    digitalWrite(11, LOW );
    delay(250);     
  }
