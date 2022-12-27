/*
Lietotajs ievada a
Lietotajs ievada b
Lietotajs ievada c
Lietotajs ievada precizitati darbibai
aprekinato x vertibu, kas atbilst f(x)=c vienādojumam, x starp a un b
aprēķināto f(x) vērtību šim x
nepieciešamo iterāciju skaitu, lai aprēķinātu šo x vērtību ar uzdoto precizitāti
*/

#include<stdio.h>
#include<math.h>

float modified_sin(float x, float A) 
     {
      return sin(x)-A;
     }

void main()
     {
       float a, x, delta_x, b, y, A;
       a = 0;
       b = 2*M_PI;
      
       printf("Cienijamais lietotaj, ludzu, ievadi A vertibu sekojosam vienadojumam: sin(x) = A \n");
       scanf("%f",&A);
       x = a;
       delta_x = 0.1;
       printf("\tx\ty\n");
       
       while(x<b)
         {
           printf("%10.1f%10.1f\n",x, modified_sin(x, A));
           x = delta_x;
         }
     }
