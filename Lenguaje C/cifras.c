/*
al cargar un numero positivo e indicar 
numero de cifras 

*/
#include<stdio.h>
#include<conio.h>

int main(){
	int valor1;

	
	printf("Ingrese un valor");
	scanf("%i",&valor1);
	
	
	
	if (valor1>=1&&valor1<10){
		
		printf("el  numero ingresado tiene una cifra \n ");
		printf("%i",valor1);
	
	

	}if (valor1>=10&&valor1<100){
		
		printf("el  numero ingresado tiene dos cifra \n ");
		printf("%i",valor1);
	
	

	}if (valor1>=100&&valor1<1000){
		
		printf("el  numero ingresado tiene tres cifra \n ");
		printf("%i",valor1);
	
	

	}if (valor1>=1000&&valor1<10000){
		
		printf("el  numero ingresado tiene cuatro cifra \n ");
		printf("%i",valor1);
	
	

	}if (valor1>=10000){
		
		printf("el  numero ingresado tiene 5 cifras o mas  \n ");
		printf("%i",valor1);
	
	

	}
	
	
	getch();
	return 0;
	}
