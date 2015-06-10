/*
  programa que muestra el uso de distintos formatos de precision para imprimir una
  variable del tipo float
*/
#include <stdio.h>
 
int main() {

  // se declara variable
  float x = 3.141592;
  
  // se muestran distintos tipos de formatos de precision para la variable 'x'
  printf("Imprimiendo 3.141592 usando formato %%f    \t  %f\n", x);
  printf("Imprimiendo 3.141592 usando formato %%2.1f \t  %2.1f\n", x);
  printf("Imprimiendo 3.141592 usando formato %%3.2f \t  %3.2f\n", x);
  printf("Imprimiendo 3.141592 usando formato %%4.3f \t  %4.3f\n", x);
  printf("Imprimiendo 3.141592 usando formato %%5.4f \t  %5.4f\n", x);
  printf("Imprimiendo 3.141592 usando formato %%6.5f \t  %6.5f\n", x);
  
  
  return 0;
}