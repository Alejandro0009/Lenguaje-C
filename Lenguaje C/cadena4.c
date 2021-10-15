#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char usuario[31];
	char clave[31];
	char c[31];


	printf("ingrese contraseña ");
	gets(c);
	printf("ingrese nombre de usuario: ");
	gets(usuario);
	printf("ingrese contraseña ");
	gets(clave);


	
	
	if(clave==c){
		printf("Bienvenido al sistema");
		
	}else{
		printf("contraseña incorrecta");
		
	}


	
	getch();
	return 0;
	
}
