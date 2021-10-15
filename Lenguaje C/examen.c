#include<stdio.h>
#include<conio.h>




int main(){
	int c;
	int suma; 
	int articulo;
	int contador=1;
	int i;
	int ganancia;
	
	

	
	
	
	printf("Bienvenidos a OXXO");
	printf("\n");
	printf("Cuantos articulos se desea capturar:  ");
	scanf("%i",&c);
	printf("\n");
	
	
	for(i=1;i<=c;i++){
		
		printf("% i",contador++);
		printf(".precio del articulo:  ");
		scanf("%i",&articulo);
		suma=suma+articulo;
		printf("\n");
		
		
	}
	
	printf("Total a pagar: %i",suma);
	printf("  pesos");
	printf("\n");
	
	if(suma>=1000){
		printf("FELICIDADES TE GANASTE UN CHOCORROL");
		printf("\n");
	
	
	}if(suma>=100&&suma<=500){
		printf("llevate unos chicles de regalo PERRO");
		printf("\n");
	}
	
	getch();
	return 0;

}



		
