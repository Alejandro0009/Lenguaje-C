#include<stdio.h>
#include<conio.h>S

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
	char con[20];
	int conta=1;
	int conta1=1;
	
	
	printf("Hola soy Alex tu asesor personal, vamos a calcular los salarios de tus colaboradores");
	printf("\n");
	printf("%cQue turno vamos a ingresar primero?: ",168);
	printf("\n");
	printf("Ingresa 1 para el sueldo de los de la TARDE");
	printf("\n");
	printf("Ingresa 2 para el sueldo de los de la MAÑAMA");
	printf("\n");
	scanf("%i",&a);
	printf("\n");
	printf("%ccuantos sueldos vas a ingresar por cada turno?: ",168);
	printf("\n");
	scanf("%i",&s);
	printf("\n");
	
	if(a==2){//MAÑANA
	for (j=0; j<s; j++){
	printf("%i",conta++);
	printf(".Ingrese valor del sueldo:");
	scanf("%f",&sueldosM[j]);
	suma1+=sueldosM[j];}
	
	printf("\n");
	printf("vamos a continuar con el sueldo de la TARDE");gets(con);
	printf("\n");
	/*scanf("%s",&con);
	printf("\n");*/
	
	if(con){//TARDE
	for (j=0;j<s;j++)
	{
	printf("%i",conta1++);
	printf(".Ingrese valor del sueldo:");
	scanf("%f",&sueldosT[j]);
	suma2+=sueldosT[j];}
	}
	
	}
	
	
	
	
	if(a==1){//TARDE
	for (f=0; f<s; f++)
	{
	printf("%i",conta++);
	printf(".Ingrese valor del sueldo:");
	scanf("%f",&sueldosT[f]);
	suma2+=sueldosT[f];}
	
	printf("vamos a continuar con el sueldo de la MAÑANA");
	printf("\n");
	/*scanf("%i",&a);
	printf("\n");*/
	
	if(con){//MAÑANA
	for (f=0; f<s; f++){
	printf("%i",conta1++);
	printf(".Ingrese valor del sueldo:");
	scanf("%f",&sueldosM[f]);
	suma1+=sueldosM[f];}
	
	}
	
	}
	
	
	printf("\n");
	printf("El sueldo de los de la MAÑANA");
	printf("\n");
	printf("%f",suma1);
	printf("\n");
	printf("\n");
	printf("El sueldo de los de la TARDE");
	printf("\n");
	printf("%f",suma2);
	printf("\n");
	
	
	getch();
	return 0;
}
