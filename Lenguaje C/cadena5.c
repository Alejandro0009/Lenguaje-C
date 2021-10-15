/*problema 2*/
#include<conio.h>
#include<string.h>

int main(){
	char nombre1[31];
	char nombre2[31];
	char nombre3[31];
	char nombreLargo[31];
	printf("ingrese primer nombre  ");
	gets(nombre1);
	printf("ingrese segundo nombre  ");
	gets(nombre2);
	printf("ingrese tercer nombre  ");
	gets(nombre3);
	
	strcpy(nombreLargo,nombre1);
	strcpy(nombreLargo,nombre2);
	strcpy(nombreLargo,nombre3);
	
	printf("las palabras son %s  ",nombreLargo);
	
	

	

	
	getch();
	return 0;



}
