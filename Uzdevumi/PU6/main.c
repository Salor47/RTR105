////// MAIN //////
#include <user_defined_function.h>
#include <stdio.h>

int main(void){
  summa(void); //bez argumentiem bez return "summa.c"

  int atnemsana2;
  atnemsana2 = atnemsana();
  printf("Atnemsanas funkcijas vertiba = %d \n", atnemsana2); //bez argumentiem ar return "atnemsana.c"

  int x = 2, y = 6, z = 0;
  reizinasana(x, y, z); //ar argumentiem bez return "reizinasana.c"

  int k = 10, l = 2, j = 0;
  j = dalisana(k, l);
  printf("Dalisanas funkcijas vertiba = %d \n", j); //ar argumentiem ar return "dalisana.c"

  return 0;
}
