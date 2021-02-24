//Crear un programa que sume, reste y multiplique 2 matrices.a cada resultado aplicar la transpuesta

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

void SumaMatriz(int tam_fila,int tam_columna);

int main(){
	
	int indice = 0, menu = 0, longitud = 0;
	int tam_filaA,tam_columnaA, tam_filaB, tam_columnaB;

while(indice != 5){
	system("cls");
	indice = 0; tam_filaA = 0; tam_columnaA = 0; tam_filaB = 0; tam_columnaB = 0;
	
	printf("Introduzca cantidad de filas y columnas de matriz A: ");
	scanf("%d %d",&tam_filaA,&tam_columnaA);
	fflush(stdin);
	
	printf("Introduzca cantidad de filas y columnas de matriz B: ");
	scanf("%d %d",&tam_filaB,&tam_columnaB);
	fflush(stdin);
	
	int matrizA[tam_filaA][tam_columnaA] = {};
	int matrizB[tam_filaB][tam_columnaB] = {};

	//LLENADO DE LAS MATRICES
	printf("\nEscribe los datos de la matriz A:\n");	
	for(int fila=0; fila<tam_filaA; fila++){
		for(int columna=0; columna<tam_columnaA; columna++){
			printf("Dato en [%d][%d]: ",fila,columna);
			scanf("%d",&matrizA[fila][columna]);
		}
	}
	fflush(stdin);
	
	printf("\nEscribe los datos de la matriz B:\n");	
	for(int fila=0; fila<tam_filaB; fila++){
		for(int columna=0; columna<tam_columnaB; columna++){
			printf("Dato en [%d][%d]: ",fila,columna);
			scanf("%d",&matrizB[fila][columna]);
		}
	}	
	fflush(stdin);
	
while(indice != 4 && indice != 5){ //MATRICES OPERANDO

		//IMPRESION DE LAS MATRICES
	printf("\nMatriz A\n");
	for(int fila=0; fila<tam_filaA; fila++){
		printf("\n");
		for(int columna=0; columna<tam_columnaA; columna++){
			printf("[ %d ]\t",matrizA[fila][columna]);
		}
	}
	
	printf("\n\nMatriz B\n");
	for(int fila=0; fila<tam_filaB; fila++){
		printf("\n");
		for(int columna=0; columna<tam_columnaB; columna++){
			printf("[ %d ]\t",matrizB[fila][columna]);
		}
	}

	printf("\n\n\nElija una opcion:\n1) Sumar matrices.\n2) Restar matrices.\n");
	printf("3) Multiplicar matrices.\n4) Cambiar matrices.\n5) Salir.");
	scanf("%d",&indice);
	fflush(stdin);
	
	if(indice == 1 || indice == 2){
		//SUMA Y RESTA
		if((tam_filaA == tam_filaB) && (tam_columnaA == tam_columnaB)){
				int resultado[tam_filaA][tam_columnaA];

				for(int fila=0; fila<tam_filaA; fila++){
				for(int columna=0; columna<tam_columnaA; columna++){
					resultado[fila][columna] = (indice == 1) ? matrizA[fila][columna] + matrizB[fila][columna]:
					matrizA[fila][columna] - matrizB[fila][columna];
				}
			}
			system("cls");
			(indice == 1) ? printf("\n\nResultado de la SUMA =") : printf("Resultado de la RESTA =");
			for(int fila=0; fila<tam_filaA; fila++){
				printf("\n");
				for(int columna=0; columna<tam_columnaA; columna++){
					printf("[ %d ]\t",resultado[fila][columna]);
				}
			}
			//TRANSPUESTA
			(indice == 1) ? printf("\n\nTranspuesta de la SUMA =") : printf("\n\nTranspuesta de la RESTA =");
			for(int columna=0; columna<tam_columnaA; columna++){
				printf("\n");
				for(int fila=0; fila<tam_filaA; fila++){
					printf("[ %d ]\t",resultado[fila][columna]);
				}
			}
			printf("\n\n");
		}
		else{
			system("cls");
			printf("\n\nNO SE PUEDE, el tamano de las matrices debe ser igual!\n\n");
		}
	}
	
	if(indice == 3){	
	//MULTIPLICACION	
		if(tam_columnaA == tam_filaB){
			int resultado[tam_filaA][tam_columnaB];
		
			for(int fila=0; fila<tam_filaA; fila++){
				for(int columna=0; columna<tam_columnaB; columna++){
					resultado[fila][columna] = 0;
					for(int posicion=0; posicion<tam_columnaA; posicion++){
						resultado[fila][columna] = resultado[fila][columna] +
						matrizA[fila][posicion] * matrizB[posicion][columna];
					}
				}
			}
			system("cls");
			printf("\nResultado MULTIPLICACION =");
			for(int fila=0; fila<tam_filaA; fila++){
				printf("\n");
				for(int columna=0; columna<tam_columnaB; columna++){
					printf("[ %d ]\t",resultado[fila][columna]);
				}
			}
			//TRANSPUESTA
			printf("\n\nTranspuesta de la MULTIPLICACION =");
			for(int columna=0; columna<tam_columnaB; columna++){
				printf("\n");
				for(int fila=0; fila<tam_filaA; fila++){
					printf("[ %d ]\t",resultado[fila][columna]);
				}
			}
			printf("\n\n");
		}
		
		else{
			system("cls");
			printf("\n\nNO SE PUEDE, el numero de columnas de A debe ser igual al numero de filas de B!\n\n");
		}
	}
 }
}
	return 0;
}

