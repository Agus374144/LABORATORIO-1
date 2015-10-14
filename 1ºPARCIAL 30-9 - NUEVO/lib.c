#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"



int menu(){
	
	int op;
	
	system("cls");
	
	printf ("----------B I E N V E N I D O S--------------\n");
	printf ("Menu de opciones.\n\n1)ALTA.\n2)MODIFICAR.\n3)BAJA\n4)INFORMAR.\n5)LISTAR LIBROS.\n6)SALIR.\n");
	printf ("Elija el NUMERO de la opcion deseada: ");
	scanf ("%d", &op);
	while (op<1 || op>6){
		printf ("\nERROR, Reingrese: ");
		scanf ("%d", &op);
 	
}

return op;	

}

int seguir(void){
char seguir;

printf("Desea continuar? S/N \n");
seguir=tolower(getch());

//VALIDACION
while(seguir!='s'&&seguir!='n'){
    printf("\nDesea continuar S/N\n");
    seguir=tolower(getche());
}
if(seguir=='s')
 return 1;
 else 
 return 0;



}

int validaCadena (char cadena[100]){
    
    int i=0, rta=0, str;
    
    str=strlen(cadena);
    
    while (i<str && rta==0){
          if (isalpha(cadena[i])!=0){
                                     i++;
                                     }
                                     else{
                                          rta=1;
                                          }
                                          }
    return rta;
}

void validaEntero(int numero){
	
	while (numero<=0){                                                     
		printf ("ERROR, REINGRESE: ");
        scanf ("%d", &numero);
    }
    
    return;
	
} 

void validaProve(int numero){
	while (numero<1 || numero>5){
    	printf ("ERROR, reingrese un codigo valido: ");
        scanf ("%d", &numero);
	}
	return;
}                                         



