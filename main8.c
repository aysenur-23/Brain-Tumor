#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	

//	printf("Katar uzunluðu: %d",strlen("Merhaba dunya")); // uzunluðu ölçer
	
	char kelime[100];
	printf("Kelimeyi girin : ");
	scanf("%s",&kelime);
	printf("Katar uzunlugu: %d",strlen(kelime)); // klavyeden gelen kelimeler için sadece ilk kelimenin uzunluðunu alýr
	


char kaynak[30]="Merhaba Elazig";
char kopya[30]="";

strcpy(kopya,kaynak); //1.si nereye kopyalabak 2. nerden kopyalanacak
printf("%s",kopya);


char nereden[30]="Merhaba Ankara";
char nereye[30]="";

  strncpy(nereden,nereye,14); 
 //kaç karakter kopyalanacaðýný da giriyoruz
 printf("%s\n",nereye);

printf("--------------------------------------------------\n");


char kitapad[30],yazar[30],kitapyazar[60];

printf("Kitap adý ve yazarýný giriniz :");
scanf("%s%s",kitapad,yazar);

strcat(kitapyazar,kitapad); //birleþtiriyoruz
strcat(kitapyazar," ");
strcat(kitapyazar,yazar);
printf("\n\n");
printf("%s",kitapyazar);


printf("------------------------------------------------------\n");












	
	return 0;
}
