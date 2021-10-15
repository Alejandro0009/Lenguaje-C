/*realiza un programa que solicite la carga por teclado de dos numeros, si el primero es 
mayor al segundo informar su suma y resta es, en caso contrario informar la multiplicacion y
la divicion del primero respecto al segundo*/

#include<stdio.h>
#include<conio.h>

float main(){
	float numero1;
	float numero2;
	float suma;
	float resta;
	float div;
	float m;
	
	printf("Ingrese el primer numero");
	scanf("%f",&numero1);
	printf("Ingrese el segundo numero");
	scanf("%f",&numero2);
	

		suma=numero1+numero2;
		resta=numero1-numero2;
		div=numero1/numero2;
		m=numero1*numero2;
	
	if (numero1>numero2){
	
		printf("El valor ingresado en primer lugar es mayor \n ");
		printf("El valor de la suma es:\n ");
		printf("%f",suma);
		printf(" \n El valor de la resta  es: \n");
		printf("%f",resta);
	
	}else{

		printf("El valor ingresado en segundo lugar es mayor \n");
		printf("El valor de la division es: \n");
		printf("%f",div);
		printf("\n El valor de la multiplicacion es: \n ");
		printf("%f",m);
	
	
	}
	
	getch();
	return 0;
	}
