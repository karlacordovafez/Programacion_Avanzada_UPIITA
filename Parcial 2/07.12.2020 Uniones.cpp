/*
UNIONES
Son similarees a las estructuras en cuanto que agrupan a una serie de variables
pero la forma de almacenar es diferente.

Una estructura permite almacenar variables en posiciones continuas de memoria.
Las uniones se declaran con (union), igual almacenan su información como las estructuras
pero con la diferencia que todos sus miembros se solapan en la misma posición.

El tamaño de una unión se determina: analizando el tamaño de cada variable
y la variable que ocupe más tamaño es la que se considera como el tamaño final de la union.

Razón principal de utilizar unión: ahorrar memoria.
Se aplican los mismos operadores que las estructuras.
*/


#include <stdlib.h>
#include <stdio.h>

#define tamanio 3

union fecha{
	int dia;
	int mes;
//	char nombre[25];
	int anio;
};

int main(){
	union fecha *dinamico;
	union fecha estatico[tamanio];
	
	dinamico = (union fecha*)malloc(sizeof(union fecha)*tamanio);
	//RELLENAR
	for(int i=0; i<tamanio; i++){
		printf("Dia: ");
		scanf("%d",&estatico[i].dia);
		printf("Mes: ");
		scanf("%d",&estatico[i].mes);
		printf("A\244o: ");
		scanf("%d",&estatico[i].anio);
		printf("\n");
	}
	//DINAMICO
	for(int i=0; i<tamanio; i++){
		printf("Dia: ");
		scanf("%d",&(dinamico+i)->dia);
		printf("Mes: ");
		scanf("%d",&(dinamico+i)->mes);
		/*
		printf("Ingresa nombre:");
		scanf("%s",&*(dinamico+i)->nombre);
		*/
		printf("A\244o: ");	
		scanf("%d",&(dinamico+i)->anio);
		printf("\n");
	}
	printf("\nARREGLO ESTATICO:\n");
	for(int i=0; i<tamanio; i++){
		printf("Fecha [%d]: %d / %d / %d\n",i,estatico[i].dia,estatico[i].mes,estatico[i].anio);
		printf("\n");
	}	
	printf("\nARREGLO DINAMICO:\n");	
	for(int i=0; i<tamanio; i++){
		printf("Fecha [%d]: %d / %d / %d\n",i,(dinamico+i)->dia,(dinamico+i)->mes,(dinamico+i)->anio);
		printf("\n");
	}	
	return 0;
}
