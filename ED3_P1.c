#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{
  /*Parte uno del problema.*/
  /*

  char texto[] = "Lo logramos";
  int longitud;
  clrscr();
  longitud = strlen(texto);
  printf("La cadena %s tiene %d caracteres  \n", texto, longitud);
  getch();
  return 0;*/

  /*Parte dos del problema.*/
  char nombre[] = "sunombre"; //se puede modificar con tu nombre
  char apellido[] = "suapellido";
  char nombre_completo[50];
  int longitud;
 
  strcat(nombre, " ");      //concateno un espacio a nombre.
  strcat(nombre, apellido); //se anade apellido a la concatenacion.
  strcpy(nombre_completo, nombre); // copia el valor de nombre en nombre_completo.
  
  longitud = strlen(nombre_completo);
  
  printf("La cadena %s tiene %d caracteres  \n", nombre_completo, longitud);
  getch();
  return 0;
}
