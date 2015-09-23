#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float altura, maxAltura=0;
  char maxNomApe[60];
  char nombre[30];
  char apellido[30];
  char nomApe[60];
  char seguir;
  
  do{
             system ("cls");
             printf ("Ingrese el nombre del alumno: ");
             fflush (stdin);
             gets (nombre);
             printf ("Ingrese el apellido del alumno: ");
             fflush (stdin);
             gets (apellido);
             strcpy (nomApe,nombre);
             strcat (nomApe, " ");
             strcat (nomApe, apellido);
             printf ("Ahora ingrese la altura del alumno: ");
             scanf ("%f", &altura);
             if (altura>maxAltura){
                                   maxAltura=altura;
                                   strcpy (maxNomApe,nomApe);
                                   }
                                   
             printf ("Desea seguir ingresando datos? s/n: ");
             scanf ("%s", &seguir);
}while(seguir!='n');

printf ("\n\nEl alumno mas alto es %s y mide: %.2f \n", maxNomApe,maxAltura);
             
             
  
  
  system("PAUSE");	
  return 0;
}
