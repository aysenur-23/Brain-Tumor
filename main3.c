#include <stdio.h>
#include <stdlib.h>

int main() {

//1'den 81'e kadar 4er artan sayýlarý toplayan program
int i,toplam;
for(i=1;i<=81;i+=4){
	toplam+=i;
}	
	printf("toplam : %d",toplam);
	
printf("--------------------------------------------------\n");	

int takim[10]={2,1,0,0,2,1,1,2,1,0};
int i,tplm=0;

for(i=0;i<10;i++){
if(takim[i]==2){
tplm+=3;	
}
else if(takim[i]==1){
tplm=tplm+0;
}
else if( takim[i] == 0){
tplm=tplm+1;
}
}
printf("Toplam puan : %d\n",tplm);
	
if(tplm>=12){
printf("10. haftanin sonunda kume dusmediniz.");
}else{
printf("10. haftanin sonunda kume dustunuz.");	
}

printf("--------------------------------------------------------\n");
	
	int i,j,taban;
	
	printf("Çizdirmek istediginiz ucgenin tabanýndaki yildiz sayisini giriniz ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++){
		for(j=1;j<=i;j++){
		printf("*");
	}
     printf("\n");
	}











	
	
	
	
	return 0;
}
