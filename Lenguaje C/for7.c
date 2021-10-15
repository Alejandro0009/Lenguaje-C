#include<stdio.h>
#include<conio.h>

int main(){

	
	int f,valor,suma;
	suma=0;
	 
	for(f=1;f<=10;f++){
		
		printf("Ingrese un valor:");
		scanf("%i",&valor);
		
		if(f>5){
			suma=suma+valor;
		}
		
	
	}
	
	printf("La suma de los ultimos 5 valores es:");
	printf("%i",suma);

	getch();
	return 0;
	


}
