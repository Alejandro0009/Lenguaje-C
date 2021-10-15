#include<stdio.h>
#include<conio.h>
int main(){	
	int cant1,cant2,cant3,suma;
	float peso;
	cant1=0;
	cant2=0;
	cant3=0;
	
	do{
		printf("ingrese el peso de la pieza (0 para finalizar):");
		scanf("%f",&peso);
		
		 if(peso>10.2){
		cant1++;
	}else{
		if(peso>=9.8){
			cant2++;
		}
		else {
			if(peso>0){
				cant3++;
			}
		}
	}
	}
	while(peso!=0);
	suma=cant1+cant2+cant3;
	printf("piezas aptas:");
	printf("%i",cant2);
	printf("\n");
	printf("piezas con un peso superior a 10.2:");
	printf("%i",cant1);
	printf("\n");
	printf("piezas con un peso inferior a 9.8:");
	printf("%i",cant3);
		
	getch();
	return 0;
}
