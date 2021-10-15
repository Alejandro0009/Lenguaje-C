#include<stdio.h>
#include<conio.h>

int main(){
	
	float altura[5];
	int f,i;
	float mayor;
	int con=1;
	int a;
	int j;
	
	printf("%cCuantas alturas vas a ingresar?: ",168);
	scanf("%i",&a);
	printf("\n");
	


for (f=0; f<a; f++){
	printf("%i",con++);
	printf(".Ingrese la altura de la persona:  ");
	scanf("%f",&altura[f]);
	}
	

for (i=0; i<a; ++i)
	{
		if (altura[i] > mayor) {
				mayor = altura[i];
				if(mayor>=1.70){
					printf("Es mayor al promedio  ");
					printf("\n");
					}
						
					}
					if(altura[i]<=1.69){
					printf("Es menor al promedio  ");
					printf("\n");
						
					}
				
				}
				
				if(mayor>=1.70){
					printf("Es mayor al promedio  ");
					printf("\n");
					}
					
					if(altura[i]<=1.69){
					printf("Es menor al promedio  ");
					printf("\n");
						
					}
				
			
	
	printf("La altura mas grande es: ");
	printf("\n");
	printf("%f",mayor);
	printf("  metros ");
	
getch();
return 0;
	
	
	}
	

	

	


