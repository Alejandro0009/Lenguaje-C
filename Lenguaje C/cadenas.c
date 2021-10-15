#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char nombre1[31];
	char nombre2[31];
	printf("ingrese primer nombre");
	gets(nombre1);
	printf("ingrese segundo nombre");
	gets(nombre2);
	
	
	if(strcmp(nombre1,nombre2)==0){
	
	printf("los dos nombres son iguales");
		
	}else{
		
		if(strcmp(nombre1,nombre2)>0){
	
	printf("%s es mayor alfabeticamente el primer nombre",nombre1);
		
	}else{
		
			printf("%s es mayor alfabeticamente el primer nombre",nombre2);
		
	}
		
	}
	
	getch();
	return 0;



}
