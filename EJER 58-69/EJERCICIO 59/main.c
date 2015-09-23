#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,mayor=0,posicion=0;
  int vec[9];
  
  for (i=0;i<10;i++){
      printf ("Ingrese un numero: ");
      scanf ("%d", &vec[i]);
      if (vec[i]>mayor){
                        mayor=vec[i];
                        posicion=i+1;
                        }
      
}
  system("cls");
  printf ("\n\nEl mayor numero del listado es el %d en la posicion %d", mayor,posicion);
  for (i=0;i<10;i++){
      printf ("\n%d\n", vec[i]);
}
  
  
  system("PAUSE");	
  return 0;
}
