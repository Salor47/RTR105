#include<stdio.h>
#include<math.h>

int main()
{
 int a, i = 0;    //input
 long int b = 1;  //output
 printf("Ievadi skaitli Faktoriala aprekinasanai = ");
 scanf("%d", &a);
 
 for(i = 1; i <= a; ++i)
   {
    b=b*i;
   }
  printf("Faktorials no %d ir %ld \n", a, b);
 return 0;
}
