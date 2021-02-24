#include <stdio.h>
#include <stdlib.h>

int main(){
	int ***arreglo;
	int profundidad = 0, filas=0, columnas=0;
	printf("Arreglos bidimensional: \n");
	printf("Ingrese el tamanio de la profundidad: \n");
	scanf("%d",&profundidad);
	printf("Ingrese el tamanio de la fila: \n");
	scanf("%d",&filas);
	printf("Ingrese el tamanio de la columna: \n");
	scanf("%d",&columnas);	
	
	//solicitar memoria
	arreglo=(int***)malloc(sizeof(int**)*profundidad);
	
	/* FORMA BÁSICA */
	for(int k=0; k<profundidad; k++){
		arreglo[k]=(int**)malloc(sizeof(int*)*filas); 
		for(int i=0; i<filas; i++){
			arreglo[k][i]=(int*)malloc(sizeof(int)*columnas); 
			for(int j=0; j<columnas; j++){
				printf("arr[%d][%d][%d] = ",k,i,j);
				scanf("%d",&arreglo[k][i][j]);
			}	
		}
	}	
	printf("\n\n");
	
	for(int k=0; k<profundidad; k++){
		printf("\nCAPA %d\n",k);
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("arr[%d][%d][%d] = %d direccion: %d\t",k,i,j,arreglo[k][i][j],&arreglo[k][i][j]);
			}
			printf("\n");	
		}
	}
	printf("\n\n");
	
	/* FORMA ARITMÉTICA */	
	for(int k=0; k<profundidad; k++){
	//	arreglo[k]=(int**)malloc(sizeof(int*)*filas);  estos irían si no se hubiese creado la longitud antes
		for(int i=0; i<filas; i++){
	//		arreglo[k][i]=(int*)malloc(sizeof(int)*columnas); 
			for(int j=0; j<columnas; j++){
				printf("arr[%d][%d][%d] = ",k,i,j);
				scanf("%d",(arreglo[k][i]+j));
			}	
		}
	}	
	printf("\n\n");
	
	for(int k=0; k<profundidad; k++){
		printf("\nCAPA %d\n",k);
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("arr[%d][%d][%d] = %d direccion: %d\t",k,i,j,*(arreglo[k][i]+j),(arreglo[k][i]+j));
			}
			printf("\n");	
		}
	}
	
return 0;	
}
