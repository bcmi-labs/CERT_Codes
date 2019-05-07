int count = 0;
int number = 0;

void setup(){
  while (count < 15)
  {
    number--;
    count++;
    while (count < 10)
    {
      number++;
      count++;
    }
  }
}
void loop() {}
