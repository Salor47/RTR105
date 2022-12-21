////// REIZINASANA //////
#include <user_defined_function.h>
#include <stdio.h>

void reizinasana(int x, int y, int z){ //lietotajs var ievadit argumentus x, y;  z ir rezultats
  z = x * y;
  fprintf(stderr, "z reizinasanas rezultats = %d\n", z);
  //nevajag return, tikai argumentus
}
