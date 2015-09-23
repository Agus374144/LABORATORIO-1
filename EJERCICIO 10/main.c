#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  float b,a,sup;
  
  printf ("Ingrese la base del triangulo: ");
  scanf ("%f", &b);
  printf ("\nAhora ingrese la altura: ");
  scanf ("%f", &a);
  sup=(b*a)/2;
 
  printf ("\n\nLa superficie del triangulo es de: %.2f\n", sup);
  
  
  system("PAUSE");	
  return 0;
}
