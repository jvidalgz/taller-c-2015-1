/**
Programa muestra la declaracion y asignacion de valores a dos variables del tipo float, 
luego muestrasus contenidos por pantalla
**/
#include <stdio.h>

int main(){

	// se declaran las variables
	float var1,var2,var3;

	// se les asignan valores
	var1=2.3;
	var2=10.456789;
	var3=22.442e2;

	// imprime var1
	printf("var1: %f\n",var1);
	// imprime var2
	printf("var2: %f\n",var2);
	// imprime var3
	printf("var3: %f\n",var3);

	return 0;
}