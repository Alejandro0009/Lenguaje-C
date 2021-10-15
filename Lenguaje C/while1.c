/*imprimir los numeros del 1 al 500*/
#include<stdio.h>
#include<conio.h>

int main(){
	
	int x;
	x=1;
	
	while (x<=500){
		printf("%i",x);
		printf("-");
		x=x+1;
		
	}
	getch();
	return 0;
}
