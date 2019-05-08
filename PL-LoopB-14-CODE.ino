int counter = 0;
int number = 0;

for (int i = 1; i < 5; i++)
{
  counter ++;
  for (int i = 1; i <= 7; i++)
  {
    number = number + 2;
    counter--;
  }
}
