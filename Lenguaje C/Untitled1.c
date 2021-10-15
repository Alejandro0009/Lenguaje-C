/*
juan necesita un programa que le diga que cuando meta un valor o 
un numero a este le salga una leyenda cuando es positivo y otra leyenda 
cuando el valor es negativo o en su defecto nulo o cero.

*/
#include<stdio.h>
#include<conio.h>

float main(){
	float valor1;

	
	printf("Ingrese un valor");
	scanf("%f",&valor1);
	
	
	
	if (valor1>=1){
		
		printf("El valor ingresado es positivo \n ");
		printf("%f",valor1);
	
	

	}if (valor1<=-1){
		
		printf("El valor ingresado es negativo \n ");
		printf("%f",valor1);
	
		
	
	}
	
	if (valor1==0) {
		
