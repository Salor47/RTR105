//S0, S1, S2, S3 -> S
//a0, a1, a2, a3 -> a
//jaatrod rekurences reizinataju

#include<stdio.h>
#include<math.h>

void main(){
      double x, y;
      long double a = 0.L;
      long double S = 0.L;
      int i = 0;
      int k = 1;
//jaieliek darbība, kur lietotajs ievada argumentu un to ieliek x vietā
////////////////////////////////////////////////
      printf("\n");
      printf("Ievadi skaitli: ");
      scanf("%lf",&x);
////////////////////////////////////////////////




 ////////////////////// //parāda a0 , S0// ///////////////////////
  a = (pow(-x, 2) / ((2*k) * (2*k-1)*4));
  S = a;
  printf("a0 = %.5Lf\n", a);
  printf("S0 = %.5Lf\n", S);
///  a = 0; // uzliek vērtību uz 0, lai pildot tālākās darbības netiek pieskaitīts iepriekšējais rezultāts
//  S = 0;


 ///////////////////// //parāda a499, S499// /////////////////////
  while(k<499)
  {
  k++;
  a = (pow(-x, 2) / ((2*k) * (2*k-1)*4)); 
  S = S + a;
//  printf("%f\t%8.10Lf\t%8.10Lf\n", x, a, S);  //%.5f cipars norāda, cik cipari aiz komata
  }

  printf("a499 = %.5Lf\n", a);
  printf("S499 = %.5Lf\n", S);
//  a = 0; // uzliek vērtību uz 0, lai pildot tālākās darbības netiek pieskaitīts iepriekšējais rezultāts
//  S = 0;
  k = 1;



 ////////////////////// //parāda a500, S500// //////////////////
  while(k<500)
  {
  k++;
  a = (pow(-x, 2) / ((2*k) * (2*k-1)*4)); 
  S = S + a;
//  printf("%f\t%8.10Lf\t%8.10Lf\n", x, a, S);  //%.5f cipars norāda, cik cipari aiz komata
  }

  printf("a500 = %.5Lf\n", a);
  printf("S500 = %.5Lf\n", S);
//  a = 0; // uzliek vērtību uz 0, lai pildot tālākās darbības netiek pieskaitīts iepriekšējais rezultāts
//  S = 0;

  y = cos(x/2);
  printf("cos(%lf/2) = %lf \n",x,y);

  //cos(x/2) caur summu: ...ieliec x/2 summas vertibu
  printf("                                             \n ");
  printf("              500                       \n ");
  printf("             _ _ _                      \n ");
  printf("             \\            k     2k     \n ");
  printf("              \\       (-1)  * x        \n ");
  printf("y = cos(x/2)   >       _____________    \n ");
  printf("              /                  2k     \n ");
  printf("             /_ _ _    (2k)! * 2        \n ");
  printf("              k = 0                     \n ");
  printf("                                               \n ");
  printf("                                               \n ");
  printf("                                   2           \n ");
  printf("                                 -x            \n ");
  printf(" Rekurences reizinātājs:    _____________      \n ");
  printf("                                               \n ");
  printf("                            (2k) * (2k-1)*4    \n ");
  printf("                                               \n ");
;

}
