int count = 5;
int number = 0;

void setup(){
  while (count < 14)
  {
    number++;
    while (count < 10)
    {
      number--;
      count++;
    }
    count++;
  }
  number++;
}
void loop() {}
