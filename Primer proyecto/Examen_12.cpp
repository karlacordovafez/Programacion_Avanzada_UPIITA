
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int tam_fila = 0,tam_columna = 0;
	
	printf("Introduzca cantidad de filas y columnas de la matriz: ");
	scanf("%d %d",&tam_fila,&tam_columna);
	fflush(stdin);
	int matriz[tam_fila][tam_columna] = {};
	int resultado[tam_columna][tam_fila] = {};

	//LLENADO DE LAS MATRICES
	printf("\nEscribe los datos de la matriz:\n");	
	for(int fila=0; fila<tam_fila; fila++){
		for(int columna=0; columna<tam_columna; columna++){
			printf("Dato en [%d][%d]: ",fila,columna);
			scanf("%d",&matriz[fila][columna]);
		}
	}
	fflush(stdin);
	
	for(int fila=0; fila<tam_fila; fila++){
		printf("\n");
		for(int columna=0; columna<tam_columna; columna++){
			printf("[ %d ]\t",matriz[fila][columna]);
		}
	}
		
	for(int columna=0; columna<tam_columna; columna++){
		for(int fila=0; fila<tam_fila; fila++){
			resultado[columna][fila] = matriz[fila][columna];
		}
	}
	printf("\n\n");
	for(int fila=0; fila<tam_columna; fila++){
		printf("\n");
		for(int columna=0; columna<tam_fila; columna++){
			printf("[ %d ]\t",resultado[fila][columna]);
		}
	}
	printf("\n\n");
	
	return 0;
}
