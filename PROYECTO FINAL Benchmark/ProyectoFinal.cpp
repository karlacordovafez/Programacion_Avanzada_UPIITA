#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include "MetodosOrdenamiento.h"

void LlenarArreglo(int longitud);
void Copiar(int longitud);
void EscribirArchivo(int longitud);

struct tiempo{
	char metodo[20]= "";
	double time;
	int iteracion;
};
int *arreglo, *aux;
struct tiempo Tiempos[5];


int main(){
	int longitud, error, menu, iter;
	double segundos;
	clock_t tiempo_inicio, tiempo_final;
	
	do{
		do{		//CREACIÓN DEL ARREGLO
			printf("Elija longitud del arreglo de numeros aleatorios: ");
			error = scanf("%d",&longitud);
			fflush(stdin);
			if(error == 0)
				printf("Dato incorrecto!\n");
		}while(error == 0);	
		arreglo = (int*)malloc(sizeof(int)*longitud);
		aux = (int*)malloc(sizeof(int)*longitud);
		LlenarArreglo(longitud);
		for(int i=0; i<5; i++)
			strcpy(Tiempos[i].metodo,"");
		do{
			do{		//MÉTODOS DE ORDENAMIENTO
				system("cls");
				printf("ARREGLO ORIGINAL:\n");
				ImprimirArreglo(arreglo,longitud);
				printf("\n\nElija el metodo de ordenamiento:\n");
				printf("1. Burbuja\n");
				printf("2. Seleccion\n");
				printf("3. Insercion\n");
				printf("4. QuickSort\n");
				printf("5. Shell\n");
				printf("6. Cambiar arreglo\n");
				printf("0. Salir\n");
				error = scanf("%d",&menu);
				fflush(stdin);
				if(error == 0 || menu<0 || menu>6 ){
					printf("Seleccion incorrecta!\n");
					getch();
				}
			}while(error == 0);	
			Copiar(longitud);
			switch(menu){
				case 1:{
					tiempo_inicio = clock();
					iter = burbuja(aux,longitud);
					tiempo_final = clock();
					printf("\n\nARREGLO ORDENADO:\n");
					ImprimirArreglo(aux,longitud);
					segundos = (double)(tiempo_final - tiempo_inicio) / 1000;
					printf("\n\nTiempo de ejecucion: %.4f segundos\nIteraciones: %d",segundos,iter);
					strcpy(Tiempos[0].metodo,"Metodo Burbuja");
					Tiempos[0].time = segundos; Tiempos[0].iteracion = iter;
					break;
				}
				
				case 2:{
					tiempo_inicio = clock();
					iter = seleccion(aux,longitud);
					tiempo_final = clock();
					printf("\n\nARREGLO ORDENADO:\n");
					ImprimirArreglo(aux,longitud);
					segundos = (double)(tiempo_final - tiempo_inicio) / 1000;
					printf("\n\nTiempo de ejecucion: %.4f segundos\nIteraciones: %d",segundos,iter);
					strcpy(Tiempos[1].metodo,"Metodo de Seleccion");
					Tiempos[1].time = segundos; Tiempos[1].iteracion = iter;
					break;
				}
				
				case 3:{
					tiempo_inicio = clock();
					iter = insercion(aux,longitud);
					tiempo_final = clock();
					printf("\n\nARREGLO ORDENADO:\n");
					ImprimirArreglo(aux,longitud);
					segundos = (double)(tiempo_final - tiempo_inicio) / 1000;
					printf("\n\nTiempo de ejecucion: %.4f segundos\nIteraciones: %d",segundos,iter);
					strcpy(Tiempos[2].metodo,"Metodo de Insercion");
					Tiempos[2].time = segundos; Tiempos[2].iteracion = iter;
					break;
				}
				
				case 4:{
					tiempo_inicio = clock();
					iter = quicksort(aux,0,longitud,0);
					tiempo_final = clock();
					printf("\n\nARREGLO ORDENADO:\n");
					ImprimirArreglo(aux,longitud);
					segundos = (double)(tiempo_final - tiempo_inicio) / 1000;
					printf("\n\nTiempo de ejecucion: %.4f segundos\nIteraciones: %d",segundos,iter);
					strcpy(Tiempos[3].metodo,"Metodo QuickSort");
					Tiempos[3].time = segundos; Tiempos[3].iteracion = iter;
					break;
				}
				
				case 5:{
					tiempo_inicio = clock();
					iter = shell(aux,longitud);
					tiempo_final = clock();
					printf("\n\nARREGLO ORDENADO:\n");
					ImprimirArreglo(aux,longitud);
					segundos = (double)(tiempo_final - tiempo_inicio) / 1000;
					printf("\n\nTiempo de ejecucion: %.4f segundos\nIteraciones: %d",segundos,iter);
					strcpy(Tiempos[4].metodo,"Metodo Shell");
					Tiempos[4].time = segundos; Tiempos[4].iteracion = iter;
					break;
				}	
			}
			getch();
		}while(menu!=6 && menu!=0);
		EscribirArchivo(longitud);
	}while(menu!=0);
	return 0;	
}

void LlenarArreglo(int longitud){
	int P = 0, U = 10000;
    srand(time(NULL));   
	for (int i=0; i<longitud; i++) {
		*(arreglo+i) = P+(int)(((U-P+1.0)*rand())/(RAND_MAX+1.0));
    }
}

void Copiar(int longitud){
	for(int i=0; i<longitud; i++){
		*(aux+i) = *(arreglo+i);
	}
}

void EscribirArchivo(int longitud){
	struct tiempo Aux;
	FILE *archivo = fopen("TiemposEjecucion.txt","a+");
	for(int i=0; i<5-1; i++){
		for(int j=i+1; j<5; j++){
			if(Tiempos[i].time > Tiempos[j].time){
				Aux = Tiempos[i];
				Tiempos[i] = Tiempos[j];
				Tiempos[j] = Aux;
			}
		}
	}
	if(archivo != NULL){
		fprintf(archivo,"ARREGLO DE LONGITUD %d\n",longitud);
		for(int i=0; i<5; i++){
			if(strcmp(Tiempos[i].metodo,"")!=0){
				fprintf(archivo,"%s, Tiempo de ejecución: %f s. Iteraciones: %d\n",
				Tiempos[i].metodo,Tiempos[i].time,Tiempos[i].iteracion);	
			}
		}	
	}
	else
		printf("No se pudo abrir el archivo!");
	fclose(archivo);
}
