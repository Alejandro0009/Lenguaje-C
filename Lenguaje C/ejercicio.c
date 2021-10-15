#include<stdio.h>
#include<conio.h>

int main()
{
	int e=0; 
	int va=0;
	int suma=0; 
	char nombre[20];
	char continua;
	
	printf("Bienvenido a la empresa Farmacia Similares");
	printf("\n"); 
	
	
	printf("Introduce tu nombre:  ");gets(nombre);
	printf("\n"); 
	printf("Ingrese su edad:   ");
	scanf(" %i",&e); 
	printf("\n"); 
	do {
	printf("Ingrese el valor del producto:");
	scanf("%i",&va);
	suma=suma+va;
	printf("\n Desea cargar otro valor \n (S para continuar) \n (T para realizar la suma de los productos): \n");
	scanf(" %c",&continua);
	} while(continua=='s'||continua=='S' );
	printf("La suma de todos los valores ingresados es:");
	printf("%i",suma);
	printf("\n"); 
	
	
	if(suma>=100){
		printf("%s",nombre);
		printf("\n"); 
		printf("El cliente puede pedir factura:");
		
	}


	
	
	/*printf("%i",e);
	printf("%s",nombre);*/
	






getch();
return 0;

}
