#calculadora
#Variables a usar: var1 y var2
#include <stdio.h>

int main()
{
  int opc;
  int var1=0, var2=0;
  printf("\n\t\t BIENVENIDO \n");
  printf("\n\t 1 - SUMA");
  printf("\n\t 2 - RESTA");
  printf("\n\t 3 - MULTIPLICACIÓN");
  printf("\n\t 4 - DIVISION");
  printf("\n\t Ingresa la opción a realizar");
  scanf("%d",&opc);

  switch(opc)
    {
      case 1:
      case 2:
      case 3:
      case 4:
      default:
        printf("\n\t Opción no valida");
    }
  return 0;
}
