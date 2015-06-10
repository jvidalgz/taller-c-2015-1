#include <stdio.h>

int main(){

	// decaracion
	float var1;
	float var2;

	//asignacion
	var1=5;
	var2=5;

	//var2=var2+0.0000001;
	var2+=0.0000001;

	if (var1==var2){
		printf("Las variables tienen el mismo valor");
	}else{
		printf("Las variables son DISTINTAS");
	}

	return 0;

}