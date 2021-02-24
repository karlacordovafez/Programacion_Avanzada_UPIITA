//Estructuras con funciones

#include <stdlib.h>
#include <stdio.h>
#define tam 2

struct electronico{
	char descripcion[20];
	char marca[20];
	char modelo[20];
	float precio;
};

void GuardarDatos();
void ImprimirDatos();

struct electronico *audio;
	
int main(){

	//audio = (electronico*)malloc(sizeof(electronico)*tam);
	
//	GuardarDatos();
	ImprimirDatos();
	
	return 0;
}

void GuardarDatos(){
	for(int i=0; i<1; i++){
		printf("\n\nPRODUCTO %d:\n",i);
		printf("Ingrese nombre del producto: ");
		scanf("%s",&*(audio+i)->descripcion);
		printf("Ingrese la marca del producto: ");
		scanf("%s",&*(audio+i)->marca);
		printf("Ingrese el modelo del producto: ");
		scanf("%s",&*(audio+i)->modelo);
		printf("Ingrese el precio del producto: ");
		scanf("%f",&(audio+i)->precio);	
	}
}

void ImprimirDatos(){
	for(int i=0; i<1; i++){
		printf("\n\nPRODUCTO %d direccion ->  :\n",i);
		printf("Nombre: %s %d\n",(audio+i)->descripcion,(audio+i));
		printf("Marca: %s\n",(audio+i)->marca);
		printf("Modelo: %s\n",(audio+i)->modelo);
		printf("Precio: %.2f\n",(audio+i)->precio);
	}	
	
}
