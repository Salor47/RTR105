// operācijas: operands_1 opeŗacija operands_2
//             (datu tips)           (datu tips)
//                             ||
//                             \/
//                            operācijas rezultāts
//                           (datu tips)
// parasti operācijas rezultāta datu tips ir "lielākais datu tips, kas tiek izmantots"
// matemātikas: +, -, *, /, %
// loģiskās: &&, ||
// loģiskās pa bitiem: &, |, ^, !
// bitu: >>, <<
//
// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte: secības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>

#include <stdio.h>

int main()
{
char c = 'A';
int i = 2000;
float f = 2.3;
double d = -5.6e4

printf("%d (%ld bytes) * %d (%ld bytes)",c,sizeof(c),i,sizeof(i));
printf(" = %d (%d bytes)\n",c*i,sizeof(c*i));

return 0;
}

