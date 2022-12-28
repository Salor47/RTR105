//rakstits caur Visual studio code
#include <stdio.h>
int main() {
for(;;)
{
    int a;
    int b;
    printf("decimals skaitlis: ");
    scanf("%d", &a);               //ievada dec skaitli
    for (int i = 0; a >= 2; i++) { //dec skaitli dala ar 2
        a = a/2;
        printf("Dalisanas process = %d\n" ,a);
        //vajag izdomat ka, lai nolasa atlikumu un pec ta attiecigi ievieto 1 vai 0
        //893 / 2 = 446, atlikums  (ka lai atlikumu saglaba???)
        //446 / 2 = 223, atlikums  ??
        //223 / 2 = 111, atlikums  ??
        // utt lidz nonak lidz 1 un apstajas
            if(a < 2){
              //beidz dalit, izprinte sadalito
              printf("Binars rezultats = %d\n" ,a);
            }
    }
    printf("Esmu izgajis ara no for loopa, a = %d\n",a); //debug kods
    printf("Esmu izgajis ara no for loopa, b = %d\n",b); //prieks debug

}
return 0;
}
