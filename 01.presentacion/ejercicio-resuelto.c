#include <stdio.h>
/**
Código que demuestra el uso de las funciones printf y scanf.
@felipe lópez
**/
int main(){

	// declaración de variables
	float num1,num2,resultado=0,div,resultado_total;

	/* se solicita el primer valor y se almacena 
	 en la variable num1 */
	printf("Ingrese el primer valor:\n");
	scanf("%f",& num1);

	/* se solicita el segundo valor y se almacena 
	 en la variable num2 */
	printf("Ingrese el segundo valor:\n");
	scanf("%f",& num2);

	// se suma
	resultado=num1+num2;

	// imprime el resultado
	printf("El resultado de sumar num1 y num2 es:[%1.f]\n",resultado);

	// solicita nuevo valor 
	printf("Ingrese numero para dividir:\n");
	scanf("%f",& num3);
	
	// el resultado se divide por el valor almacenado en num3
	resultado_total=resultado/num3;

	// imprime el resultado de la division
	printf("El resultado total es:[%f]",resultado_total);
	
	return 0;
}
