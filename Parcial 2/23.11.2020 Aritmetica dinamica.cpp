#include <stdio.h>
#include <stdlib.h>

//ARITMÉTICA DE APUNTADORES

int main(){
	int tam = 0;
	int *apuntador;
	printf("Ingresa tamaño del arreglo:\n");
	scanf("%d",&tam);
	
	//solicitar memoria
	apuntador = (int*)malloc(sizeof(int)*tam);
	
	//llenar arreglo VIEJA ESCUELA
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] = ",i);
		scanf("%d",&apuntador[i]);
	}
	
	//leer for
	for(int i=0; i<tam; i++){
		printf("[%d] = %d direccion: %d\n",i,apuntador[i],&apuntador[i]);
	}
	
	printf("Metodo con aritmetica de punteros (guardar)\n");
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] =",i);
		scanf("%d",(apuntador+i));
	}
	
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] = %d direccion: %d\n",i,*(apuntador+i),(apuntador+i));
		//en este caso si es válido el uso del asterisco para ver el valor en el puntero.
	}
	
	/*
	printf("%d\n",apuntador[0]); //valor del apuntador en esa posicion
	printf("%d\n",*apuntador);  //nos da el valor del apuntador peeero...
	//como el asterisco indica que es de tipo apuntador, no acepta [i]
	printf("%d\n",&apuntador[0]); //dirección del apuntador
	*/
	return 0;
}
