//Crear un programa que dibuje un triangulo equilatero.

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>


int main(){
	
int indice, longitud, tam_fila = 0, tam_columna = 0, posicion = 0;
	
while(indice != 2){
	indice = 0;
	printf("\nElija una opcion:\n1) Crear Triangulo.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		longitud = 0;
		printf("Introduzca el tamano de la base: ");
		scanf("%d",&longitud);
		fflush(stdin);
		
		tam_fila = longitud;
		tam_columna = longitud+(longitud-1);
		char triangulo[tam_fila][tam_columna];
	
		for(int fila=0; fila<tam_fila; fila++){	
		posicion = 0;	
			for(int columna=0; columna<tam_columna; columna++){	
				if(columna >= (tam_fila-fila-1)){
					posicion++;
					triangulo[fila][columna] = (columna<=(tam_columna - tam_fila + fila)) ?
					 ((posicion%2 != 0) ? '*':' '):' ';		
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
		printf("\n\n");
	}
}
}

