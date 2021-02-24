//Aritmética de punteros
//Arreglos dinámicos

#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam = 0;
	int *arreglo;
	printf("Aritmetica de punteros:\n");
	printf("Ingresa el tama/244o del arreglo:\n");
	scanf("%d",&tam);
	arreglo = (int*)malloc(sizeof(int)*tam);
	
	//INGRESAMOS
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] = ",i);
		scanf("%d",(arreglo+i));
	}
	//LEEMOS
	for(int i=0; i<tam; i++){
		printf("Arreglo[%d] = %d\n",i,*(arreglo+i));
		//Con asterisco se muestra el valor en esa direccion
	}
	return 0;
}
