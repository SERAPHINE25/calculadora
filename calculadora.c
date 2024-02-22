//calculadora
//Variables a usar: var1 y var2
#include <stdio.h>

int main()
{
  int opc;
  int var1=0, var2=0;
  printf("\n\t\t BIENVENIDO \n");
  printf("\n\t Ingresa el primer número: ");
  scanf("%d",&var1);
  printf("\n\t Ingresa el segundo número: ");
  scanf("%d",&var2);
  printf("\n\n");
  printf("\n\t 1 - SUMA");
  printf("\n\t 2 - RESTA");
  printf("\n\t 3 - MULTIPLICACIÓN");
  printf("\n\t 4 - DIVISION");
  printf("\n\t Ingresa la opción a realizar: ");
  scanf("%d",&opc);

  switch(opc)
    {
      case 1:
        int suma=0;
        suma= var1 + var2;
        printf("\n\t La suma es: %d\n",suma);
        break;
      case 2:
        int resta=0;
        resta = var1 - var2;
        printf("\n\t La resta es: %d\n",resta);
        break;
      case 3:
        int mult=0;
        mult = var1*var2;
        printf("\n\t La multiplicación es: %d\n",mult);
        break;
      case 4:
        float div=0;
        div = var1/var2;
        printf("\n\t La división es: %f\n",div);
        break;
      default:
        printf("\n\t Opción no valida\n");
    }
  return 0;
}
