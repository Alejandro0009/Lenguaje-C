#include <stdio.h> 
#include <conio.h> 
int main () { 
int f; 
float dia[4]; 
float tarde[4]; 
float temprano, 
noche; 
//Carga del vector 
for (f=0; f<4; f++) { 
printf ("Ingrese el sueldo del turno de la mañana:"); 
scanf("%f",&dia[f]); printf ("\n"); } 
for(f=0; f<4; f++) { 
printf ("Ingrese el sueldo del turno de la tarde:"); 
scanf("%f",&tarde[f]); printf ("\n"); } 
temprano=0; 
noche=0; //impresion del vector 
for(f=0; f<4; f++) { 
temprano = dia[f]+dia[f]+dia[f]+dia[f]; 
noche = tarde[f]+tarde[f]+tarde[f]+tarde[f]; } 
printf ("El gasto del turno de la manaña es:");
 printf ("%0.2f",temprano); printf ("\n"); 
 printf ("El gasto del turno de la tarde es:");
  printf ("%0.2f",noche);
   printf ("\n"); 
   getch(); 
   return 0; 
   }
