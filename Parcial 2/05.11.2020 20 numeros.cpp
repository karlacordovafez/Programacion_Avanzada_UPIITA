//1) Crear un programa que lea los primeros 20 numeros
//Cada numeropar debe multiplicar por 4
#include <stdlib.h>
#include <stdio.h>

void funcionreferencia(int *valor);

int main(){
	
	int numeros[20];
	
	for(int i=0;i<20;i++){
		numeros[i]=i+1;
		printf("%d ",numeros[i]);
		if(numeros[i]%2 == 0)
			funcionreferencia(&numeros[i]);
	}
	
	printf("\n");
	for(int i=1;i<=20;i++){
		printf("%d ",numeros[i-1]);
	}	
	
	return 0;
}

void funcionreferencia(int *valor){
	*valor = *valor * 4;
}
