//ARREGLOS

//tipo_dato Arreglo [filas][columnas]
#include <stdlib.h>
#include <stdio.h>

#define tamfila 5
#define tamcol 3

int main(){
	int arr_bidimensional[tamfila][tamcol];
	int fila, columna;
	
	printf("Ejemplo bidimensional:\n");
	printf("Llena la matriz\n");
	
	for(fila=0; fila<tamfila; fila++){
		printf("\n");
		for(columna=0; columna<tamcol; columna++){
			arr_bidimensional[fila][columna]=fila+columna;	
			printf("[fila %d][col %d]=%d\t",fila,columna,arr_bidimensional[fila][columna]);
		}
	}
	
	
	
}
