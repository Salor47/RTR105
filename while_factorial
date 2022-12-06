/*
Uzrakstiet kodu dialogam ar lietotāju. 
Lietotājam ir jāievada viens decimāls skaitlis, lietotājam ir jāizvēlas datu tips - char, int vai long long. 
Aprēķiniet un paziņojiet lietotājam viņa ievadīta skaitļa faktoriāla vērtība vai paziņojiet, ka ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams.
Aprēķinam izmantojiet while ciklu. 
Aprēķins ir jāpārtrauc uzreiz, tik ko tas kļūst nepareizs (lai nav jātērē laiks). 

! Nedrīkst izmantot datu tipu robežu konstantes.
! Nedrīkst salīdzināt faktoriāla vērtību ar nulli
! Nedrīkst pārbaudīt faktoriāla vērtības zīmi
! Nedrīkst izmantot datu tipu savādāku nekā lietotājs ir izvēlējies.

*/

#include<stdio.h>
int main() {
  int a, b, i = 0;
  char e = 1;
  int f = 1;
  char c = 0;
  long long d = 1;
  
  printf("Ludzu ievadi vienu decimalu skaitli: ");
  scanf("%d", &a);

  printf("\nIzvelies datu tipu | 1 = char | 2 = int | 3 = long long | => ");
  scanf("%d", &b);

  if(b == 1) //char
    {
      c = a;
       for(i = 1; i <= c; ++i)
         {
            e=e*i;
         }
  printf("Faktorials ar char no %d ir %d \n", c, e);
   //   printf("faktorials ar char datu tipu un vertibu %c = ", c);
    }

  if(b == 2) //int
    {
      c = a;
       for(i = 1; i <= c; ++i)
         {
            f=f*i;
         }
  printf("Faktorials ar int datu tipu no %d ir %d \n", c, f);
    }
   
  if(b == 3) //long long
    {
      c = a;
       for(i = 1; i <= c; ++i)
         {
            d=d*i;
         }
  printf("Faktorials ar long long datu tipu no %d ir %lld \n", c, d);
    }


return 0;
}
