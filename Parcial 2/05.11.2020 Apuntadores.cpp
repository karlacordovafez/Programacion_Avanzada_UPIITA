//Ejemplo paso por valor y paso por referencia

#include <stdlib.h>
#include <stdio.h>

void funcionvalor(int valor);
void funcionreferencia(int *valor);

int main(){
	int numero = 20;
	
	printf("\n1. El numero es: %d",numero);
	funcionvalor(numero);
	printf("\n2. El numero es: %d",numero);	
	funcionreferencia(&numero);
	printf("\n3. El numero es: %d",numero);
	
	return 0;
}


void funcionvalor(int valor){
	valor = valor*2;
	
}

void funcionreferencia(int *valor){
	*valor = *valor *2;
	
}
