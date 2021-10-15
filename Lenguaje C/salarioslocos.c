#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main(){
	int f;
	int j;
	float sueldosT[20];
	float sueldosM[20];
	int a;
	int s;
	int z;
	float suma1=0;
	float suma2=0;
	char continuar[20];
	
	
	printf("Ingresaremos los sueldos de los empleados");
	printf("\n");
	printf("%cQue turno vamos a ingresar primero?: ",168);
	printf("\n");
	printf("Ingresa 1 para el sueldo de los de la TARDE");
	printf("\n");
	printf("Ingresa 2 para el sueldo de los de la MAÑAMA");
	printf("\n");
	scanf("%i",&a);
	printf("\n");
	printf("%ccuantos sueldos vas a ingresar?: ",168);
	printf("\n");
	scanf("%i",&s);
	
	if(a==2){//MAÑANA
	for (j=0; j<s; j++){
	printf("Ingrese valor del sueldo:");
	scanf("%f",&sueldosM[j]);
	suma1+=sueldosM[j];}
	
	printf("Ingresa la 1 para el sueldo de los de la TARDE");
	printf("\n");
	scanf("%i",&z);
	printf("\n");
	
	if(z==1){//TARDE
	for (j=0;j<s;j++)
	{
	printf("Ingrese valor del sueldo:");
	scanf("%f",&sueldosT[j]);
	suma2+=sueldosT[j];}
	}
	
	}
	
	
	
	
	if(a==1){//TARDE
	for (f=0; f<s; f++)
	{
	printf("Ingrese valor del sueldo:");
	scanf("%f",&sueldosT[f]);
	suma2+=sueldosT[f];}
	
	printf("Ingresa 2 para el sueldo de los de la MAÑAMA");
	printf("\n");
	scanf("%i",&a);
	printf("\n");
	
	if(a==2){//MAÑANA
	for (f=0; f<s; f++){
	printf("Ingrese valor del sueldo:");
	scanf("%f",&sueldosM[f]);
	suma1+=sueldosM[f];}
	
	}
	
	}
	
	
	
	printf("El sueldo de los de la MAÑANA");
	printf("\n");
	printf("%f",suma1);
	printf("\n");
	printf("El sueldo de los de la TARDE");
	printf("\n");
	printf("%f",suma2);
	printf("\n");
	
	
	getch();
	return 0;
}
