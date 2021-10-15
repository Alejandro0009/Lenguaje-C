#include<stdio.h>
#include<conio.h>

main(){

	
	int cantidad,n,f,valor;
	cantidad=0;
	printf("¿cuantos valores ingresaras?");
	scanf("%i",&n);
	 
	for(f=1;f<=n;f++){
		
		printf("Ingrese el valor:");
		scanf("%i",&valor);
		
		if(valor>=1000){
			cantidad=cantidad+1;
		}
		
	
	}
	
	printf("La cantidad de valores ingresados mayores o iguales a 1000 son:");
	printf("%i",cantidad);

	getch();
	return 0;
	


}
