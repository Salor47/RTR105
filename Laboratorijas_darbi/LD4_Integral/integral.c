/*
 dialogu ar lietotāju a vērtības iegūšanai
 dialogu ar lietotāju b vērtības iegūšanai
 dialogu ar lietotāju precizitātes vērtības iegūšanai
 laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot taisnstūru metodi)
 laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot trapeču metodi) h = (b-a) / n
 laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot Simpsona metodi)
*/

#include<stdio.h>
#include<math.h>

int main() {
   float a, b, h, x, integr1=0., integr2;
   int i, j=2;
   printf("Ievadi a vērtību = ");
   scanf("%e", &a);
   printf("\nIevadi b vērtību = ");
   scanf("%e", &b);
   printf("\nIevadi darbības precizitāti = ");
   scanf("%e", &x);

  integr2=(b-a)*(sin(a/2)+sin(b/2))/i;
  while(fabs(integr2-integr1)>x){
      i*=2;
      h=(b-a)/i;
      integr1=integr2;
      integr2=0.;
        for(j=0;j<i;j++)integr2+=h*sin((a+(j+0,5)*h)/2); 
  }
    printf("Integrala vertiba: %.2f\n", integr2);
    return 0;
}
