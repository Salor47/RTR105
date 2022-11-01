
#include<stdio.h>
char dialogs(); // funkcijas deklarēšana
char dialogs_i(int i_dialogs_arg);
/* funckijas definēšana (var būt uzreiz definēšanas bez deklrēšanas;
                         definēšana var būt ievietota pēc main apraksta;
                         deklarēšanai vai definēšanai ir jābūt pirms funkcijas main
*/
void test1(int a, int b, int c); //
void test2(int a, double b); // datu tips jāpievieno katram datu tipam


char dialogs()
{
char c_dialogs_local;
printf("Ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c_dialogs_local);
printf("Ir ievadīts skaitlis(izdruka no dialogs funkcijas): %d\n",c_dialogs_local);
return c_dialogs_local;
}



char dialogs_i(int i_dialogs_arg)
{
char c_dialogs_local;
printf("\nFunkcija dialogs_i tiek izpildīta %d. reizi:\n",i_dialogs_arg);
printf("Ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c_dialogs_local);
printf("Ir ievadīts skaitlis(izdruka no dialogs funkcijas): %d\n",c_dialogs_local);
return c_dialogs_local;
}

int main()
{
char c_main_local;
c_main_local = 10;
/*
printf("Ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c);
printf("Ir ievadīts skaitlis: %d\n",c);



printf("Ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c);
printf("Ir ievadīts skaitlis: %d\n",c);
*/

dialogs();
int i_main = 1;
dialogs_i(i_main);

return 0;
}
