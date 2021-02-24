#include <stdlib.h>
#include <stdio.h>
//BUSCAMINAS

char pistas(int x, int y, char **tablero, int dimension);


int main(){
	char **tablero;
	int *bombas;
	int dimension = 0, cantidad_bombas = 0, randomfila = 0,randomcolumna = 0;
	printf("BUSCAMINAS\n");
	printf("Ingrese el tama\244o de la matriz:\n");
	scanf("%d",&dimension);
	
	//Cantidad de bombas
	cantidad_bombas = dimension-1;
	
		tablero = (char**)malloc(sizeof(char*)*dimension); 
	
	for(int i=0; i<dimension; i++){
		tablero[i] = (char*)malloc(sizeof(char)*dimension); 
		for(int j=0; j<dimension; j++){
			*(tablero[i]+j) = '0';
		} 
	}
	
	
	for(int k=0; k<cantidad_bombas; k++){	
		randomfila = rand()%(dimension);
		randomcolumna = rand()%(dimension);
	//	printf("random: %d",random);
		*(tablero[randomfila]+randomcolumna) = '*';
	}

		
	for(int i=0; i<dimension; i++){
		for(int j=0; j<dimension; j++){
			if(*(tablero[i]+j)!='*'){
			*(tablero[i]+j) = pistas(i, j,tablero,dimension);
			}
		}
	} 

	printf("\n\n\n");	
	


	//IMPRIMIR BUSCAMINAS
	for(int i=0; i<dimension; i++){
		for(int j=0; j<dimension; j++){
			printf("[ %c ]\t",tablero[i][j]);
		} 
		printf("\n");
	}	
	
	
	return 0;
}


char pistas(int x, int y,char **tablero, int dimension){
	char pista;
	int bombas = 0;
	int x_menor = (x-1 < 0) ? 0 : x-1;
	int y_menor = (y-1 < 0) ? 0 : y-1;
	int x_mayor = (x+1 >= dimension) ? dimension-1 : x+1;
	int y_mayor = (y+1 >= dimension) ? dimension-1 : y+1;

	for(int i=x_menor;i<=x_mayor; i++){
		for(int j=y_menor;j<=y_mayor; j++){
				bombas = (tablero[i][j] == '*') ? bombas+1 : bombas;
		}
	}
	pista = '0'+bombas;
	
	return pista;
}
