#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	// 8kg el bagaj� ve 15kg bagaj fazlas�ndan �cret alma
	int el,normal,fazla,ucret;
	printf("El bagaj�n�z�n kilosunu giriniz :");
	scanf("%d",&el);
	
	printf("Bagaj�n�z�n kilosunu giriniz :");
	scanf("%d",&normal);

  fazla=el-8;
  if((fazla>0)){
  	ucret=fazla*4;
  }	
 
	fazla=normal-15;
	if(fazla>0){
	ucret+=fazla*5;	
	}
	printf("Odemeniz gereken tutar : %d ",ucret);
	
*/	
//klavyeden girilen say�lar�n aras�ndaki say�lar�(say�lar�n kendileri dahil) toplayan program

int say1,say2,i,toplam;

printf("B�y�k say� giriniz :");
scanf("%d",&say1);

printf("K�c�k say� giriniz :");
scanf("%d",&say2);	
	
for(say2;say2>=say1;say2++){
toplam=toplam+say2;
	
}	
	
printf("%d",toplam);
		
	
	
	
	
	
	
	
	
	return 0;
}
