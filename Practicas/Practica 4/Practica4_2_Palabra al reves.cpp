//Crear un programa que cree un arreglo de caracteres y que
//ingrese la palabra y la muestre alreves HOLA ALOH

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char palabra[250];
	char invertida[250];
	int longitud, posicion, indice = 0;

while(indice != 2){
	indice = 0; longitud = 0; posicion = 0;
	char invertida[250] ={};

	printf("\nElija una opcion:\n1) Invertir una palabra.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		printf("Escribe tu palabra:\n");
		scanf("%s",&palabra);
		fflush(stdin);
		longitud = strlen(palabra);
	
		for(int i=longitud-1; i>=0; i--){
			invertida[posicion] = palabra[i];
			posicion++;
		}
		
		printf("\n\n%s\n",invertida);
		
		strrev(palabra);
		printf("\n%s\n\n",palabra);
	
	}
}	
	
return 0;	
}
