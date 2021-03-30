#include <stdio.h>
#include <stdlib.h>

int main() {
/*

char bilgi[40];
printf("Bilgiyi giriniz:  ");
gets(bilgi); // uzun bilgiyi alýr
printf("\n");
puts(bilgi); //uzun bilgiyi ekrana basar

printf("---------------------------------------------------\n")
*/

char kitap[40];
printf("Ad: ");

scanf("%s",&kitap);

printf("%s",kitap); //bilginin tamamýný yazdýrýyoruz

printf("\n");

printf("%25s",kitap); //ilk 25 karakteri kullanarak yazdýrýr,eksik karakter için bosluk býrakýr

printf("\n");

printf("%18s",kitap);

printf("\n");

printf("%20.5s",kitap); //20karakterlik alanda "kitap"ýn 5 karakterini yazdýrsýn

printf("\n");

printf("%-20s",kitap); //40karakterlik yer ayýrýlmýþtý baþta, bu komut 20ye düþürdü




	return 0;
}
