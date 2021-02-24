//Crear una matriz inversa.

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>


int main(){
	int longitud = 0, indice = 0, salida = 0;
	float pivote_anterior = 1, aux = 0;
	
	
while(indice != 2){
	indice = 0;
	printf("\nElija una opcion:\n1) Crear Matriz inversa.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		longitud = 0;	
		printf("Introduzca el numero de filas = columnas:\n");
		scanf("%d",&longitud);
		fflush(stdin);
	
		float matriz[longitud][longitud] = {};
		float inversa[longitud][longitud] = {};

		//INTRODUCIR DATOS DE MATRIZ	
		printf("\nEscribe los datos de la matriz:\n");	
		for(int fila=0; fila<longitud; fila++){
			for(int columna=0; columna<longitud; columna++){
				printf("Dato en [%d][%d]: ",fila,columna);
				scanf("%f",&matriz[fila][columna]);
			}
		}
	
		//IMPRESION DE LA MATRIZ
		for(int fila=0; fila<longitud; fila++){
			printf("\n");
			for(int columna=0; columna<longitud; columna++){
				printf("[ %.2f ]\t",matriz[fila][columna]);
			}
		}
	
		//MATRIZ IDENTIDAD
			for(int fila=0; fila<longitud; fila++){
				for(int columna=0; columna<longitud; columna++){
					inversa[fila][columna] = (fila == columna) ? 1:0;
				}
			}

		//MÉTODO DE MONTANTE
		for(int pivote=0; pivote<longitud; pivote++){
			if(matriz[pivote][pivote] == 0){
				salida = 1;
							break;				
			}

			for(int i=0; i<longitud; i++){   //matriz[J][i]
				if(i != pivote){
					aux = matriz[i][pivote];			
					for(int j=0; j<longitud; j++){
						matriz[i][j] = (matriz[pivote][pivote]*matriz[i][j] - aux*matriz[pivote][j])
						/pivote_anterior;
						inversa[i][j] = (matriz[pivote][pivote]*inversa[i][j] - aux*inversa[pivote][j])/pivote_anterior;
					}
				}
			}		
			pivote_anterior = matriz[pivote][pivote];
			if(pivote_anterior == 0)
			break;
		}
	
	 if(salida == 1)
	 printf("EL PROGRAMA NO PUEDE CALCULAR LA INVERSA");
	 
	 else{
		aux = matriz[0][0];

		printf("\n\nMATRIZ INVERSA:\n");
		//IMPRESIÓN MATRIZ INVERSA
		for(int fila=0; fila<longitud; fila++){
			printf("\n");
			for(int columna=0; columna<longitud; columna++){
				printf("[ %.2f ]\t",inversa[fila][columna]/aux);
			}
		}
	}
	printf("\n\n");
	}	
}
	
return 0;	
}
