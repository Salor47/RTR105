/*
Lietotajs ievada teikumu
teikums tiek sadalits pa burtiem
katru burtu ieliek masiva
izmantojot masivu saskiro pēc
    1)  minimalo vertibu
    2)  maksimalo vertibu
    3)  videjo vertibu
    4)  medianas vertibu - Mediāna sadala visu datu kopu 2 daļās.=>>  50% zem |MEDIĀNA| 50% virs
    5)  modas vertibu -  vērtību, kura datu virknē atkārtojas visbiežāk
    6)  sakartotu simbolu rindu viena rinda un atbilstosus ASCII skaitlus nakamaja rinda,
        rindas kartosana aflabeta seciba - A, B, C... a, b,c 
Jāizveido datu histogramma, var izmantot gnuplot

//////////// IDEJAS /////////////
1) izveidot tabulu, kur katram burtam ir savs skaitlis (ASCII Tabulu vari pārkopēt). Tad pēc šiem skaitļiem varēš elementāri sagrupēt, kur lielākais skaitlis, kurš visbiežāk atkārtojas, utt.
Piemērs:
SVEIKI => 83, 86, 69, 73, 75, 73
Ievieto skaitļus Masīvā [n]
Salīdzina mazāko vērtību
...
bet tad pēc tam iegūtie skaitļi būs jāpārveido atpakaļ uz ASCII burtiem
Vai tiešām vēlies katram burtam rakstīt klāt 83 = S; 86 = V;... Nepieciešama optimizācija!

2)


*/



//////////// Definīcijas ////////////
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
   char kaste[500];
   int min = 0, max = 0, length, kaste1, sum = 0, count = 0, maxValue = 0, maxCount = 0, mode[500], frekvence[256] = {0}, modeCount = 0, i, j, k, n;
   float vid = 0, med = 0, moda = 0;
   printf("Lūdzu, Ievadiet tekstu: "); //Lietotājs ievada teikumu
   scanf("%[^\n]s", kaste); 
   length = strlen(kaste); // Nosaka Masīva garumu
   // printf("Masiva saturs kaste[n] = %c\n ", n);
  
//Sagatavo failu kurā tiks ievadītas vērtības priekš histrogrammas
   FILE *file;
   file = fopen("statistics.dat","w");
   if(file == NULL)
   {
      printf("Error opening file!");   
      return 0;             
   }
   
//////////// Sakārtota simbolu rinda ////////////
// Sakārto simbolus augošā secibā, vienā rindā
    for (i = 0; i < length - 1; ++i){
        for (n = 0; n < length - i-1; ++n){
            if (kaste[n] > kaste[n+1]){
                kaste1 = kaste[n];
                kaste[n] = kaste[n+1];
                kaste[n+1] = kaste1;
            }
        }
    }
// Noņem simbolus, kuri atkārtojās ?


// Iziet cauri masīvam un izprintē visu saturu simbolu formātā
    printf("\nSakārtotie ASCII simboli augošā secībā =   ");
    for (k=0; k < length; ++k){
        printf("%c ", kaste[k]);
        if (kaste[k] < 100) printf(" "); 
        if (kaste[k] >= 100) printf("  "); // Sakārto rindas, lai skaitļi un burti ir viens virs otra
   //   fprintf(file, "%c ", kaste[k]);
    }
        printf("\n");
   //   fprintf(file, "\n");
        
// Izprintē masīva saturu skaitļu formātā
    printf("Sakārtotie masiva skaitļi augošā secībā = ");
    for (k=0; k < length; ++k){
        printf("%d ", kaste[k]);
   //   fprintf(file, "%d ", kaste[k]);
        ++frekvence[kaste[k]];
    }
// Izprintē skaitļu biežumu statistics.dat failā
    for (i = 0; i < 256; i++){
        if (frekvence[i] > 0)
            fprintf(file, "%d %d\n", frekvence[i], i);
    }
    
//////////// Minimalā vertibā ////////////
min = kaste[0];
printf("\n\nMinimālā vērtība = %d\n",min); //Minimālā vērtība


//////////// Maksimālā vērtība ////////////
max = kaste [length-1];
printf("Maksimālā vērtība = %d\n",max); //Maksimala vērtība


//////////// Vidējā vērtība ////////////
for (k=0; k < length; ++k){
        sum += kaste[k];     // Saskaita visas masīva vērtības kopā
    }
    vid = sum/length;        // Summu sadala ar masīva garumu length
printf("Vidējā vertība = %4.2f\n",vid); //Vidējā vērtība, terminal nepatīk garais "ī" un nez kapēc tieši šeit met error.


//////////// Mediānas vērtība ////////////
// Sadala datu kopu divās daļās un uzrāda centrālo vērtību
    if (length%2 == 0) med = (kaste[length/2] + kaste[length/2-1]) / 2;
    else med = kaste[length/2];
    printf("Mediānas vērtība = %4.2f\n",med); //Mediānas vērtība


//////////// Modas vērtība ////////////  
// Vērtību, kas datu virknē atkārtojas visbiežāk
// Ja ir divas vai vairāk modas, vajadzētu izprintēt visas modas vērtības.
    for (i = 0; i < length; ++i)
      mode[i] = -1;
      for (i = 0; i < length; ++i){
        if (kaste[i] == kaste[i + 1])
            count++; // Ja masīva skaitlis == masīva nākamo skaitli, tad attīstīsies tālāk for cikls
            else{    
                if (count > maxCount){
                   maxCount = count; //maxCount = 1
                   modeCount = 0; 
                   mode[modeCount] = kaste[i]; //konkrēto skaitli no masīva ievieto mode masīvā, lai uzglabātu vairāk modu vērtību
                }
            else if (count == maxCount){
                modeCount++; // Pieskaita modu skaitu ja ir vairāk par vienu modu
                mode[modeCount] = kaste[i]; 
            }
            count = 1; // Lai cikla sākumā nav vecā count vērtība
        }
    }
    printf("Modas vērtība/s = "); 
    for (i = 0; i <= modeCount; i++) printf("%d ", mode[i]); // Tāpat kā ar skaitļu attēlošanu, ar for ciklu iziet cauri masīvam
}



/*
//////////// Miskaste ////////////
//Vecais Modas kods
    for (i = 0; i < length; ++i) {
      for (j = 0; j < length; ++j) {
         if (kaste[j] == kaste[i])
         ++count;
      }
      if (count > maxCount) {
         maxCount = count;
         maxValue = kaste[i];
      }
   }
// te jau ir gala vērtība priekš maxvalue, bet man vajag, lai parāda visas maxvalues nevis tikai vienu
*/
