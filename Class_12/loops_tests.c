/*
// cikla operatori
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

 while(izteiksme);
 while(izteiksme) 
;
while(izteiksme){;;;}//pildīsim kamēr izteiksme būs patiesa
while(izteiksme)
{
;
;
}
  aiz while() iekavām esošo darbība (vai darbības) tiks izpildītas tikmēr,
  kamēr iekavās () izteiksmes rezultāts ir "true"
  "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
  "false vai "aboslūtā nulle" - visi biti ar stāvokli 0

*/

#include<stdio.h>
/*
int main ()
{
int a = 10;
while(a>=0) //kamēr a >=0 lielāks vai vienāds ar nulli, tikmēr izpilda darbības
{ 
  printf("a: %d\n",a);
  --a; // a = a -1; a -= 1;
}
//sākumā a ir 10
// 1. a>=10 - 0000 0000     0000 0000      0000 0000     0000 0001 ("true")
// 2. printf -> 10
// 3. a samazinās par 1 -> 9
// 4. a (9) >= 0 - 0000 0000   0000  0000    0000 0000    0000 0001 ("true")
// 5. printf -> 9
// 6. a samazinās par 1 -> 8
// ...
// i. a (0) >= 0 - 0000 0000   0000  0000    0000 0000    0000 0001 ("true")
// i+1. a (
// i+2. a (
*/
int main ()
{
int a;
for (a=10; a>=0; --a)
{
printf("a: %d\n", a);
printf("es darbojos \n");
}




printf("a (pēc cikla): %d\n",a);
return 0;
}

