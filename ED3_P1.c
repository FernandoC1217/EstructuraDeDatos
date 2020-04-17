#include <stdio.h>
#include <string.h>
#include <conio.h>


main() {
  char texto[] = "Lo logramos";
  int longitud;
  clrscr();
  longitud = strlen(texto);
  printf("La cadena %s tiene %d caracteres  \n", texto, longitud);
  getch();
  return 0;
}
