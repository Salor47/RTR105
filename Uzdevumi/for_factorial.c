/*
Uzrakstiet kodu dialogam ar lietotāju. 
Lietotājam ir jāievada viens decimāls skaitlis, lietotājam ir jāizvēlas datu tips - char, int vai long long. 
Aprēķiniet un paziņojiet lietotājam viņa ievadīta skaitļa faktoriāla vērtība vai paziņojiet, ka ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams.
Aprēķinam izmantojiet for ciklu. 
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
  long long d = 1;
  
  printf("Ludzu ievadi vienu decimalu skaitli: ");
  scanf("%d", &a);

  printf("\nIzvelies datu tipu | 1 = char | 2 = int | 3 = long long | => ");
  scanf("%d", &b);

  if(b == 1 && a <= 5) //char
    {
       for(i = 1; i <= a; ++i)
         {
            e=e*i;
         }
  printf("Faktorials ar char no %d ir %d \n", a, e);
   //   printf("faktorials ar char datu tipu un vertibu %c = ", c);
    }
   if(b == 1 && a > 5) //char
    {
      printf("Ir sasniegts char data tipa maksimums!\nLudzu ievadiet skaitli, kas ir a <= 5");
    }


  if(b == 2 && a <= 12) //int
    {
       for(i = 1; i <= a; ++i)
         {
            f=f*i;
         }
  printf("Faktorials ar int datu tipu no %d ir %d \n", a, f);
    }
  if(b == 2 && a > 12) //int
    {
      printf("Ir sasniegts int data tipa maksimums!\nLudzu ievadiet skaitli, kas ir a <= 12");
    }


   
  if(b == 3 && a <= 20) //long long
    {
       for(i = 1; i <= a; ++i)
         {
            d=d*i;    
         }
  printf("Faktorials ar long long datu tipu no %d ir %lld \n", a, d);
    }
  if(b == 3 && a > 20) //long long
    {
      printf("Ir sasniegts long long data tipa maksimums!\nLudzu ievadiet skaitli, kas ir a <= 20");
    }
    

return 0;
}
