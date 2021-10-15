#include<stdio.h> 

main() /*funcion principal*/
{
	int ptotal;
	int preEntrada;
	int preSalida;
	int totalCaja;
	int gananciaPz;
	int totalCajas;
	int gananciaCaja;

	printf("Ingresa el numero de piezas que adquiriste ");scanf("%i",&ptotal);
	printf("Ingresa el numero de piezas en una caja ");scanf("%i",&totalCaja);
	printf("Ingresa precio de entrada: ");scanf("%i",&preEntrada);
	printf("Ingresa precio al publico: ");scanf("%i",&preSalida);
	
	gananciaPz=preSalida-preEntrada;
	totalCajas=ptotal/totalCaja;
	gananciaCaja=gananciaPz*totalCaja;
	
	

	
	printf("Ganancia por pieza: %i \n",gananciaPz);
	printf("Numero de cajas totales: %i \n",totalCajas);
	printf("ganancia por caja: %i \n",gananciaCaja);
	
	return 0;


}
