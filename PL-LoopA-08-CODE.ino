    
int count = 0;
int number = 5;

void setup(){
  while (count < 10)
  {
    number--;
    count++;
    while (count < 6)
    {
      number++;
      count++;
    }
  }
  number++;
}
void loop() {}
