/*
faktoriālis
5! = 1*2*3*4*5
5! = (5-0) * (5-1) * (5-2) * (5-3) * (5-4)
5! = 4! * 5
4! = 5! / 5
0! = 1 


*/
#include<stdio.h>

int main()
{
long i,n,fact;
printf("Ievadi vienu veselu skaitli: ");
scanf("%ld",&n);

i = 0;
fact = 1;
//for(i=0, fact=1;;)
for(i=1; i<=n; ++i)
{
fact = fact * i;
printf("%3ld! = %15ld\n",i,fact);
}


return 0;
}
