#include <stdio.h>
/**
	programa que muestra el espacio de almacenamiento en bytes 
	para una variable float y otra variable
**/

int main(){

	// se declara variable
	float var1;
	double var2;

	// muestra por pantalla
	printf("El espacio de almacenamiento para la variable 'var1' es de %d bytes\n", sizeof(var1));
	printf("El espacio de almacenamiento para la variable 'var2' es de %d bytes\n", sizeof(var2));

	return 0;
}