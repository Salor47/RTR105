/* LD3 Derivative

dialogu ar lietotāju a vērtības iegūšanai +
dialogu ar lietotāju b vērtības iegūšanai +
dialogu ar lietotāju precizitātes vērtības iegūšanai +

f(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā)
a un b ir definīcijas apgabals un šīs vērtības ieliec f(x) formula ieksa. rezltatu saglaba ka x vai c?
rezultata vertibu ievieto faila.

f’(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot atvasinājuma analītisko formulu)

f’(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot skaitlisko atvasinājumu - diferencēšana un priekšu)

f”(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot atvasinājuma analītisko formulu)

f”(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot skaitlisko atvasinājumu - diferencēšana un priekšu
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
   float a, b, c, d, e, f, g, x, delta_x;
   //a un b ir definicijas apgabals
   
   //Izveido derivative.dat failu, kur saglabās aprēķinātās vērtības
   FILE *fptr = fopen("derivative.dat", "w");
   if(fptr == NULL)
    {
      printf("fptr == NULL!");
      exit(1);
    }

   printf("Ievadi a vērtību = ");
   scanf("%e", &a);
   printf("\nIevadi b vērtību = ");
   scanf("%e", &b);
   printf("\nIevadi darbības precizitāti = ");
   scanf("%e", &delta_x);
   fprintf(fptr,"\n\ta = %2.3f b = %2.3f delta_x = %2.3f\n\n", a, b, delta_x);
   fprintf(fptr,"|  x  | f(x) |       f'(x)      |      f'(x)      |      f''(x)      |     f''(x)      | \n"); 
   fprintf(fptr,"|     |      |analītiskā formula|finite difference|analītiskā formula|finite difference| \n");
   
   x = a;
    while (x<b){ 
        c = exp(x);        // f(x)
        d = exp(x);        // f'(x) analītiskā formula  (e^x)'= e^x
        e = (exp (x+delta_x)-exp (x))/delta_x; // f'(x) finite difference  
        f = exp(x);        // f''(x) analītiskā formula (e^x)''= (e^x)'= e^x
        g = exp(x+2 * delta_x) - 2*exp(x + delta_x) + exp(x) / delta_x * delta_x; // f''(x) finite difference
        fprintf(fptr, "|%3.2f | %3.2f | %3.2f             | %3.2f            | %3.2f             | %3.2f            | \n", x, c, d, e, f, g);
        x += delta_x;//x = x + delta—x; //katra cikla galā pieskaitam x klāt delta_x vērtību, lai x iet uz augšu.
      }
    
    fclose(fptr);
}
