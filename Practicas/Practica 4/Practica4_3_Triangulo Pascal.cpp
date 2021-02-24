//Crear un programa que dibuje un triangulo equilatero.

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){
	
int indice, longitud, tam_fila = 0, tam_columna = 0, posicion = 0;
	
while(indice != 2){
	indice = 0;
	printf("\nElija una opcion:\n1) Crear Triangulo de Pascal.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		longitud = 0;
		printf("Introduzca numero de filas que quiere visualizar: ");
		scanf("%d",&longitud);
		fflush(stdin);
		
		tam_fila = longitud;
		tam_columna = longitud+(longitud-1);
		int triangulo[tam_fila][tam_columna] = {};
	
		for(int fila=0; fila<tam_fila; fila++){	
			for(int columna=0; columna<tam_columna; columna++){	
			
				if(columna == (tam_fila-fila-1) || 
				columna == (tam_columna - tam_fila + fila))
					triangulo[fila][columna] = 1;
				else
					triangulo[fila][columna] = 0;	

				if(columna > (tam_fila-fila-1) && columna < 
				(tam_columna - tam_fila + fila) && fila>0)
				triangulo[fila][columna] =
				 triangulo[fila-1][columna-1]+triangulo[fila-1][columna+1];		
			}
		}
	
		for(int fila=0; fila<tam_fila; fila++){	
			printf("\n");
			for(int columna=0; columna<tam_columna; columna++){
				(triangulo[fila][columna] == 0) ? printf(" ") : 
				printf("%d",triangulo[fila][columna]);
			}
		}		
		printf("\n\n");
	}
}
return 0;
}

