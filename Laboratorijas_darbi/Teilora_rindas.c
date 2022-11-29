//S0, S1, S2, S3 -> S
//a0, a1, a2, a3 -> a
//jaatrod rekurences reizinataju

#include<stdio.h>
#include<math.h>

void main(){
      double x, y, a, S;
      int k=0;
//jaieliek darbība, kur lietotajs ievada argumentu un to ieliek x vietā
////////////////////////////////////////////////
      printf("Ievadi skaitli: ");
      scanf("%lf \n",&x);
////////////////////////////////////////////////




 ////////////////////// //parāda a0 , S0// ///////////////////////
//  a = pow(-1,k)*pow(x, 2*k+1) / (1.);
//  S = a;
//  printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
  a = ((-1)^(1-1) * x^2*(1-1)) / (2*(1-1))! * 2^2*2(1-1));
  S = a; 
  printf("a0 = %.2f\n", a);
  printf("S0 = %.2f\n", S);
  a = 0; // uzliek vērtību uz 0, lai pildot tālākās darbības netiek pieskaitīts iepriekšējais rezultāts
  S = 0;
  
  
 ///////////////////// //parāda a499, S499// /////////////////////
  while(k<499)
  {
  k++;
  a = ((-1)^k * x^2*k) / (2*k)! * 2^2*k); 
  S = S + a;
//  printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);  //%.5f cipars norāda, cik cipari aiz komata
  }
//  return S;
  printf("a499 = %.2f\n", a);
  printf("S499 = %.2f\n", S);
  a = 0; // uzliek vērtību uz 0, lai pildot tālākās darbības netiek pieskaitīts iepriekšējais rezultāts
  S = 0;
  
  
  
 ////////////////////// //parāda a500, S500// //////////////////
  while(k<500)
  {
  k++;
  a = ((-1)^k * x^2*k) / (2*k)! * 2^2*k); 
  S = S + a;
  //printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);  //%.5f cipars norāda, cik cipari aiz komata
  }
//  return S;
  printf("a500 = %.2f\n", a);
  printf("S500 = %.2f\n", S);
  a = 0; // uzliek vērtību uz 0, lai pildot tālākās darbības netiek pieskaitīts iepriekšējais rezultāts
  S = 0;
  
  
  
  
  
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
  printf("                                             \n ");
  printf("                                             \n ");
  printf("                                             \n ");
  printf("                             (-1)  * 1       \n ");
  printf(" Rekurences reizinātājs:    _____________    \n ");
  printf("                                       2k    \n ");
  printf("                             0!  * 2      \n ");
  printf("                                             \n ");
 


  y = cos(x/2);
  printf("%lf=cos(%lf/2) \n",y,x);
    
}
