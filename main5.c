#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	// 8kg el bagajý ve 15kg bagaj fazlasýndan ücret alma
	int el,normal,fazla,ucret;
	printf("El bagajýnýzýn kilosunu giriniz :");
	scanf("%d",&el);
	
	printf("Bagajýnýzýn kilosunu giriniz :");
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
//klavyeden girilen sayýlarýn arasýndaki sayýlarý(sayýlarýn kendileri dahil) toplayan program

int say1,say2,i,toplam;

printf("Büyük sayý giriniz :");
scanf("%d",&say1);

printf("Kücük sayý giriniz :");
scanf("%d",&say2);	
	
for(say2;say2>=say1;say2++){
toplam=toplam+say2;
	
}	
	
printf("%d",toplam);
		
	
	
	
	
	
	
	
	
	return 0;
}
