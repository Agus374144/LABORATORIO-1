#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int vec[9];
  
  for (i=0;i<10;i++){
      printf ("ingrese un numero: ");
      scanf ("%d", &vec[i]);
}
system("cls");
for(i=0;i<10;i++)
printf ("\n%d\n", vec[i]);
  
  
  system("PAUSE");	
  return 0;
}
