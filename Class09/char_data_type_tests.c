
#include<stdio.h>
#include<unistd.h> 

int main() 
{
char a = 10; // divas darbības:
             // mainīgā deklarēšāna - char a - vietas piesķiršana atmiņā
             // kur (vietai ir adrese) un cik daudz? (atbilstoši datu tipam)
             // 1 byte: šī baita saturs nav zināms (0001 1110 vai 1100 1111 utt.)
             // vērtības piešķiršana - a = 10;
             //                            10 - vesela tipa konstante
             //                            int - vesela tipa konstantēm
             //                            double - reālā tipa konstantēm
             // 1 byte: 10->binārais 10   tātad 0000 1010
             // char a = 10; - mainīgā definēšana
             // mainīgā nosaukums (vārds) nevar saturēt atstarpes
             //                           nevar sākties ar skaitli
             // varbūt ar mnemonisko nosaukumu, piemēram (cilindra_tilpums)

printf("a mainīgā vērtība (kā simbols): %c\n",a); //ar \n pārcēļ kursoru uz jaunu rindu, a ir 10, kas ascii tabulā ir pārcelšana jaunā rindā. ieliec jebkādu citu skaitli un tas parādīsies a vietā.
printf("a mainīgā vērtība (kā decimāls skaitlis): %d\n",a);
printf("a mainīgā vērtība (kā heksidecimals skaitlis): %#x\n",a);
printf("a mainīgā vērtība (kā oktāls skaitlis): %#o\n",a);
//sleep(1);
//a = 20;
//printf("a mainīgā vērtība (kā oktāls skaitlis): %#o\n",a);

char b;
printf("\nb mainīgā vērtība -\"- (kā simbols): %o\n",b);
sleep(1);
printf("b mainīgā vērtība -\"- (kā decimāls skaitlis): %d\n",b);
sleep(1);
printf("b mainīgā vērtība -\"- (kā heksadecimāls skaitlis): %#x\n",b);
sleep(1);
printf("b mainīgā vērtība -\"- (kā oktāls skaitlis): %#o\n",b);
sleep(1);

b = 250;
// 250 vietā redzam -6 - kāpēc?                                                  7654 3210
// 250 (dec) = 128(2^7) + 64(2^6) + 32(2^5) + 16(2^4) + 8(2^3) + 2(2^1) -> (bin) 1111 1010
// char -> signed char => vecākais bits zīmei                                  (1)111 1010
//                                                                           ^ -> 000 0101
//                                                                          +1 -> 000 0001
//                                                                                --------
//                                                                                000 0110
//                                                         0000 0110 (bin) -> 6 (dec)
//                                                              rezultātā ir -6
printf("\nb mainīgā vērtība -\"- (kā simbols): %o\n",b);
sleep(1);
printf("b mainīgā vērtība -\"- (kā decimāls skaitlis): %d\n",b);
sleep(1);
printf("b mainīgā vērtība -\"- (kā heksadecimāls skaitlis): %#x\n",b);
sleep(1);
printf("b mainīgā vērtība -\"- (kā oktāls skaitlis): %#o\n",b);
sleep(1);







return 0;
}
