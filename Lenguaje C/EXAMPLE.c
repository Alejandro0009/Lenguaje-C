 

/*Realizar un programa que solicite la carga de la edad y sexo de dos personas. 
Luego mostrar la edad y sexo de la persona mayor. Para almacenar el sexo definir variables de
 tipo char donde se almacenará el caracter 'm' o 'f' indicando si es del sexo masculino o femenino. */

#include<stdio.h> 

#include<conio.h> 

 

int main() 

{ 

    int edad1,edad2; 

    char sexo1,sexo2; 

    printf("Ingrese edad de la persona:"); 

    scanf("%i",&edad1); 

    printf("Sexo de la persona [m/f]:"); 

    scanf(" %c",&sexo1); 

    printf("Ingrese edad de la persona:"); 

    scanf("%i",&edad2); 

    printf("Sexo de la persona [m/f]:"); 

    scanf(" %c",&sexo2); 

    if (edad1>edad2) 

    { 

        printf("La edad mayor es:"); 

        printf("%i",edad1); 

        printf("\n"); 

        if (sexo1=='m') 

        { 

            printf("sexo:masculino"); 

        } 

        else 

        { 

            if (sexo1=='f') 

            { 

                printf("sexo:femenino"); 

            } 

        } 

    } 

 

 

 

else 

    { 

        if (edad2>edad1) 

        { 

            printf("La edad mayor es:"); 

            printf("%i",edad2); 

            printf("\n"); 

            if (sexo2=='m') 

            { 

                printf("sexo:masculino"); 

            } 

            else 

            { 

                if (sexo2=='f') 

                { 

                    printf("sexo:femenino"); 

                } 

            } 

        } 

        else 

        { 

            printf("Tienen la misma edad."); 

        } 

    } 

    getch(); 

    return 0; 

} 

 

 

 

 

 

 

 

 

 

 

 

 

 
