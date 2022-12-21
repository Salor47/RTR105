/*
* Uzrakstiet kodus (moduļus) ar četrām dažādām lietotāju funkcijām.
* bez argumentiem un bez return, 
* ar argumentiem un bez return, 
* bez argumentiem un ar return, 
* ar argumentiem un ar return. 
* Risinājuma kodus (+ kods ar main, kurā šis sagatavotas funkcijas tiek izmantotas) augšupielādējiet GitHub vietnē 



Uztaisi main failu
Uztaisi UDF failu
4 atseviskus failus ar 4 dazadam funkcijam
tad katru failu izsauc uz main failu
*/


////// user_defined_function.h //////

#ifndef USER_DEFINED_FUNCTION_DOT_H //Butu jasakrit ar user_defined_function.h
#define USER_DEFINED_FUNCTION_DOT_H

void summa(void); //bez argumentiem bez return "summa.c"
int  atnemsana(); //bez argumentiem ar return "atnemsana.c"
void reizinasana(int x, int y, int z); //ar argumentiem bez return "reizinasana.c"
int  dalisana(int k, int l);           //ar argumentiem ar return "dalisana.c"

#endif


