#include <stdio.h>
#include <stdlib.h>

void EscribirArchivo(int longitud, struct tiempo Tiempos[]){
	
	FILE archivo = fopen("TiemposEjecucion.txt","a+");
	if(archivo != NULL){
		int aux, j;
		for(int i=1; i<longitud; i++){
			aux = *(arreglo+i);
			j=i-1;
			while(j>=0 && *(arreglo+j)>aux){
				*(arreglo+j+1) = *(arreglo+j);
				j--;
			}
			*(arreglo+j+1) = aux;
		}
	}
	else
		printf("No se pudo abrir el archivo!");
	fclose(archivo);
}

