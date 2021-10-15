/*imprimir los numeros del 50 al 100*/
#include<stdio.h>
#include<conio.h>

int main(){
	
	int x;
	x=2;
	
	while (x<=100){
		printf("%i",x);
		printf(",");
		x=x+2;
		
	}
	getch();
	return 0;
}
