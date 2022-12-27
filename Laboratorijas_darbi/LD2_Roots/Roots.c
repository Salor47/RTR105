/*
Lietotajs ievada a +
Lietotajs ievada b +
Lietotajs ievada c +
Lietotajs ievada precizitati darbibai +
aprekinato x vertibu, kas atbilst f(x)=c vienādojumam, x starp a un b
aprēķināto f(x) vērtību šim x
nepieciešamo iterāciju skaitu, lai aprēķinātu šo x vērtību ar uzdoto precizitāti

Githubā augšupielādēt savas funkcijas grafiku ar atzīmētu saknes punktu.
*/

#include<stdio.h>
#include<math.h>

int main ()
{
   float a, b, c, delta_x, x, fa, fb;
   int i = 0; //iterāciju skaits

   printf("Ievadi a vērtību = ");
   scanf("%e", &a);
   printf("\nIevadi b vērtību = ");
   scanf("%e", &b);
   printf("\nIevadi c vērtību = ");
   scanf("%e", &c);
   printf("\nIevadi darbības precizitāti = ");
   scanf("%e", &delta_x);

//////// APRĒĶINS ////////
//c = f(x + delta_x)*f(x-delta_x)     c < 0
// a = x + delta_x ?
// b = x - delta_x ?
//japarbauda formula patiesums vai ir pareizi
//jaizlabo while cikls un jaieliek aiz printf funkcija, citadak ir taisne. piemeram funkcija iekavās un tur bus tas kas aprēķina pēc formulas.
//c = (a + delta_x) * (a - delta_x); vecā ideja
  
  if(exp(a) * exp(b) < 0){
      printf("Ar ievadītajām a = %e un b = %e vērtībām, rezultātā sakņu nav", a, b);
      return 1;
  }

///////////// WHILE CIKLS /////////////////
  while((b - a) > delta_x){
    i++; //Iterāciju skaitīšana
    x = (a + b) / 2;
    if(exp(a) * exp(x) > 0) a = x;
    else b = x;
    printf("\nNr. %d. Iterācija, kur exp(%7.3f) = %7.3f\n", i, a, exp(a));
    printf("Funkcija x exp(%7.3f) = %7.3f \n", x, exp(x));
    printf("Funkcija b exp(%7.3f) = %7.3f \n", b, exp(b));
    printf("Funkcija c exp(%7.3f) = %7.3f \n", c, exp(c));
  }
    printf("Sakne atbilst x = %.3f, jo exp(x) = %.3f \n", x, exp(x));
    return 0;
}
