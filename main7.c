#include <stdio.h>
#include <stdlib.h>

int main() {
/*

char bilgi[40];
printf("Bilgiyi giriniz:  ");
gets(bilgi); // uzun bilgiyi al�r
printf("\n");
puts(bilgi); //uzun bilgiyi ekrana basar

printf("---------------------------------------------------\n")
*/

char kitap[40];
printf("Ad: ");

scanf("%s",&kitap);

printf("%s",kitap); //bilginin tamam�n� yazd�r�yoruz

printf("\n");

printf("%25s",kitap); //ilk 25 karakteri kullanarak yazd�r�r,eksik karakter i�in bosluk b�rak�r

printf("\n");

printf("%18s",kitap);

printf("\n");

printf("%20.5s",kitap); //20karakterlik alanda "kitap"�n 5 karakterini yazd�rs�n

printf("\n");

printf("%-20s",kitap); //40karakterlik yer ay�r�lm��t� ba�ta, bu komut 20ye d���rd�




	return 0;
}
