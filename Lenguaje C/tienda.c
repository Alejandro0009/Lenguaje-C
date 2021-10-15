/*pedir dos valores de compra, sumar las cantidades si el monto es mayor a 200 hacer un descuento de %20
en caso contrario cobrar con normalidad*/

#include<stdio.h>
#include<conio.h>

float main(){
	float valor1;
	float valor2;
	float suma;
	float des;
	float valordes;
	
	
	printf("Ingresa el primer valor");
	scanf("%f",&valor1);
	printf("Ingresa el segundo valor");
	scanf("%f",&valor2);
	
	suma=valor1+valor2;
	des=suma*.20;
	valordes=suma-des;
	
	if (suma>200){
	
		printf("tu compra es mayor de $200 \n ");
		printf("tienes un descuento de %20\n ");
		printf("precio con descuento es: \n");
		printf("%f",valordes);
		printf("\n Gracias por su compra \n ");
		
		
	
	}else{
		printf("tu compra es menor a $200 \n ");
		printf("monto a pagar: \n ");
		printf("%f",suma);
		printf("\n Gracias por su compra \n ");

	
	
	
	}
	
	getch();
	return 0;
	}
	
