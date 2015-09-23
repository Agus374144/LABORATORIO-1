#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char *argv[])
{
   int vec[N];
   int i,num,posicion,op;
   
   
    
    for (i=0;i<N;i++){
        printf ("ingrese un numero: ");
        scanf ("%d", &vec[i]);
}
do{

   printf ("\n\nMENU DE OPCIONES");
   printf ("\n1)BUSQUEDA POR NUMERO.\n2)BUSQUEDA POR POSICION.\n3)SALIR.\n");
   printf ("\nIngrese el numero de la opcion deseada: ");
   scanf ("%d", &op);
   switch (op){
       
       case 1:    printf ("\nIngrese el numero a buscar dentro del vector: ");
                  scanf ("%d", &num);
                  
                  for (i=0;i<N;i++){
                      if (num==vec[i]){
                                       printf ("El numero se encuentra en la posicion %d", i+1);
                                       }
                                       }
                  break;
                  
       case 2:    printf ("\nIngrese la posicion para mostrar su numero: ");
                  scanf ("%d", &posicion);
                  for (i=0;i<N;i++){
                      if (posicion==i+1){
                                         printf ("La posicion ingresada contiene el siguiente numero: %d", vec[i]);
                                         }
                  }
                  break;
                  
       }

    
}while (op!=3);    
system("PAUSE");
    
}


