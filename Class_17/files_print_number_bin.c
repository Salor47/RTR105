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

  double d[] = {1.8963644, 8.895554, -6.7454155};
  printf(fp, "%f\n%f\n%f\n", d[0],d[1],d[2]);

  fwrite(fp, sizeof(d),sizeof(d)/sizeof(double),fp);
  rewind(fp);
  fread(d, sizeof(d),sizeof(d)/sizeof(double),fp);
  fclose(fp);
  
  printf("d[0] = %f, d[1] = %f, d[2] = %f(after scanf)\n",d[0], d[1], d[2]);

     return 0;
}
