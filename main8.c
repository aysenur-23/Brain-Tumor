#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	

//	printf("Katar uzunlu�u: %d",strlen("Merhaba dunya")); // uzunlu�u �l�er
	
	char kelime[100];
	printf("Kelimeyi girin : ");
	scanf("%s",&kelime);
	printf("Katar uzunlugu: %d",strlen(kelime)); // klavyeden gelen kelimeler i�in sadece ilk kelimenin uzunlu�unu al�r
	


char kaynak[30]="Merhaba Elazig";
char kopya[30]="";

strcpy(kopya,kaynak); //1.si nereye kopyalabak 2. nerden kopyalanacak
printf("%s",kopya);


char nereden[30]="Merhaba Ankara";
char nereye[30]="";

  strncpy(nereden,nereye,14); 
 //ka� karakter kopyalanaca��n� da giriyoruz
 printf("%s\n",nereye);

printf("--------------------------------------------------\n");


char kitapad[30],yazar[30],kitapyazar[60];

printf("Kitap ad� ve yazar�n� giriniz :");
scanf("%s%s",kitapad,yazar);

strcat(kitapyazar,kitapad); //birle�tiriyoruz
strcat(kitapyazar," ");
strcat(kitapyazar,yazar);
printf("\n\n");
printf("%s",kitapyazar);


printf("------------------------------------------------------\n");












	
	return 0;
}
