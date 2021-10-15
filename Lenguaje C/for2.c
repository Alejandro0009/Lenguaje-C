#include<stdio.h>
#include<conio.h>

int main (){
	
	int suma,f,valor,promedio;
	suma=0; 
	
	for(f=1; f<=3; f++)
	
	{
		printf("ingrese el valor:");
		scanf("%i",&valor);
		suma=suma+valor;
	}
	printf("La suma es: ");
	printf("%i",suma);
	printf("\n");
	promedio=suma/3;
	printf("El promedio es:");
	printf("%i",promedio);
	getch();
	return 0;
	
	//Alejandro Valencia Mendoza. 


}
