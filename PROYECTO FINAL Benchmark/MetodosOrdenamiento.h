#include <stdlib.h>
#include <stdio.h>

int burbuja(int *arreglo, int longitud){
	int aux, contador = 0;
	for(int i=0; i<longitud; i++){
		for(int j=0; j<longitud-1; j++){
			aux = *(arreglo+j);
			if(*(arreglo+j) > *(arreglo+j+1) ){
				*(arreglo+j) = *(arreglo+j+1);
				*(arreglo+j+1) = aux;
			}
		}
		contador++;
	}
	return contador;	
}

int seleccion(int *arreglo, int longitud){
	int aux = 0, contador = 0;
	for(int i=0; i<longitud-1; i++){
		for(int j=i+1; j<longitud; j++){
			if(*(arreglo+i) > *(arreglo+j)){
				aux = *(arreglo+i);
				*(arreglo+i) = *(arreglo+j);
				*(arreglo+j) = aux;
			}
		}
		contador++;
	}
	return contador;
}

int insercion(int *arreglo, int longitud){
	int aux, j, contador = 0;
	for(int i=1; i<longitud; i++){
		aux = *(arreglo+i);
		j=i-1;
		while(j>=0 && *(arreglo+j)>aux){
			*(arreglo+j+1) = *(arreglo+j);
			j--;
		}
		*(arreglo+j+1) = aux;
		contador++;
	}
	return contador;
}

int quicksort(int *arreglo, int inicio, int longitud, int contador){
	contador++;
	int i = inicio, j = longitud, tmp;
	int p = arreglo[(inicio+longitud)/2];
	while(i <= j){
		while(*(arreglo+i) < p) i++;
		while(*(arreglo+j) > p) j--;
		if(i <= j){
			tmp = *(arreglo+i);
			*(arreglo+i) = *(arreglo+j);
			*(arreglo+j) = tmp;
			i++; j--;
		}
	}
	if(inicio < j){
		return quicksort(arreglo, inicio,j,contador);
	}
	if(i < longitud){
		contador++;
		return quicksort(arreglo, i,longitud,contador);
	}
	return contador;
}

int shell(int *arreglo, int longitud){
	int aux, contador = 0, intervalo;
	intervalo = longitud/2;
	while(intervalo > 0){
		for(int i=intervalo; i<longitud; i++){
			int j = i;
			aux = *(arreglo+i);
			while((j>=intervalo) && (*(arreglo+j-intervalo)>aux)){
				*(arreglo+j) = *(arreglo+j-intervalo);
				j = j-intervalo;
			}
			*(arreglo+j) = aux;
 		}
	intervalo /= 2;
	contador++;
	}
	return contador;
}

void ImprimirArreglo(int *arreglo, int longitud){
	for (int i=0; i<longitud; i++) {
		printf("[%d]",*(arreglo+i));
    }
}
