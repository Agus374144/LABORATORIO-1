#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,num,mayorCero=0,menorCero=0;
  
  for (i=0;i<10;i++){
             printf ("Ingrese un numero: ");
             scanf ("%d", &num);
             if (num>0){
                        mayorCero++;
                        }
             if (num<0){
                        menorCero++;
                        }
}


       printf ("\n\nUsted ingreso %d numeros mayores a cero", mayorCero);
       printf ("\nY %d numeros menores a cero: ", menorCero);
  system("PAUSE");	
  return 0;
}
