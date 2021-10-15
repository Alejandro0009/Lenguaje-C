#include<stdio.h>
#include<conio.h>

int main(){
	int edad;
	
	printf("Ingres su edad:");
	scanf("%i",&edad);
	if (edad>=18){
		printf("Puedes votar");
	
	}else{
		printf("Eres menor de edad, No puedes votar");
	
	}
	getch();
	return 0;
	}
	
