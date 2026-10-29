/*Delgado Ramirez Mariana Fernanda 
programa2c
*/

#include <stdio.h>

int main ()
{
     int lista[10]; 
     int indice=0;
int numeroElementos=0;
printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
scanf("%d",&numeroElementos);
if((numeroElementos>=1) && (numeroElementos<=10))
  printf ("Da un numero entero entre 1 y 10 para indicar la longuitud del arreglo: "
