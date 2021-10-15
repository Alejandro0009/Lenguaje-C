#include<stdio.h>
#include<conio.h>



int main(){
	
	char dia[30]; 
	char mes[30]; 
	char empleado[30]; 
	int a;
	int costokilo;
	int preciopublico;
	int kilosvendidos;
	int n,i;
	int suma=0;
	int inversion=0;
	int ventatotal=0;
	int ganancia;
	//int contador=0;
	
	printf("Excelente dia, vamos a realizar la factura del dia de hoy:");
	printf("\n");
	printf("vamos a ingresar la fecha:");
	printf("\n");
	printf("ingresa el dia");	printf("\n");
	scanf("%s",&dia);
	printf("\n");
	printf("ingresa el mes");	printf("\n");
	scanf("%s",&mes);
	printf("\n");
	printf("ingresa el año");
	printf("\n");
	scanf("%i",&a);
	printf("\n");
	printf("ingresa tu nombre: ");
	printf("\n");
	scanf("%i",&empleado);
	printf("genial, ahora ingresa el costo por kilo cuando lo adquiere tu compañia: ");
	printf("\n");
	scanf("%i",&costokilo);
	printf("\n");
	printf("genial, ahora ingresa el precio que lo vendes al publico: ");
	printf("\n");
	scanf("%i",&preciopublico);
	printf("\n");
	
	printf("Cuantas ventas realizate este dia: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		printf("cuanto kilos vendiste:");
		scanf("%i",&kilosvendidos);
		suma=suma+kilosvendidos;
		printf("\n");
		
		
	}
	inversion=suma*costokilo;
	ventatotal=suma*preciopublico;

	
		
	printf("La fecha:");
	printf("\n");
	printf("Dia: %s",dia);
	printf("\n");
	printf("Mes: %s",mes);
	printf("\n");
	printf("Año: %i",a);
	printf("\n");
	printf("Numeros de kilos que vendiste el dia de hoy: %i",suma);
	printf("\n");
	printf("tu comnpañia invirtio el dia de hoy: %i",inversion);
	printf("\n");
	printf("Tu venta total del dia es, (recuerda que este monto debe estar en caja al final del dia): %i",ventatotal);
	printf("\n");
	ganancia=ventatotal-inversion;
	printf("Quitando tu inversion, tu ganancia del dia es: %i",ganancia);
	printf("\n");
	

	if(ganancia>=5000){
		printf("FELICIDADES PERRO VAS BIEN PRONTO TENDRAS TU AUDI","tu ganancia de hoy es:");
		printf("\n");
		printf("estas ganando: ");
		printf(" %i",ganancia);
	
	}else{
		printf("ECHALE GANAS PERRO","tu ganancia de hoy es:");
		printf("\n");
		printf("solo estas ganando: ");
		printf(" %i",ganancia);}


	getch();
	return 0;

		
	
	

	

}
