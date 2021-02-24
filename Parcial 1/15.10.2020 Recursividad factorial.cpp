//RECURSIVIDAD
//Es una función que se llama a sí misma y regresa un valor

#include <stdlib.h>
#include <stdio.h>

int factorial(int numero);

int main(){
	int resultado = factorial(5);
	printf("%d", resultado);
	
	return 0;
}

int factorial(int numero){
	if(numero<=1){
		return 1;
	}
	else
		return numero*factorial(numero-1);
}
