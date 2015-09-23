#include <stdio.h>
#include <stdlib.h>
#define E 3
int main(int argc, char *argv[])
{
  
  int i,maxEdad=0,maxLeg=0,total=0,cont=0;
  float promedio=0;
  int edad[E];
  int leg[E];
  char sexo[E][1];
  char maxSexo[E];
  
  
  for (i=0;i<E;i++){
      printf ("Ingrese el legajo del empleado: ");
      scanf ("%d", &leg[i]);
      printf ("Ingrese edad del empleado por favor: ");
      scanf ("%d", &edad[i]);
      total=total+edad[i];
      promedio=total/E;
      printf ("Ingrese sexo del empleado, siendo F (femenino) y M (masculino): ");
      scanf ("%s", sexo[i]);
      if (edad[i]>maxEdad){
                           maxEdad=edad[i];
                           maxLeg=leg[i];
                           strcpy(maxSexo,sexo[i]);
                           }
      if (edad[i]==37 && sexo[E]=='f'){
                       cont++;
                       }
}
    
      printf ("La edad promedio de los empleados es: %.2f", promedio);
      printf ("Los datos del empleado mayor son:\n\tLEGAJO:%d\n\tEDAD:%d\n\tSEXO:%s",maxLeg,maxEdad,maxSexo);
      printf ("La cantidad de Mujeres que nacieron en 1978 es de: %d", cont);
      
      
      
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
