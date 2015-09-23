#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1,num2,resta;
    
  printf ("Por favor ingrese un numero: ");
  scanf ("%d", &num1);
  printf ("Ingrese otro numero: ");
  scanf ("%d", &num2);
  resta=num1-num2;
  if (resta>0){
               printf ("\nLa resta entre ambos numero es positiva: %d\n", resta);
               }
  if (resta<0){
               printf ("\nLa resta entre ambos numero es negativa: %d\n", resta);
               }
                 
  system("PAUSE");	
  return 0;
}
