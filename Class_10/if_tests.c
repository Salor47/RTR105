#include<stdio.h>
#include<unistd.h>

int main ()
{
if(1);    //iekš var būt apaļa 0 vai nē

int a;
printf("Enter first code: ");
scanf("%d", &a);
if(a == 678)
{
 sleep(1);
 printf("System Status: \"System active\".\n");
 sleep(1);
 printf("List: \n \"Transmitters\".\n");
 sleep(1);
 printf("  Other \n");
}

int b;
printf("Enter The second code to complete the list: ");
scanf("%d", &b);
if(b == 678)
{
 sleep(1);
 printf("1. \"TX_x01\".\n");
 sleep(1);
 printf("2. \"TX_x02\".\n");
 sleep(1);
}


return 0;
}
