#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    float pi=3.14, radio, circun, sup;
  
  printf ("Por favor, ingrese el radio del circulo: ");
  scanf ("%f", &radio);
  
  circun=(radio+radio)*pi;
  sup=(radio*radio)*pi;
  
  printf ("\nLa circunferencia del circulo es de: %.2f", circun);
  printf ("\nLa superficie del circulo es de: %.2f\n", sup);
  
  system("PAUSE");	
  return 0;
}
