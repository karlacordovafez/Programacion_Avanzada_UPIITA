#include <stdlib.h>
#include <stdio.h>

int main(){
	
	char *aparr;
	int tam;
	printf("introduzca el tama\244o del arreglo\n");
	scanf("%d",&tam);fflush(stdin);
	
	aparr=(char*)malloc(sizeof(char)*tam);
	
	for(int i=0;i<tam;i++){
		scanf("%c",&aparr[i]);fflush(stdin);
		printf("arr[%d] = %c -> dir(%d , %o)\n",i,aparr[i],&aparr[i],&aparr[i]);
	}

	
	/*
	char *arreglodinamico;
	int tamano;
	printf("Introduzca longitud del arreglo:\n");
	scanf("%d",&tamano);
	arreglodinamico = (char*)malloc(sizeof(char)*tamano);
	
	for(int i=0;i<tamano; i++){
		printf("Guardando en [%d]", i);
		scanf("%c",&arreglodinamico[i]);
	}
	
	for(int i=0;i<tamano; i++){
		printf("Dir->%0x\t",&arreglodinamico[i]);
		printf("arr[%d] = %c\n",i,arreglodinamico[i]);
	}	
	*/
	return 0;
}
