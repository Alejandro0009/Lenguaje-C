#include<stdio.h>
#include<conio.h>

void main(){
	int numero1;
	int numero2;
	
	printf("Ingrese el primer numero");
	scanf("%i",&numero1);
	printf("Ingrese el segundo numero");
	scanf("%i",&numero2);
	
	
	
	if (numero1>numero2){
		printf("El valor ingresado en primer lugar es mayor");
		printf("%i",&numero1);
	
	}else{
		printf("El valor ingresado en segundo lugar es mayor");
		printf("%i",&numero2);
	
	}
	
	getch();
	return 0;
	}
