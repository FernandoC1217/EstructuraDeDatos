#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    int choice,a,b,c;

    char cadena1[100], cadena2[100], cadena3[100];
    char datos[90];
    char cadena_concatenada[100];

    while(choice != 7) {
            //MENU PRINCIPAL
      printf("\n\n1. Pantalla de presentación\n");
      printf("2. Cargada de las tres cadenas\n");
      printf("3. Impresión de las tres cadenas\n");
      printf("4. Impresión de la longitud de cada cadena\n");
      printf("5. Impresión de la concatenación de las tres cadenas\n");
      printf("6. Impresión si las dos primeras cadenas son iguales\n");
      printf("7. Salir del programa\n");
      printf("Selecciona una opcion\n\n");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("\nRegresando al menu principal\n");
                 break;
            case 2:
                  printf("\n");
                  printf("Inserta tus cadenas \n");
                  gets(datos);
                  printf("Ingrese la primera cadena: ");
                  gets(cadena1);
                  printf("Ingrese la segunda cadena: ");
                  gets(cadena2);
                  printf("Ingrese la tercera cadena: ");
                  gets(cadena3);
                  break;
            case 3:
                  printf("\nLa cadena 1 es: %s",cadena1);
                  printf("\nLa cadena 2 es: %s",cadena2);
                  printf("\nLa cadena 3 es: %s",cadena3);
                  printf("\n");
                  break;
            case 4:
                // Variable A
                  a=strlen(cadena1);
                  printf("\nla longitud de la cadena 1 es: %d\n",a);
                // Variable B
                  b=strlen(cadena2);
                  printf("la longitud de la cadena 2 es: %d\n",b);
                // Variable C
                  c=strlen(cadena3);
                  printf("la longitud de la cadena 3 es: %d\n",c);
                  break;
            case 5:
                strcpy (cadena_concatenada, cadena1);
                strcat  (cadena_concatenada, cadena2);
                strcat  (cadena_concatenada, cadena3);
                printf("\n");
                puts (cadena_concatenada);
                printf("\n");
                break;
            case 6:
                  if (cadena1 == cadena2 )
                    printf("\nLa cadena 1 y la cadena 2 son iguales \n");
                  else
                    printf("\nLa cadena 1 y la cadena 2 no son iguales \n");
                break;
            case 7:
                printf("\nAdios: Saliendo del Programa\n");
                break;
            default:
                printf("Opción inválida, elige una de las que salen en el menu\n");
          }
    }

}
