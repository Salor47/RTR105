// operācijas: operands_1 opeŗacija operands_2                  |operācija operands|
//             (datu tips)          (datu tips)
//                             ||
//                             \/
//                            operācijas rezultāts
//                           (datu tips)
// parasti operācijas rezultāta datu tips ir "lielākais datu tips, kas tiek izmantots"
// matemātikas: +, -, *, /, %, ++, --
//             int 11= 5;, i2 = 6, ir:
//             ir = i1 + i2;
//             ir = ir + 10;
//             ir += 10; //tas pats, kas ir + 10 = ir
//             ir++; //ir = ir + 1; vai ir += 1;
// attiecību: <, <=, >=, >, ==, !=
// loģiskās: &&, ||, !
// loģiskās pa bitiem: &, |, ^, ~
// bitu: >>, <<
//
// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte: secības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>

#include <stdio.h>

int main()
{
char c1 = 'A', c2 = 0x45;
int i1 = 2000, i2 = 01056;
float f1 = 2.3, f2 = -770.896;
double d1 = -5.6e4, d2 = 456.8e-3;

printf("%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
printf("%d (%ld bytes) * %d (%ld bytes)",c2,sizeof(c2),i2,sizeof(i2));
printf(" = %d (%ld bytes)\n",c1*i1,sizeof(c1*i1));
printf(" = %d (%ld bytes)\n",c2*i2,sizeof(c2*i2));
//% nedrīkst lietot reāliem skaitļiem (C valodā...);
//printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1sizeof(f1),'%',f2,sizeof(f2));
//printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)",f1sizeof(f1),f2,sizeof(f2));

//printf("\n%.1f (%ld bytes)\n\n", f1>f2,sizeof(f1>f2));
//pirntf("\n%.1f (%ld bytes) \n\n",f1%f2,sizeof(f1%f2));

//78 % 65 -> 13
//999 % 1000 -> 999

return 0;
}

