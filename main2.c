#include <stdio.h>
#include <stdlib.h>


int main() {

//3 basamkl� rakamlar� farkl� ka� tane say� oldu�unu ulan program	

int a,b,c;
int indis=0;
for(a=1;a<=9;a++){
	for(b=0;b<=9;b++){
		for(c=0;c<=9;c++){	
		
		if(a!=b && a!=c && b!=c){
			indis++;
		}
		}
	}
}	
printf("%d",indis);	
	
printf("-----------------------------------------\n");

//Klavyeden girilen say�n�n tam b�lenlerini bulan program
int i,say;
printf("Sayi giriniz :");
scanf("%d",&say);

for(i=1;i<=say;i++){
	if(say%i==0){
		printf("  %d \n",i);
		
	}
}

printf("-----------------------------------------\n");

//her saat ba�� kendini 2ye b�lerek �o�alan bakteriden 24saat sonra ka� tane olur

int i,total;
total=1;
for(i=1;i<=24;i++){
	total*=2;
}
printf("%d",total);

printf("-------------------------------------------\n");

//klavyeden 4 tane say� al�p toplamlar�n� yazd�ran program

int i,say,toplam;
toplam=0;
for(i=1;i<5;i++)
{
printf("%d.Say� giriniz : ",i);
scanf("%d",&say);
toplam+=say;
}
printf("Say�lar�n toplam� :  %d\n",toplam);	



printf("------------------------------------------\n");

//klavyeden0 girilene kadar girilen de�erleri toplayan program
int x,tplm;
tplm=0;

while(x!=0){
	
printf("Say� giriniz  ");
scanf("%d",&x);


tplm+=x;
}
printf("Say�lar�n toplam� : %d");

printf("------------------------------------------\n");

int saat;

printf("Kac saat kald�n�z : ");
scanf("%d",&saat);

if(saat>=0 && saat<=4){
	printf("10 TL �demeniz gerekmektedir .");
}
if(saat>=5 && saat<=8 ){
	printf("12 TL �demeniz gerekmektedir.");
}
if(saat>=9 && saat<=12){
	printf("15TL �demeniz gerekmektedir.");
}
if(saat>=13 ){
	printf("20TL �demeniz gerekmektedir.");
}









	return 0;
}
