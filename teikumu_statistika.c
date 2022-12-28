#include <stdio.h>
int bs;

int main () {
   char str1[1000];

   printf("Ievadi teikumu: ");
   scanf("%[^\n]s",str1);   

   printf("Ievaditais teikums: %s, bs \n", str1);
       for (int bs; str1[1000] < 1000; bs++)
         {
             printf("burtu skaits: %d \n", bs);
           
         }
   
   return(0);
}
