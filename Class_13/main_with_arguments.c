#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
printf("You have entered %d arguments:\n",argc);
printf("sizeof(atoi(...)) -> %ld bytes\n\n",sizeof(atoi('A')));
for(int i = 0; i < argc; ++i)
   {
   printf("%s\n",argv[i]);
   if(i>0)
//  atoi(argv[i])*atoi(argv[i]); // "65" * "65" - nevar reizināt ciparus. Cipars ir simbols, skaitlis ir skaitlis.
   printf("%d * %d = %d\n",atoi(argv[i]),atoi(argv[i]),atoi(argv[i])*atoi(argv[i]));
   //"65" -> 65 atoi pārtaisa ciparu pēdiņās par skaitļiem.
   //765 + 237 =...  bet "765" tā ir ciparu secība.
}

return 0;
}
