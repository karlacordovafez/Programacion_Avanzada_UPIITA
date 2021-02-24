//Crear un programa que cree dos arreglos Que se cambie los valores de la 
//matriz A a la Matriz B y los valores de la Matriz B se guarden en la matriz A

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int indice = 0, filas, columnas;

while(indice != 3){
	system("cls");
	indice = 0; filas = 0; columnas = 0;
	
	printf("Introduzca el numero de filas y columnas de ambas matrices:\nfilas:");
	scanf("%d",&filas);
	fflush(stdin);
	printf("columnas:");
	scanf("%d",&columnas);
	fflush(stdin);
	
	float matrizA[filas][columnas] = {};
	float matrizB[filas][columnas] = {};
	float aux[filas][columnas] = {};

	//LLENADO DE MATRICES
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Matriz A: dato en [%d][%d] = ",i,j);
			scanf("%f",&matrizA[i][j]);	fflush(stdin);
		}
	} printf("\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Matriz B: dato en [%d][%d] = ",i,j);
			scanf("%f",&matrizB[i][j]);	fflush(stdin);
		}
	}	
	
			//IMPRESION DE LAS MATRICES
		printf("\nMatriz A\n");
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("[%.2f]\t",matrizA[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz B\n");
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("[%.2f]\t",matrizB[i][j]);
			}
			printf("\n");
		}
	
while(indice != 2 && indice != 3){ //MATRICES OPERANDO

	printf("\n\n\nElija una opcion:\n1) Intercambiar matrices.\n2) Cambiar datos de matrices.\n");
	printf("3) Salir\n");
	scanf("%d",&indice);
	fflush(stdin);
	
	if(indice == 1 || indice == 2){
		
		//INTERCAMBIO DE VALORES
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				aux[i][j] = matrizA[i][j];
				matrizA[i][j] = matrizB[i][j];
				matrizB[i][j] = aux[i][j];
			}
		}
		
		printf("\nIntercambiando valores de las matrices...\n\nMatriz A\n");
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("[%.2f]\t",matrizA[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz B\n");
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("[%.2f]\t",matrizB[i][j]);
			}
			printf("\n");
		}
		
	}
}
}
	return 0;
}

