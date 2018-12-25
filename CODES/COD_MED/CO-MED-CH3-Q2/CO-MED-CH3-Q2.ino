const int sensorPin = A0;
    int button = 0;
    
    void setup() 
    {
     Serial.begin(9600);
     pinMode(6,INPUT);
    }
    
    void loop() 
    {
     int sensorVal = analogRead(sensorPin);
     button = digitalRead(6);
     float voltage = (sensorVal/1024.0)*5;
     
     if (button == 1)
      {  
       Serial.___(____);
       //convert the voltage to temperature in degreees
       float temperature = (voltage - .5)*100;
       Serial.___(___);
      }
      else 
      {
       Serial.___(___);
       //convert the voltage to temperature in degreees
       float temperature = (voltage - .5)*100;
       Serial.___(___);
      }
     delay(100);
    }
