#include <stdio.h>
void main ()
{
    int choice,r,l,w,b,h;
    float area;
    while(choice != 4) {
      printf("1. Pantalla de presentaci�n\n");
      printf("2. Cargada de las tres cadenas\n");
      printf("3. Impresi�n de las tres cadenas\n");
      printf("4. Impresi�n de la longitud de cada cadena\n");
      printf("5. Impresi�n de la concatenaci�n de las tres cadenas\n");
      printf("6. Impresi�n si las dos primeras cadenas son iguales\n");
      printf("7. Salir del programa\n");
      printf("Input 4 to exit\n");

      printf("Input your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  printf("The area is : %f\n",area);
                  break;
            case 3:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  printf("The area is : %f\n",area);
                  break;
            case 7:
                printf("Adios: Saliendo del Programa");
                break;
            default:
                printf("Opci�n inv�lida, elige otra");
          }
    }

}
