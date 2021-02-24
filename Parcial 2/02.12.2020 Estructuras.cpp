
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define tam 2

#include <time.h>

struct electronico{
	char descripcion[20] = "";
	char marca[20];
	char modelo[20] = "";
	clock_t precio = NULL;
};



struct tiempos{
	char t_burbuja[20] = "";
//	char t_seleccion = "";
	char t_insercion[20] = "";
//	char t_quicksort = "";
//	char t_shell = "";
};

int main(){
	
	getch();
	struct tiempos uno;
	clock_t time = clock();
	
	sprintf(uno.t_burbuja, "%f segundos",(double)time/1000);
	printf("%s",uno.t_burbuja);
	printf("%s",uno.t_insercion);
	if(strcmp(uno.t_insercion,"")==0)
	printf("VACIO");
	struct electronico audio[tam];
	/*
	for(int i=0; i<tam; i++){
		printf("\n\nPRODUCTO %d:\n",i);
		printf("Ingrese nombre del producto: ");
		scanf("%s",&audio[i].descripcion);
		printf("Ingrese la marca del producto: ");
		scanf("%s",&audio[i].marca);
		printf("Ingrese el modelo del producto: ");
		scanf("%s",&audio[i].modelo);
		printf("Ingrese el precio del producto: ");
		scanf("%f",&audio[i].precio);	
	}*/
	/*
	for(int i=0; i<1; i++){
		printf("\n\nPRODUCTO %d:\n",i);
		printf("Nombre: %s\n",audio[i].descripcion);
		printf("Marca: %s\n",audio[i].marca);
		printf("Modelo: %s\n",audio[i].modelo);
		printf("Precio: %c\n",audio[i].precio);	
	}*/
	
	return 0;
}
