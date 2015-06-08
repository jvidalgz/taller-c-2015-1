/**
	programa muestra el uso del formato de precisión %4.2f para imprimir un float
*/
#include <stdio.h>

int main() {

  // se declara variable
  float x = 3.141592;
  
  // se imprime
  printf("Imprimiendo 3.141592 usando formato %%4.2f    \t  %4.2f\n", x);

  
  return 0;
}