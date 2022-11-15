#include <stdio.h>

int main(void)
{
     FILE *fp;
     fp = fopen("./teksts.dat","wt"); 
               //kur (var norādīt) un ko (faila nosaukums)
               //kādam nolūkam

     if(fp == NULL)
       {
          printf("Failu nav izdevies atvērt. \n");
          return 100;
       }

fprintf(fp, "Izvads failā\n");
fprintf(fp, "Fails ir atvērts. shis ir otrais ieraksts failā\n");
double d = 1.8963644;
fprintf(fp,"d mainīgā vērtība: %.3f\n",d); //%.3f parada tikai 3 zimes aiz komata

fclose(fp);

     return 0;
}
