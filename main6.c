#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
//klavyeden girilen say�n�n karek�k�n� alan program	

double kok;
int sayi;

printf("K�k�n� almak istedi�iniz say�y� giriniz :");
scanf("%d",&sayi);

kok=sqrt(sayi);
 //k�k alma komutu
printf("kok : %.4f\n",kok); // %.4f diyerek virg�lden sonraki
	
printf("------------------------------------------------------\n");



int x,y,sonuc;

printf("�s alaca��m�z say�y� giriniz.");
scanf("%d",&x);

printf("�s olan say�y� giriniz.");
scanf("%d",&y);

sonuc=pow(x,y);
printf("Sonuc:  %d",sonuc);


printf("------------------------------------------------------\n");

//say�lar� alta veya �ste yuvarlama uygulamas�

 // double --> %lf

double say,result1,result2;

printf("De�er giriniz :");
 scanf("%lf",&say);
 
result1= floor(say); //alta yuvarlama komutu
printf("%.lf\n",result1);

result2=ceil(say); //say�y� �ste yuvarlayan komut
printf("%.lf"\n,result2); // %.f virg�lden sonra say� alma demektir

printf("------------------------------------------------------\n");


//mutlak deger ve logaritma bulma

double sayi,sonuc,sonuc2;
printf("Sayiyi giriniz :");
scanf("%lf",&sayi);

sonuc=fabs(sayi); // floating absolut mutlak de�er
printf("Sonuc : %lf\n",sonuc);

sonuc2=log(sayi);
printf("Sonuc2 : %lf",sonuc2);

printf("------------------------------------------------------\n");


//sin ve cos

double derece,sonucSin,sonucCos;

printf("Derece giriniz :");
scanf("%lf",&derece);

sonucSin=sin(derece); //sin�s� alma
printf("%lf\n",sonucSin);

sonucCos=cos(derece); //cosin�s� alma
printf("%lf\n",sonucCos);














	
	
	return 0;
}
