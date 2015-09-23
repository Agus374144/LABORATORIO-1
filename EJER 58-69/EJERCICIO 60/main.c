#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(int argc, char *argv[])
{
  int i,j,aux;
  int numeros[N];
  
  
  for (i=0;i<N;i++){
      printf ("ingrese un numero: ");
      scanf ("%d", &numeros[i]);
}
 for (i=0;i<N;i++){
     printf ("\n%d", numeros[i]);
}
for (i=0;i<N-1;i++){
    for (j=i+1;j<N;j++){
        if (numeros[i]>numeros[j]){
                           aux=numeros[i];
                           numeros[i]=numeros[j];
                           numeros[j]=aux;
                           }
                           }
for (i=0;i<N;i++){
     printf ("\n%d\n", numeros[i]);
}
    
  
}
  system("PAUSE");	
  return 0;
}
