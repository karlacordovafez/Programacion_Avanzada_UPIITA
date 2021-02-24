//ARREGLOS MATRICES

#include <stdlib.h>
#include <stdio.h>

void MIdentidad(int longitud);
void Triangulo(int longitud);
void SumaMatriz(int tam_fila,int tam_columna);

int main(){
	
	int indice = 0, longitud = 0;
	int tam_fila = 0,tam_columna = 0;
	
while(indice != 4){
	printf("\n\n\nElija una opcion:\n1) Matriz Identidad.\n2) Triangulo.\n");
	printf("3) Suma de matrices.\n4) Salir.\n");
	scanf("%i",&indice);
	
	switch(indice){
		case 1:
			system("cls");
			printf("Introduzca el numero de filas/columnas: ");
			scanf("%d",&longitud);
			MIdentidad(longitud);
			break;
					
		case 2:
			system("cls");
			printf("Introduzca el tamano de la base: ");
			scanf("%d",&longitud);
			Triangulo(longitud);	
		
			break;
			
		case 3:
			system("cls");
			printf("Introduzca cantidad de filas y columnas: ");
			scanf("%d %d",&tam_fila,&tam_columna);
			SumaMatriz(tam_fila,tam_columna);
			break;	
	}
}
	return 0;
}



void MIdentidad(int longitud){
	int MI[longitud][longitud];
	
	for(int fila=0; fila<longitud; fila++){
		for(int columna=0; columna<longitud; columna++){
				MI[fila][columna] = (fila == columna) ? 1:0;
		}
	}

	for(int fila=0; fila<longitud; fila++){
		printf("\n");
		for(int columna=0; columna<longitud; columna++){
				printf("[ %d ]\t",MI[fila][columna]);
		}
	}
}



void Triangulo(int longitud){
	
	int tam_fila = longitud;
	int tam_columna = longitud+(longitud-1);
	int posicion = 0;
	char triangulo[tam_fila][tam_columna];
	
	for(int fila=0; fila<tam_fila; fila++){	
	posicion = 0;	
		for(int columna=0; columna<tam_columna; columna++){	
			if(columna >= (tam_fila-fila-1)){
				posicion++;
				triangulo[fila][columna] = (columna<=(tam_columna - tam_fila + fila)) ? ((posicion%2 != 0) ? '*':' '):' ';		
			}
			else
				triangulo[fila][columna] = ' ';
		}
	}
	
	for(int fila=0; fila<tam_fila; fila++){	
		printf("\n");
		for(int columna=0; columna<tam_columna; columna++){
			printf("%c",triangulo[fila][columna]);
		}
	}	
}



void SumaMatriz(int tam_fila,int tam_columna){
	int matrizA[tam_fila][tam_columna];
	int matrizB[tam_fila][tam_columna];
	int resultado[tam_fila][tam_columna];
		
	printf("\nEscribe los datos de la matriz A:\n");	
	for(int fila=0; fila<tam_fila; fila++){
		for(int columna=0; columna<tam_columna; columna++){
			printf("Dato en [%d][%d]: ",fila,columna);
			scanf("%d",&matrizA[fila][columna]);
		}
	}
	
	printf("\nEscribe los datos de la matriz B:\n");	
	for(int fila=0; fila<tam_fila; fila++){
		for(int columna=0; columna<tam_columna; columna++){
			printf("Dato en [%d][%d]: ",fila,columna);
			scanf("%d",&matrizB[fila][columna]);
		}
	}
	
	for(int fila=0; fila<tam_fila; fila++){
		for(int columna=0; columna<tam_columna; columna++){
			resultado[fila][columna] = matrizA[fila][columna] + matrizB[fila][columna];
		}
	}
// -------------------------------------------------------------------
	
	for(int fila=0; fila<tam_fila; fila++){
		printf("\n");
		for(int columna=0; columna<tam_columna; columna++){
			printf("[ %d ]\t",matrizA[fila][columna]);
		}
	}

	printf("\n+");
	for(int fila=0; fila<tam_fila; fila++){
		printf("\n");
		for(int columna=0; columna<tam_columna; columna++){
			printf("[ %d ]\t",matrizB[fila][columna]);
		}
	}
	
	printf("\n=");
	for(int fila=0; fila<tam_fila; fila++){
		printf("\n");
		for(int columna=0; columna<tam_columna; columna++){
			printf("[ %d ]\t",resultado[fila][columna]);
		}
	}
	printf("\n\n");
}

