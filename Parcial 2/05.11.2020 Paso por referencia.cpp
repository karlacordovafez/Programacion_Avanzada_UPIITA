//1) Crear un programa que cambie un caracter
// 2) Crear función que intercambi los valores de dosvariables
#include <stdlib.h>
#include <stdio.h>

void funcionreferencia(char *valor);
void intercambioreferencia(int *valor,int *valor2);

int main(){
	
	int valor = 3, valor2 = 4;
	
	printf("Valores originales: %d %d\n",valor,valor2);
	intercambioreferencia(&valor,&valor2);
	printf("Valores intercambiados: %d %d\n",valor,valor2);	
	
	
	 
	char caracter = 'a';
	printf("\nEl caracter intercambiado es: %c",(funcionreferencia(&caracter),caracter));
	
	return 0;
}

void funcionreferencia(char *valor){
	*valor = 'z';
}


void intercambioreferencia(int *valor,int *valor2){
	int aux = *valor;
	*valor = *valor2;
	*valor2 = aux;
}
