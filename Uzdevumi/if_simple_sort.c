/*
PU3/PT3: if + simple sort

Pabeigts 05.12.2022 20:22

Uzrakstiet kodu dialogam ar lietotāju. Lietotājam ir jāievada trīs decimāli skaitļi (izmantojiet int datu tipu). 
Lietotājam ir jāizvēlas skaitļu kārtošanas secība - augošā vai dilstošā. 
Izmantojot nosacījuma operatoru, sakārtojiet skaitļus atbilstoši lietotāja izvēlei un attēlojiet sakārtotu skaitļu secību uz ekrāna. 
Risinājuma kodu augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi. 

*/


/*
Ieliec kastē skaitļus, sašķiro tos pēc lietotāja izvēlētās metodes.
Atdod atpakaļ kasti un ar printf parādi tās saturu.
Printf neizmanto garumzīmes, lai nemet errorus.
*/

#include <stdio.h>

int main() 
   {
     int x, y, z, a, b, i, j = 0;
     
     printf("Ievadi pirmo skaitli: ");
     scanf("%d", &x);

     printf("Ievadi otro skaitli: ");
     scanf("%d", &y);

     printf("Ievadi treso skaitli: ");
     scanf("%d", &z);
    
     printf("\nIzvelies kartosanas secibu ievadot atbilstoso skaitli \n ");
     printf("[1 = augosa seciba | 2 = dilstosa seciba] \n");
     printf("Secibas skaitlis: ");
     scanf("%d", &a);

     int kaste[3] = {x, y, z}; //kaste = array; svarīgi salikt datus kastē tikai pēc tam, kad lietotājs tos ir ievadījis, citādāk metīs random ciparus.
     if(a == 1) //augosa seciba
         {
            for (i = 0; i < 3; ++i) //trīs reizes atkārto, jo ir 3 skaitļi
               {
                 for (j = i + 1; j < 3; ++j) //ja i = 3    tad    j = 4
                    {
                      if (kaste[i] > kaste[j]) //ja kaste[3] > kaste [4]
                        {
                          b =  kaste[i];
                          kaste[i] = kaste[j];
                          kaste[j] = b;
                        }
                    }
               }
        printf("\nSkaitli sakartoti augosa seciba: \n"); 
        for (i = 0; i < 3; ++i)
            printf("%d\n", kaste[i]);
         }

     if(a == 2) //dilstosa seciba
         {
            for (i = 0; i < 3; ++i) //trīs reizes atkārto, jo ir 3 skaitļi
               {
                 for (j = i + 1; j < 3; ++j) //ja i = 3    tad    j = 4
                    {
                      if (kaste[i] < kaste[j]) //ja kaste[3] < kaste [4]
                        {
                          b =  kaste[i];
                          kaste[i] = kaste[j];
                          kaste[j] = b;
                        }
                    }
               }
        printf("\nSkaitli sakartoti dilstosa seciba: \n"); 
        for (i = 0; i < 3; ++i)
            printf("%d\n", kaste[i]);
         }
         
     return 0;
   }  
