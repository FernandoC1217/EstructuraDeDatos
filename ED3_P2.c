
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main() {
  int a, b, c;
  char cadena1[100], cadena2[100], cadena3[100];
  printf("Ingrese la primera cadena: ");
  gets(cadena1);
  printf("Ingrese la segunda cadena: ");
  gets(cadena2);
  printf("Ingrese la tercera cadena: ");
  gets(cadena3);
  // Variable A
  a=strlen(cadena1);
  printf("la longitud de la cadena 1 es: %d\n",a);
  // Variable B
  b=strlen(cadena2);
  printf("la longitud de la cadena 2 es: %d\n",b);
  // Variable C
  c=strlen(cadena3);
  printf("la longitud de la cadena 3 es: %d\n",c);
  if (a>b && a>c)
    printf("La cadena más grande es: %s", cadena1 );
  else if (b>a  && b>c)
    printf("La cadena más grande es: %s", cadena2);
  else if (c>a  && c>b)
    printf("La cadena más grande es: %s", cadena3);
  getch();
  return 0;

}
