/*Crear un programa que nos el cual sea de un cinepolis y nos pida.  

1.- Nos de la bienvenida a cinepolis,  
2.- Nos diga que pelicula quiere ver .   
3.- Nosotros introducimos el nombre de la pelicula que queremos ver,    
4.- Que nos diga que dulce desea consumir y nosotros escribamos el dulce que queremos.  
5.- Que nos de un mensaje quiere otro articulo de nuestra dulceria y si ponemos 

la s de si nos lanse de nuevo el mensaje de que dulce 
quiere si ponemos la n de no ahi se corte el programa.

*/
#include<stdio.h>
#include<conio.h>

int main(){
	char pelicula[21];
	char Dulce[21];
	char continua;
	
	
	printf("Bienvenido a Cinepolis una expereicnia en familia");
	printf("\n"); 
	
	printf("Introduce la pelicula que desean ver: ");gets(pelicula);
	printf("\n"); 
	fflush(stdin);
	do{
	/*/printf("Que dulce deceas consumir ");gets(Dulce);
	printf("\n");
	printf("%s",Dulce);*/
	printf("\n Desea cargar alguna Golocina, escribe:  \n S (PARA CONTINUAR) \n N (PARA FINALIZAR): \n");
	scanf(" %c",&continua);
	}while(continua=='s'||continua=='S' );
	printf("Que dulce deceas consumir ");gets(Dulce);
	printf("\n");
	printf("%s",Dulce);
	Rfflush(stdin);


	
	


	
	getch();
	return 0;

 
}
