/**
Programa muestra la declaracion y asignacion de valores a dos variables del tipo double, 
luego muestra sus contenidos por pantalla
**/
#include <stdio.h>

int main(){

	// se declaran las variables
	double var1,var2;

	// se les asignan valores
	var1=3.141592653589793238;
	var2=10.456789;
	

	// imprime var1
	printf("var1: %20.18f\n",var1);
	// imprime var2
	printf("var2: %16.14f\n",var2);
	

	return 0;
}