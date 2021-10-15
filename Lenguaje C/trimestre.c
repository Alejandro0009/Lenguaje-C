#include<stdio.h>
#include<conio.h>

int main(){
	int dd;
	int mm;
	int aa;

	
	printf("Ingrese el numero el dia ");
	scanf("%i",&dd);
	printf("Ingrese el numero del mes");
	scanf("%i",&mm);
	printf("Ingrese el año");
	scanf("%i",&aa);	

	
	if (mm==1 || mm==2 || mm==3){
		
		printf("corresponde al primer trimestre. ");
		
	

	}else{
		printf("No corresponde al primer trimestre. ");
		
	
	}
	
	getch();
	return 0;
	}
