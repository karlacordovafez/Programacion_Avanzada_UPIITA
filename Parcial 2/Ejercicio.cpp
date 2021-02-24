#include <stdio.h>
#include <stdlib.h>

//ARITMÉTICA DE APUNTADORES

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
	
	
	for(ifila=0; ifila< fila; ifila++){
		arreglo[ifila]=(int *)malloc(sizeof(int)*columna); 
		for(jcolumna=0; jcolumna< columna; jcolumna++){
			printf("arr[%d][%d]= direccion:  ",ifila,jcolumna);
			scanf("%d", arreglo[i]+j);
		} 
	}
	
	printf("\nNUEVOS DATOS:\n");

	for(ifila=0; ifila< fila; ifila++){
		for(jcolumna=0; jcolumna< columna; jcolumna++){
			printf("arr[%d][%d]= direccion: %d ",ifila,jcolumna,&arreglo[ifila][jcolumna]);
			scanf("%d", &arreglo[ifila][jcolumna]);
		} 
	}	

/*	
	printf("Metodo con aritmetica de punteros (guardar)\n");
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] =",i);
		scanf("%d",(apuntador+i));
	}
	
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] = %d direccion: %d\n",i,*(apuntador+i),(apuntador+i));
		//en este caso si es válido el uso del asterisco para ver el valor en el puntero.
	}*/
	
	/*
	printf("%d\n",apuntador[0]); //valor del apuntador en esa posicion
	printf("%d\n",*apuntador);  //nos da el valor del apuntador peeero...
	//como el asterisco indica que es de tipo apuntador, no acepta [i]
	printf("%d\n",&apuntador[0]); //dirección del apuntador
	*/
	return 0;
}
