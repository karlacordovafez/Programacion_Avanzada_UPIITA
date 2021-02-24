//Crear una matriz identidad.

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){
	
int indice, longitud;
	
while(indice != 2){
	indice = 0;
	printf("\nElija una opcion:\n1) Crear Matriz identidad.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		longitud = 0;
		printf("Introduzca el numero de filas/columnas: ");
		scanf("%d",&longitud);
		fflush(stdin);
		int MatrizID[longitud][longitud];
	
		for(int fila=0; fila<longitud; fila++){
			for(int columna=0; columna<longitud; columna++){
				MatrizID[fila][columna] = (fila == columna) ? 1:0;
			}
		}

		for(int fila=0; fila<longitud; fila++){
			printf("\n");
			for(int columna=0; columna<longitud; columna++){
				printf("[ %d ]\t",MatrizID[fila][columna]);
			}
		}
	printf("\n\n");
	}
}
return 0;
}
