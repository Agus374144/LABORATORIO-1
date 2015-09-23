#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int leg, sexo, contFem=0, contMasc=0, seguir;
  float sueldo;
  

do{
 system ("cls");
  printf ("Ingrese numero de legajo: ");
  scanf ("%d", &leg);
  printf ("Ingrese sueldo: ");
  scanf ("%f", &sueldo);
  printf ("Ingrese sexo del empleado, siendo 1-FEMENINO y 2-MASCULINO: ");
  scanf ("%d", &sexo);
  while (sexo>2 || sexo<1){
        printf ("ERROR");
        scanf ("%d", &sexo);
}
  if (sexo=1 && sueldo>500){
             contFem++;
             }
  if (sexo=2 && sueldo<400){
             contMasc++;
}

printf ("\nDesea seguir ingresando empleados? 1-SI y 2-NO: ");

scanf ("%d", &seguir);
}while(seguir!=2);



 printf ("\n\nEl total de mujeres que ganan mas de $500 es de: %d", contFem);
 printf ("\nEl total de hombres que ganan menos de $400 es de: %d\n\n", contMasc); 
 
  system("PAUSE");	
  return 0;
}
