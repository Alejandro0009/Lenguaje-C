#include<stdio.h>
#include<conio.h>

int main(){
	int n1;
	int n2;
	int n3;

	
	printf("Ingrese el numero 1");
	scanf("%i",&n1);
	printf("Ingrese el numero 2");
	scanf("%i",&n2);
	printf("Ingrese el numero 3");
	scanf("%i",&n3);	

	
	if (n1>n2&&n1>n3){
		
		printf("el  numero ingresado en primer lugar es mayor: \n ");
		printf("%i",n1);
	

	}else{
		if (n1>n3){
		
	
		printf("%i",n2);
	

	}
	else{
		printf("%i",n3);
	
	}
	}
	
	getch();
	return 0;
	}
