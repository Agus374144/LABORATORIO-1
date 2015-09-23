#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int resultado,num1,num2,op;
  float resultado2,num3,num4;

do{
  system("cls");        
  printf ("\nBIENVENIDO A LA MINI CALCULADORA");
  printf ("\n\n.MENU DE OPCIONES.");
  printf ("\n1)SUMA.\n2)RESTA.\n3)MULTIPLICACION.\n4)DIVISION.\n5)SALIR!");
  printf ("\nPor favor igrese el NUMERO de la opciones deseada: ");
  scanf ("%d", &op);
  

  
  switch (op){
         
         case 1:    printf ("\n\nIngrese los dos enteros a SUMAR");
                    printf ("\nPrimer numero: ");
                    scanf ("%d", &num1);
                    printf ("\nSegundo numero: ");
                    scanf ("%d", &num2);
                    resultado=num1+num2;
                    printf ("\n\n%d + %d es igual a: %d\n", num1,num2,resultado);
                    system("PAUSE");
                    break;
                    
         case 2:    printf ("\n\nIngrese los dos enteros a RESTAR");
                    printf ("\nPrimer numero: ");
                    scanf ("%d", &num1);
                    printf ("\nSegundo numero: ");
                    scanf ("%d", &num2);
                    resultado=num1-num2;
                    printf ("\n%d - %d es igual a: %d\n", num1,num2,resultado);
                    system("PAUSE");
                    break;
                    
         case 3:    printf ("\n\nIngrese los dos enteros a MULTIPLICAR");
                    printf ("\nPrimer numero: ");
                    scanf ("%d", &num1);
                    printf ("\nSegundo numero: ");
                    scanf ("%d", &num2);
                    resultado=num1*num2;
                    printf ("\n%d X %d es igual a: %d\n", num1,num2,resultado);
                    system("PAUSE");
                    break;
                    
         case 4:    printf ("\n\nIngrese los dos enteros a DIVIDIR");
                    printf ("\nPrimer numero: ");
                    scanf ("%f", &num3);
                    printf ("\nSegundo numero: ");
                    scanf ("%f", &num4);
                    resultado2=num3/num4;
                    
                    printf ("\n%.0f : %.0f es igual a: %.2f\n", num3,num4,resultado2);
                    system("PAUSE");
                    break;
} 
}while(op!=5);       
         
  system("PAUSE");	
  return 0;
}
