//S0, S1, S2, S3 -> S
//a0, a1, a2, a3 -> a
//jaatrod rekurences reizinataju

#include<stdio.h>
#include<math.h>

void main(){
      double x, y, S;
      long double a = 0.L, R;
      //long double S = 0.L;
      int i = 0;
      int k = 0;
  //Lietotājs ievada argumentu un to ieliek x vietā
      printf("\n");
      printf("Lietotāj, lūdzu ievadiet skaitli: ");
      scanf("%lf",&x);

  ////////////////////// //parāda a0 , S0// ///////////////////////
  a = 1.L;
  S = a;
  printf("a0 = %.5Lf\n", a);
  printf("S0 = %.5f\n", S);
  k = 0;
  a = 1.L;
  S = a;


  ///////////////////// //parāda a499, S499// /////////////////////
  while(k<499)
  {
  k++;
  R = -pow(x, 2) / ((2*k) * (2*k-1)*4); // (-x)^2 = x^2 un -(x^2) = -x^2
  a = a * R;
  S = S + a;
//  printf("%f\t%8.10Lf\t%8.10Lf\n", x, a, S);  //debug koda daļa, %.5f cipars norāda, cik cipari aiz komata
  }
  printf("a499 = %.10Lf\n", a);
  printf("S499 = %.10f\n", S);

 
  ////////////////////// //parāda a500, S500// //////////////////
  k++;
  R = -pow(x, 2) / ((2*k) * (2*k-1)*4); 
  a = a * R;
  S = S + a;
  printf("a500 = %.10Lf\n", a);
  printf("S500 = %.10f\n", S);
  
  //Funkcijas vērtība
  y = cos(x/2);
  printf("cos(%lf/2) = %lf \n",x,y);

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

}
