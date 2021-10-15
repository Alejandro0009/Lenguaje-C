/*ingresa 3 notas de un alumno si el promedio es mayor o igual a 7
mostrar un msj "aprobado" o de lo contrario "reporbado"*/

#include<stdio.h>
#include<conio.h>

float main(){
	float nota1;
	float nota2;
	float nota3;
	float suma;
	float promedio;
	
	
	printf("Ingrese la primer nota");
	scanf("%f",&nota1);
	printf("Ingrese la segunda nota");
	scanf("%f",&nota2);
	printf("Ingrese la tercer nota");
	scanf("%f",&nota3);
	
	suma=nota1+nota2+nota3;
	promedio=suma/3;
	
	if (promedio>=7){
	
		printf("su promedio es mayor a 7 \n ");
		printf("Felicidades\n ");
		printf("%f",promedio);
		printf(" \n aprobado \n");
		
	
	}else{
		
		printf("su promedio es menor a 7 \n ");
		printf("No dejes de intentar\n ");
		printf("%f",promedio);
		printf(" \n reprobado \n");

	
	
	}
	
	getch();
	return 0;
	}
