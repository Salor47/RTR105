/*
Uzrakstiet kodu dialogam ar lietotāju. Lietotājam ir jāievada viens naturāls skaitlis (izmantojiet char datu tipu). 
Izmantojot bitu operācijas - << un >>, sagatavojiet un attēlojiet ievadītam skaitlim atbilstošo bināro kodu. 
Risinājuma kodu augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi.
*/

#include <stdio.h>

int main(){
int a[100],b,c;
 
    printf("Ievadi decimalo skaitli: ");
    scanf("%d",&b);
      for(c = 0; b > 0; ++c)
        {
           a[c]= b % 2;
           b = b / 2;
        }

    printf("\nBinarais rezultats = ");
      for(c = c-1; c >= 0; --c)
        {
           printf("%d",a[c]);
        }

    return 0;
}
