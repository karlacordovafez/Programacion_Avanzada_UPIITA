#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void rellenar(int longitud);
void imprimir(int longitud);
void burbuja(int longitud);
void seleccion(int longitud);

int *arreglo, *arr_s;

int main(){
	int longitud = 0, menu = 1, error;
	
while(menu!=0){	
	system("cls");
	printf("\n1) Ordenar un arreglo de numeros enteros.");
	printf("\n0) Salir.");
	error = scanf("%d",&menu);
	fflush(stdin);
	
	if(menu == 1 && error!=0){
			printf("Introduce longitud del arreglo: ");
			scanf("%d",&longitud);
			fflush(stdin);
			arreglo = (int*)malloc(sizeof(int)*longitud);
			arr_s = (int*)malloc(sizeof(int)*longitud);
			rellenar(longitud);
			system("cls");
			printf("\nArreglo original:");
			imprimir(longitud);
			printf("\n\nPor metodo burbuja:\n");
			burbuja(longitud);	
			imprimir(longitud);
			printf("\n\nPor metodo de seleccion:\n");
			seleccion(longitud);
			imprimir(longitud);
			getch();
	}
}
	
	return 0;
}
// 1) --------------------------------------------------------------------
void rellenar(int longitud){
	int error;
	for(int i=0; i<longitud; i++){
		do{
			printf("Arreglo[%d] = ",i);
			error = scanf("%d",(arreglo+i));
			fflush(stdin);
			if(error == 0)
				printf("El dato es incorrecto!\n");
		}while(error==0);
		*(arr_s+i) = *(arreglo+i);
	}
}

void imprimir(int longitud){
		for(int i=0; i<longitud; i++){
		printf("[%d] ",*(arreglo+i));
	}
}

void burbuja(int longitud){
	int aux = 0;
	for(int i=0; i<longitud; i++){
		for(int j=0; j<longitud-1; j++){
			aux = *(arreglo+j);
			if(*(arreglo+j) > *(arreglo+j+1) ){
				*(arreglo+j) = *(arreglo+j+1);
				*(arreglo+j+1) = aux;
			}	
		}
	}
}

void seleccion(int longitud){
	int aux = 0;
	for(int i=0; i<longitud-1; i++){
		for(int j=i+1; j<longitud; j++){
			if(*(arr_s+i) > *(arr_s+j)){
				aux = *(arr_s+i);
				*(arr_s+i) = *(arr_s+j);
				*(arr_s+j) = aux;
			}
		}
	}
}
