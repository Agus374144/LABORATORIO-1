#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "lib.h"
#include "types.h"
#define MAX 5

int main(int argc, char *argv[])
{
  int i,j,op,op2,flag=0,auxCodigo,auxImporte,auxCantidad,mayor,menor,auxCodProve;
  
  int rta;
 
  char auxDescrip[100];
  
  struct Producto P[MAX];
  struct Proveedor Pro[MAX];
  
  for (i=0;i<MAX;i++){
  	Pro[i].codProve=i+1;
  }
  
  
  for (i=0;i<MAX;i++){
	
	P[i].codProducto=0;
	P[i].prove.codProve=0;
	P[i].descrip[0]='\0';
	P[i].importe=-1;
	P[i].cantidad=-1;
		
	}
	
	
  
  do{  
     op=menu();//menu
      	
	  
	  switch (op){
                         
			case 1: flag=1;
                      for (i=0;i<MAX;i++){
                          if(P[i].codProducto==0){
                                               printf ("\n\nPor favor, ingrese el Codigo del Producto: ");
                                               scanf ("%d", &auxCodigo);
                                               validaEntero(auxCodigo);
                                               P[i].codProducto=auxCodigo;
                                            										   
											   printf ("Ingrese Codigo del Proveedor: ");
                                               scanf ("%d", &auxCodigo);
                                               validaEntero(auxCodigo);
                                               P[i].prove.codProve=auxCodigo;
											   
											   printf ("Ingrese descripcion del Producto: ");
                                               fflush(stdin);
                                               gets (auxDescrip);
                                               rta=validaCadena(auxDescrip);
											   
											   if(rta==1){
                                                          printf ("Reingrese Titulo, solo LETRAS: ");
                                                          fflush(stdin);
                                                          gets (auxDescrip);
                                                          }
											   
											   strcpy(P[i].descrip , auxDescrip);
                                               
											   printf ("Ingrese importe del Producto: ");
                                               scanf ("%d", &auxImporte);
                                               validaEntero(auxCodigo);
											   P[i].importe=auxImporte;
                                               
                                               printf ("Ingrese Cantidad del Producto: ");
                                               scanf ("%d", &auxCantidad);
                                               P[i].importe=auxImporte;
                                               
                                               P[i].cantidad=auxCantidad;
                                               
                                               
                                              
					                           
					                           if (P[i].cantidad>mayor){
					                           	mayor=P[i].cantidad;
											   }
											   if (P[i].cantidad<menor){
											   	menor=P[i].cantidad;
											   }
                                              
											break;
				                               }
				                             
                      }

                      break;
                  
                      
case 2: system ("cls");
				if (flag==0){
						printf ("DISCULPE, PERO PRIMERO DEBE DAR DE ALTA ALGUN PRODUCTO. GRACIAS. =)\n");
						//system ("pause");
						break;
				}
				
				printf ("Por favor, ingrese el Codigo del Producto a modificar: ");
				scanf ("%d", &auxCodigo);
				for (i=0;i<MAX;i++){
					if (auxCodigo==P[i].codProducto){
						
						printf ("Ingrese la nueva descripcion: ");
						fflush(stdin);
						gets(P[i].descrip);
						
						printf ("Ingrese el nuevo codigo de proveedor: ");
						scanf ("%d",P[i].prove.codProve);
						
						printf ("Ingrese el nuevo Importe del producto: ");
						scanf("%d",P[i].importe);
						
						printf ("Ingrese la nueva cantidad del producto: ");
						scanf("%d",P[i].cantidad);
						
      					
						
						break;
					}
				}
				
				
					
				break;
		
				
		
		case 3: system ("cls");
				if (flag==0){
						printf ("DISCULPE, PERO PRIMERO DEBE DAR DE ALTA ALGUN LIBRO. GRACIAS. =)\n");
						//system ("pause");
						break;
				}
				printf ("Ingrese el Codigo del Producto a dar de baja: ");
				scanf ("%d", &auxCodigo);
				
				
				for (i=0;i<MAX;i++){
					if (auxCodigo==P[i].codProducto){
							P[i].codProducto=0;
							P[i].prove.codProve=0;
							P[i].descrip[0]='\0';
							P[i].importe=-1;
							P[i].cantidad=-1;
						}
						
						break;
				}
			
			
		
		
		break;
				
	
	
	
	case 4: system ("cls");
	        if (flag==0){
						printf ("DISCULPE, PERO PRIMERO DEBE DAR DE ALTA ALGUN LIBRO. GRACIAS. =)\n");
						//system ("pause");
						
				}
	        for (i=0;i<MAX;i++){
	        	if (mayor==P[i].cantidad){
	        		printf ("ESTOS SON LOS DATOS DEL PRODCUTO CON MAYOR CANTIDAD:\n\n");
	        		printf ("%d%s%d%d", P[i].codProducto , P[i].descrip , P[i].importe , P[i].prove);
				}
				if (menor==P[i].cantidad){
					printf ("ESTOS SON LOS DATOS DEL PRODCUTO CON MENOR CANTIDAD:\n\n");
	        		printf ("%d%s%d%d", P[i].codProducto , P[i].descrip , P[i].importe , P[i].prove);
				}
			}
                                              
                                              
                
                
                break;
                
    case 5: system ("cls");
            if (flag==0){
						printf ("DISCULPE, PERO PRIMERO DEBE DAR DE ALTA ALGUN LIBRO. GRACIAS. =)\n");
						//system ("pause");
					}
						
			for(i=0;i<MAX-1;i++){
				for(j=0;j<MAX;j++){
					if(P[i].prove.codProve<P[j].prove.codProve){
						auxCodProve=P[i].prove.codProve;
						P[i].prove.codProve=P[j].prove.codProve;
						P[j].prove.codProve=auxCodProve;
						}
						
					if(P[i].prove.codProve==P[j].prove.codProve){
						if(strcmp(P[i].descrip,P[j].descrip)>0){
							strcpy(auxDescrip,P[i].descrip);
							strcpy(P[i].descrip,P[j].descrip);
							strcpy(P[j].descrip,auxDescrip);
							}
						}
				}
				
				for (i=0;i<MAX;i++){
					printf ("");
					
				}
 }
 
 
    
	            
 break;   
             
                                         
 


}    
}while (seguir()/*valida si desea seguir*/==1);
  
  
  system("PAUSE");	
  return 0;

}
