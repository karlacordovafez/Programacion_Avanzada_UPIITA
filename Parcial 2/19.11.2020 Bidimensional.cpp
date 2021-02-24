//Aritmética de punteros BIDIMENSIONAL
//arreglos dinamicos bidimensional
#include<stdio.h>
#include<stdlib.h>

int main(){
	int **arreglo;
	int fila=0, columna=0, ifila=0, jcolumna=0;
	printf("Arreglos bidimensional: \n");
	printf("Ingrese el tamanio de la fila: \n");
	scanf("%d",&fila);
	printf("Ingrese el tamanio de la columna: \n");
	scanf("%d",&columna);	
	
	//solicitar memoria
	arreglo=(int **)malloc(sizeof(int*)*fila);
	
	
	/* FORMA BÁSICA */
	for(ifila=0; ifila< fila; ifila++){
		arreglo[ifila]=(int *)malloc(sizeof(int)*columna); 
		for(jcolumna=0; jcolumna< columna; jcolumna++){
			printf("arr[%d][%d]=",ifila,jcolumna);
			scanf("%d", &arreglo[ifila][jcolumna]);
		} 
	}
	printf("LEEMOS XP:\n");
		for(ifila =0 ; ifila< fila; ifila++){
			for(jcolumna=0; jcolumna< columna; jcolumna++){
				printf("arr[%d][%d]= %d direccion: %d\n",ifila,jcolumna,arreglo[ifila][jcolumna],&arreglo[ifila][jcolumna]);
			}
	}
	printf("\n\n");
	
	
	/* MODO ARITMÉTICO */
	for(ifila=0; ifila< fila; ifila++){
		for(jcolumna=0; jcolumna< columna; jcolumna++){
			printf("arr[%d][%d]=",ifila,jcolumna);
			scanf("%d", arreglo[ifila]+jcolumna);
		}
	}
	
	printf("LEEMOS XP:\n");
		for(ifila =0 ; ifila< fila; ifila++){
			for(jcolumna=0; jcolumna< columna; jcolumna++){
				printf("arr[%d][%d]= %d direccion: %d\n",ifila,jcolumna,*(arreglo[ifila]+jcolumna),arreglo[ifila]+jcolumna);
			}
	}


	return 0;
}
