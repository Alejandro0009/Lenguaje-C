#include<stdio.h> 

main() /*funcion principal*/
{
	int pagoDia;
	int pagoSemana;
	int pagoQuincena;
	int pagoMes;
	int diasMes;
	
	

	printf("cuanto le vas a pagar por dia \n");scanf("%i",&pagoDia);
	printf(" ¿cuantos dias tiene el mes? \n");scanf("%i",&diasMes);
	

	pagoSemana= pagoDia * 7;
	pagoQuincena=pagoDia * 15;
	
	printf("Pago por dia: %i \n",pagoDia);
	printf("Pago por Semana: %i \n",pagoSemana);
	printf("Pago por Quincena:  %i \n",pagoQuincena);

	if(diasMes>=28){
			pagoMes=pagoDia * diasMes;
				printf("Pago por mes: %i \n",pagoMes);

	}else{
		printf("La cantidad de dias por mes, NO es posible \n intenta nuevamente");

	}
	
	
	return 0;



}
