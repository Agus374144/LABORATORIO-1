#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int leg,maxLeg,aprobados=0,diciembre=0,marzo=0;
  float promedio,maxPromedio;
  char seguir;
  
  
  
  do{
             printf ("Ingrese el legajo del alumno: ");
             scanf ("%d", &leg);
             printf ("Ahora ingrese el promedio del alumno: ");
             scanf ("%f", &promedio);
             if (promedio>7 || promedio==7){
                            aprobados++;
                            }
             if (promedio<7 && promedio>4 || promedio==4){
                            diciembre++;
                            }
             if (promedio<4){
                             marzo++;
             }
             if (promedio>maxPromedio){
                                       maxPromedio=promedio;
                                       maxLeg=leg;
                                       }
             printf ("Desea seguir ingresando alumnos? s/n: ");
             scanf ("%s", &seguir);
}while (seguir!='n');

printf ("\n\nLa cantidad de alumnos aprobados es de: %d", aprobados);
printf ("\nLa cantidad de alumnos que rinden en Diciembre es de: %d", diciembre);  
printf ("\nLa cantidad de alumnos que rinden en Marzo es de: %d", marzo); 

printf ("\n\nEl numero de legajo del alumno con mejor premedio es %d y su promedio es %.2f", maxLeg,maxPromedio);
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
