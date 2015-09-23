#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num, cuadrado;
  
  printf ("Por favor, ingrese un numero MAYOR A CERO para calcular su cuadrado: ");
  scanf ("%d", &num);
  while (num<0){
        printf ("ERROR, REINGRESE: ");
        scanf ("%d", &num);
}
  cuadrado=num*num;
  printf ("\nEl cuadrado del numero ingresado es: %d\n", cuadrado);
  
  system("PAUSE");	
  return 0;
}
