//Obtener la cantidad de vocales que existe en una palabra.

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char vocales[10] = {'A','E','I','O','U','a','e','i','o','u'};
	char palabra[100];
	int longitud = 0, cantidad_vocales = 0, indice = 0;

while(indice != 2){
	indice = 0;
	printf("\nElija una opcion:\n1) Calcular numero de vocales en UNA sola palabra.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);
	cantidad_vocales = 0;

	if(indice == 1){
		printf("Escribe tu palabra:\n");
		scanf("%s",&palabra);
		fflush(stdin);
		longitud = strlen(palabra);
	
		for(int i=0; i<longitud; i++){
			for(int j=0; j<10; j++){
				if(palabra[i] == vocales[j])
				cantidad_vocales++;
			}
		}
		printf("\nHay %d vocales en la palabra.\n\n",cantidad_vocales);
	
	}
}	
	
return 0;	
}





