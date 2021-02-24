
#include <stdio.h>
#include <stdlib.h>

struct alumno{
        char nombre[25];
        int edad;
        int num_boleta; 
};

void EscribirArchivo(int longitud);
void LeerArchivo();
FILE *archivo;
char nombre_archivo[] = "ArchivoA.txt";

struct alumno *Alumnos;

int main() {
	int longitud;
	printf("Ingrese cantidad de alumnos:\n");
	scanf("%d", &longitud);
	fflush(stdin);
	Alumnos =(struct alumno*)malloc(sizeof(struct alumno)*longitud);
	EscribirArchivo(longitud);
	LeerArchivo();
	return 0;
}

void EscribirArchivo(int longitud){
	char texto[100];
	archivo = fopen(nombre_archivo,"w");
	if(archivo != NULL){
		for(int i = 0; i<longitud; i++){
			fflush(stdin);
			printf("Alumno[%d]\nIngrese nombre del alumno:\n",i);
			gets(&*(Alumnos+i)->nombre);
			fflush(stdin);
			printf("Ingrese edad del alumno:\n");
			scanf("%d",&(Alumnos+i)->edad); 
			printf("Ingrese numero de boleta del alumno:\n");
			scanf("%d",&(Alumnos+i)->num_boleta); 
			printf("\n\n");	
			fprintf(archivo,"Nombre: %s Edad: %d Boleta: %d\n",(Alumnos+i)->nombre,(Alumnos+i)->edad,
			(Alumnos+i)->num_boleta);		
		}
		
	}
	else
		printf("No se pudo abrir el archivo!");
	fclose(archivo);
}

void LeerArchivo(){
	char linea[200];
	archivo = fopen(nombre_archivo,"r");
	if(archivo != NULL){
		while(fgets(linea,200,(FILE*) archivo)) {
        	printf("%s\n", linea);
    	}
	}
	else
	printf("No se pudo leer el archivo!");
	fclose(archivo);
}
