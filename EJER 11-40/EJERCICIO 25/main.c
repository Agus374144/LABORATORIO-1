#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2,num3,mayor;
 
  
  printf ("Ingrese un numero: ");
  scanf ("%d", &num1);
  mayor=num1;
  printf ("Ingrese otro numero: ");
  scanf ("%d", &num2);
  if (num2>mayor)
                  mayor=num2;
  printf ("Ingrese un ultimo numero: ");
  scanf ("%d", &num3);
  if (num3>mayor)
                 mayor=num3;
                  
  printf ("\nDe los numeros ingresados: %d, %d y %d. El mayor es %d: \n", num1,num2,num3,mayor);
  
  system("PAUSE");	
  return 0;
}
