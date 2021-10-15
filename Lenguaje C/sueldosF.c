#include<stdio.h>
#include<conio.h>

int main(){
	int f;
	int sueldosT[4];
	int sueldosM[4];
	int a;
	int s;
	float suma;
	float suma2;
	
	printf("Ingresaremos los sueldos de los empleados");
	printf("\n");
	printf("%cQue turno vamos a ingresar primero?: ",168);
	printf("\n");
	printf("Ingresa 1 para el sueldo de los de la mañana");
	printf("\n");
	printf("Ingresa 2 para el sueldo de los de la mañana");
	printf("\n");
	scanf("%i",&a);
	printf("\n");
	printf("%ccuantos sueldos vas a ingresar?: ",168);
	printf("\n");
	scanf("%i",&s);
	
	
			if(a==2){
				for (f=0; f<s; f++)
			{
						printf("Ingrese valor del sueldo:");
						scanf("%f",&sueldosT[f]);
						suma=suma+sueldosM[f];
							printf("\n");
							printf("El monto total de los sueldos de la mañana es: ");
							printf("\n");
							printf("%f",suma);
							}

						}
						if(a==1){
				for (f=0; f<s; f++)
			{
						printf("Ingrese valor del sueldo:");
						scanf("%f",&sueldosM[f]);
						suma2=suma2+sueldosM[f];
							printf("\n");
							printf("El monto total de los sueldos de la tarde es: ");
							printf("\n");
							printf("%f",suma2);
							}

}

	printf("%cQue turno vamos a ingresar primero?: ",168);
	printf("\n");
	printf("Ingresa 1 para el sueldo de los de la mañana");
	printf("\n");
	printf("Ingresa 2 para el sueldo de los de la mañana");
	printf("\n");
	scanf("%i",&a);
	printf("\n");
	
	
	if(a==2){
				for (f=0; f<s; f++)
			{
						printf("Ingrese valor del sueldo:");
						scanf("%f",&sueldosT[f]);
						suma=suma+sueldosT[f];
							printf("\n");
							printf("El monto total de los sueldos de la mañana es: ");
							printf("\n");
							printf("%f",suma);
							}

						}
			if(a==1){
				for (f=0; f<s; f++)
			{
						printf("Ingrese valor del sueldo:");
						scanf("%f",&sueldosM[f]);
						suma2=suma2+sueldosM[f];
						printf("\n");
						printf("El monto total de los sueldos de la tarde es: ");
						printf("\n");
						printf("%f",suma2);
							}

}


	





}

