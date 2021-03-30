#include <stdio.h>
#include <stdlib.h>


int main() {

//3 basamklý rakamlarý farklý kaç tane sayý olduðunu ulan program	

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

//Klavyeden girilen sayýnýn tam bölenlerini bulan program
int i,say;
printf("Sayi giriniz :");
scanf("%d",&say);

for(i=1;i<=say;i++){
	if(say%i==0){
		printf("  %d \n",i);
		
	}
}

printf("-----------------------------------------\n");

//her saat baþý kendini 2ye bölerek çoðalan bakteriden 24saat sonra kaç tane olur

int i,total;
total=1;
for(i=1;i<=24;i++){
	total*=2;
}
printf("%d",total);

printf("-------------------------------------------\n");

//klavyeden 4 tane sayý alýp toplamlarýný yazdýran program

int i,say,toplam;
toplam=0;
for(i=1;i<5;i++)
{
printf("%d.Sayý giriniz : ",i);
scanf("%d",&say);
toplam+=say;
}
printf("Sayýlarýn toplamý :  %d\n",toplam);	



printf("------------------------------------------\n");

//klavyeden0 girilene kadar girilen deðerleri toplayan program
int x,tplm;
tplm=0;

while(x!=0){
	
printf("Sayý giriniz  ");
scanf("%d",&x);


tplm+=x;
}
printf("Sayýlarýn toplamý : %d");

printf("------------------------------------------\n");

int saat;

printf("Kac saat kaldýnýz : ");
scanf("%d",&saat);

if(saat>=0 && saat<=4){
	printf("10 TL ödemeniz gerekmektedir .");
}
if(saat>=5 && saat<=8 ){
	printf("12 TL ödemeniz gerekmektedir.");
}
if(saat>=9 && saat<=12){
	printf("15TL ödemeniz gerekmektedir.");
}
if(saat>=13 ){
	printf("20TL ödemeniz gerekmektedir.");
}









	return 0;
}
