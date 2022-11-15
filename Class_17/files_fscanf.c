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

while( (ch=fgetc(fp)) != E0F )
  putc(ch);
  //printf("%c",ch); tas pats, kas putc(ch);


fclose(fp);

     return 0;
}
