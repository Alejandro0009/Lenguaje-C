#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char usuario[31];
	char clave[31];
	char c[31];


	printf("ingrese contraseņa ");
	gets(c);
	printf("ingrese nombre de usuario: ");
	gets(usuario);
	printf("ingrese contraseņa ");
	gets(clave);


	
	
	if(clave==c){
		printf("Bienvenido al sistema");
		
	}else{
		printf("contraseņa incorrecta");
		
	}


	
	getch();
	return 0;
	
}
