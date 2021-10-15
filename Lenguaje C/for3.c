#include<stdio.h>
#include<conio.h>

int main (){
	
	int f,edad,suma1,suma2,suma3,pro1,pro2,pro3;
	suma1=0;
	suma2=0;
	suma3=0; 
	
	for(f=1; f<=5; f++)
	
	{
		printf("ingrese edad:");
		scanf("%i",&edad);
		suma1=suma1+edad;
	}
	pro1=suma1/5;
	printf("Promedio de edades del turno de la mañana");
	printf("%i",pro1);
	printf("\n");
	
	for(f=1; f<=6; f++)
	
	{
		printf("ingrese edad:");
		scanf("%i",&edad);
		suma2=suma2+edad;
	}
	
	pro2=suma2/6;
	printf("Promedio de edades del turno de la tarde");
	printf("%i",pro2);
	printf("\n");
	
		for(f=1; f<=11; f++)
	
	{
		printf("ingrese edad:");
		scanf("%i",&edad);
		suma3=suma3+edad;
	}
	
	pro3=suma3/11;
	printf("Promedio de edades del turno de la noche");
	printf("%i",pro3);
	printf("\n");
	
	
	if(pro1<pro2&&pro1<pro3){
		printf("El turno de la mañana tiene un promedio menor de edades.");
	}else{
		if(pro2<pro3){
			printf("El turno de la tarde tiene un promedio menor de edades.");
			
		}else{
			printf("El turno de la noche tiene un promedio menor de edades.");
		}
		}
		
	getch();
	return 0;
	}
	
	

	
	//Alejandro Valencia Mendoza. 



