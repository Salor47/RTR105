/*
 dialogu ar lietotāju a vērtības iegūšanai
 dialogu ar lietotāju b vērtības iegūšanai
 dialogu ar lietotāju precizitātes vērtības iegūšanai
 laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot taisnstūru metodi)
 laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot trapeču metodi) h = (b-a) / n
 laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot Simpsona metodi)
*/

#include<stdio.h>
#include<math.h>

int main() {
   double a, b, p, x, width1, width2, integral1 = 0., integral2 = 1.L;
   int i, k, n = 1;
   printf("Ievadi a vērtību = ");
   scanf("%le", &a);
   printf("\nIevadi b vērtību = ");
   scanf("%le", &b);
   printf("\nIevadi darbības precizitāti = ");
   scanf("%le", &p);
   printf("Ievadits Definicijas apgabals [%3.2f ; %3.2f] ar precizitati %3.5f\n\n", a, b, p);

//skaits = (b-a) / p;     // 10 / 0.1 = 100, tātad 100 reizes ies cauri
//width = (b-a) / skaits; // platums = 0.1

///////////////////// Taisnsturu metode //////////////////
 integral2=(b-a)*(cos(a/2)+cos(b/2));	//(b-a)/2.*cos(a)+(b-a)/2.*cos(b);
	while (fabs(integral2-integral1)>p)
	{
		n*=2;
		width1=(b-a)/n;
		integral1=integral2;
		integral2=0.;
		for (k=0;k<n; k++)
			integral2+=width1*cos((a+(k+0.5)*width1)/2);
	}
  printf("Taisnstura metodes integrala vertiba ar Definicijas apgabalu [%3.2f ; %3.2f] = %.7f\n",a, b, integral2);
  n = 1;
  integral1 = 0; // Atgriež sākuma vērtības, lai jaunais aprēķins nesāktos ar vecajām vērtībām.
  integral2 = 1;

///////////////////// Trapeču metode /////////////////////
	integral2=(b-a)*(cos(a/2)+cos(b/2));   //(b-a)/2.*cos(a)+(b-a)/2.*cos(b);
	while (fabs(integral2-integral1)>p)    //Salīdzina integrālus ar precizitāti, citādāk salīdzinot ar soļiem būs nepareizs rezultāts.
	{
		n*=2; //Pagaidām atstāj 2. Tā ir tuvāks rezultāts Taisnsturu metodei.
		width1=(b-a)/n; //width ir izmaiņa starp x jeb delta x.
		integral1=integral2;
		integral2=0;
		width2=0;
		integral2=(width1/2)*(cos(a/2)+cos(b/2));
		for (k=1;a<=b-width2;k++)
		{
			width2=width1*k;
			integral2+=(width1/2)* 2 *cos((b-width2)/2);
		}

	}
  printf("Trapeces metodes integrala vertiba ar Definicijas apgabalu [%3.2f ; %3.2f] = %.7f\n",a, b, integral2);
  n = 1;
  integral1 = 0; // Atgriež sākuma vērtības, lai jaunais aprēķins nesāktos ar vecajām vērtībām.
  integral2 = 1;
	
//////////////////// Simpsona metode ////////////////////
//Vecā ideja no a līdz b cos(x/2)width ~ b-a/count (cos(a/2)/2 + summa no 1 līdz count-1 (cos(a+k*b-a/count))+ cos(b/2)/2)
    while (fabs(integral2-integral1)>p) //Sākumā integral1 = 0; integral2 = 1; 2>0.1 izpildās while cikls.
	{
		n*=2;
		width1=(b-a)/n; // 10 / 2 = 5
		width2=0;
		integral1=integral2;
		integral2=0;
		integral2=(width1/2)*(cos(a/2)+cos(b/2)); // 2.5 * (1 + 0,996) = 4,99
		for (k=1;a<=b-width2;k++) // 0 < 10
		{
			width2=width1*k; //5*2 = 10
			integral2+=(width1/3)*(2*pow(2,((k%2))))*cos((b-width2)/2);
		//	integral2+=(width1/3)* 2 *cos((b-width2)/2); //Škiet, ka ir tuvu, bet nav līdz galam. ievietojot 2, arī nav pareizi.
		//	integral2+=(cos(x/2) + 4 * cos((x + ((b-a)/n) / 2)/2) + cos(x + ((b-a)/n))) * ((b-a)/n) / 6; // galīgi nepareizi
		}
	}

   printf("Simpsona metodes integrala vertiba ar Definicijas apgabalu [%3.2f ; %3.2f] = %.7f\n",a, b, integral2);

}
/*  
///////////// Miskaste //////////////
//matemātikas darbības testi

//Kvadrātsakne
#include<stdio.h>
#include<math.h>

int main() {
   double a;
   printf("Ievadi a vērtību = ");
   scanf("%le", &a);
   a = sqrt(a);
   printf("a = %f", a);
}


for (i=0; i < count; ++i){
      x = a + i * width;
  TRintegr += (cos(x/2)+cos(x/2)) * width / 2; // 1.28879 ar preicizitāti 0,1 
  }
  
   integral2=(b-a)*(cos(a/2)+cos(b/2));	//(b-a)/2.*cos(a)+(b-a)/2.*cos(b);
	while (fabs(integral2-integral1)>p)
	{
		n*=2;
		width=(b-a)/n;
		integral1=integral2;
		integral2=0.;
		width = 0; // ja nestrādā izdzēs šo rindu
		for (k=1;a<=b-width; k++){
		    width= width*k;
			integral2+=(width/2)*2*cos((b-width)/2);
		}
	}
	
  printf("Trapeces metodes integrala vertiba ar Definicijas apgabalu [%3.2f ; %3.2f] = %.7f\n",a, b, TRintegr);

    
//////////////////// Simpsona metode ////////////////////
/*
no a līdz b cos(x/2)width ~ b-a/count (cos(a/2)/2 + summa no 1 līdz count-1 (cos(a+k*b-a/count))+ cos(b/2)/2)

*/
//printf("Simpsona metodes integrala vertiba ar Definicijas apgabalu [%3.2f ; %3.2f] = %.7f\n",a, b, Sintegr);

