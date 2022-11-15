#include<stdio.h>

char array[20];
char a;

int main()
{
  scanf("ievadiet skaitli masivam: %s", a);
  for (int b = 0; b < 20; b++)
    {
        a++;
        array[a];
    }

//izsauc masivu un panem no prasita masiva pozicijas skaitli
  scanf("\n ievadi skaitli kuru velies uzzinat no masiva: %s", a);
  printf("array[a]");
}
