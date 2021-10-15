#include<conio.h>
#include<stdio.h>

main(){
	char producto[30];
	
	float valor=0,porcen=0;
	

	printf("Introduce el nombre del producto:");gets(producto);
	printf("\n");
	printf("Introduce un valor numerico:");scanf("%f",&valor);
	printf("\n");
	printf("Introduce un tanto por ciento:");scanf("%f",&porcen);
	printf("\n");
	printf("%s,Tiene un descuento de %.of",producto,((valor*porcen)/100));
	getch();
	

}
