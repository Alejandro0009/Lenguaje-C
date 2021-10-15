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
	char continua;
	char articulo[5][5];
	char concatenar[100];
	char espacio;
	int c,i,contador=1;

	
	
	printf("Bienvenido a Cinepolis una expereicnia en familia");
	printf("\n"); 
	
	
	printf("Introduce la pelicula que desean ver: ");gets(pelicula);
	printf("\n"); 
	fflush(stdin);
	
	printf("Vas a llevar alguna GOLOCIA, escibre: \n (s=continuar)\n (n=finalizar)\n");
	scanf(" %c",&continua);
	printf("\n");
	
	if(continua=='s'||continua=='S'){
	printf("Cuantos articulos se desea capturar:  ");
	scanf("%i",&c);

	
	for(i=1;i<=c;i++){
		
		printf("% i",contador++);
		printf(".Nombre del articulo: ");
		scanf("%s",&articulo," ");
		printf("\n");
		strcat(concatenar, articulo);
		strcat(concatenar, "  ");
		
	
		
	}
	printf("Gracias por su compra\n");
	printf("La pelicula que van a ver es: %s\n",pelicula);
	printf("Los articulos que compraste son: %s\n",concatenar);
	printf("Esperamos verte pronto %s\n");
		
	} else if(continua!='s'||continua!='S'){
		printf("Gracias por su compra\n");
		printf("La pelicula que van a ver es: %s\n",pelicula);
		printf("Esperamos verte pronto %s\n");
		
	}



	

	
	
	


	
	getch();
	return 0;

 
}
