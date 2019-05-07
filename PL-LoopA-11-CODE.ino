int count = 14;
int number = -2;

void setup(){
  while (count > 7)
  {
    number++;
    count--;
    while (count > 10)
    {
      number++;
      count--;
    }
  }
  number--;
}
void loop() {}
