#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int A[2][2]={10,12,15,18};
	int B[2][2]={5,6,7,8};
	int i,j;
	int total[i][j];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	total [i][j]= A[i][j] + B[i][j];	
	printf("  %d  ",total[i][j]);		
		}
		printf("\n");
	}
printf("-----------------------------------------\n");	
	//Matrislerde �arpma i�lemi
	int k,l,n,total[k][n],satir,esit,sutun;
	int m1[k][l];
	int m2[l][n];
	
	printf("Birinci matrisin sutun, 2. matrisin satir say�s�n� giriniz : ");
	scanf("%d",&esit);
	
	printf("Birinci matrisin satir : ");
	scanf("%d",&satir);
	
	printf("2. matrisin sutun say�s�n� giriniz : ");
	scanf("%d",&sutun);
	
	for(k=0;k<satir;k++){
		for(n=0;n<sutun;n++){
		total[k][n]= m1[k][l]*m2[l][n];
	}	
	
	}
        for(k=0;k<satir;k++){
		for(n=0;n<sutun;n++){	
	
	printf("%d  ",total[k][n]);
}
printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
