#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
//klavyeden girilen sayýnýn karekökünü alan program	

double kok;
int sayi;

printf("Kökünü almak istediðiniz sayýyý giriniz :");
scanf("%d",&sayi);

kok=sqrt(sayi);
 //kök alma komutu
printf("kok : %.4f\n",kok); // %.4f diyerek virgülden sonraki
	
printf("------------------------------------------------------\n");



int x,y,sonuc;

printf("Üs alacaðýmýz sayýyý giriniz.");
scanf("%d",&x);

printf("Üs olan sayýyý giriniz.");
scanf("%d",&y);

sonuc=pow(x,y);
printf("Sonuc:  %d",sonuc);


printf("------------------------------------------------------\n");

//sayýlarý alta veya üste yuvarlama uygulamasý

 // double --> %lf

double say,result1,result2;

printf("Deðer giriniz :");
 scanf("%lf",&say);
 
result1= floor(say); //alta yuvarlama komutu
printf("%.lf\n",result1);

result2=ceil(say); //sayýyý üste yuvarlayan komut
printf("%.lf"\n,result2); // %.f virgülden sonra sayý alma demektir

printf("------------------------------------------------------\n");


//mutlak deger ve logaritma bulma

double sayi,sonuc,sonuc2;
printf("Sayiyi giriniz :");
scanf("%lf",&sayi);

sonuc=fabs(sayi); // floating absolut mutlak deðer
printf("Sonuc : %lf\n",sonuc);

sonuc2=log(sayi);
printf("Sonuc2 : %lf",sonuc2);

printf("------------------------------------------------------\n");


//sin ve cos

double derece,sonucSin,sonucCos;

printf("Derece giriniz :");
scanf("%lf",&derece);

sonucSin=sin(derece); //sinüsü alma
printf("%lf\n",sonucSin);

sonucCos=cos(derece); //cosinüsü alma
printf("%lf\n",sonucCos);














	
	
	return 0;
}
