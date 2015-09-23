#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2,aux;
  
  printf ("Ingrese su primer numero: ");
  scanf ("%d", &num1);
  printf ("Ingrese su segundo numero: ");
  scanf ("%d", &num2);
  aux=num1;
  num1=num2;
  num2=aux;
  printf ("\nAhora su primer numero es lo que tenia almacenado el segundo: %d", num1);
  printf ("\nY su segundo numero es lo que tenia almacenado el primero: %d\n\n", num2);
  
  
  
  system("PAUSE");	
  return 0;
}
