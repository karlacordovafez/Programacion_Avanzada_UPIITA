/*
Crear un programa que escriba en un archivo todos 
los números pares del 1 al 1000.
*/

#include <stdlib.h>
#include <stdio.h>

FILE *archivo;
FILE *Leer_archivo;
char nombre_archivo[] = "Numeros_pares.txt";
char buffer[5];

int main(){
	archivo = fopen(nombre_archivo,"w");
	if(archivo != NULL){
		for(int i=1; i<=1000;i++){
			if(i%2 == 0){
				sprintf(buffer,"%d\n",i);
				fputs(buffer,archivo);
				//	fprintf(archivo,"%d\n",i);
			}
		}
	}
	else
	printf("No se pudo abrir el archivo!");
	
	fclose(archivo);
	
	
	Leer_archivo = fopen(nombre_archivo,"r");
	if(archivo != NULL){
		printf("Posicion actual del puntero: %d",ftell(Leer_archivo));
		//Cambiar posicion el puntero
		fseek(Leer_archivo,2,0);
		fgets(buffer,9
		,Leer_archivo);
		printf("Lo que se ha leído es: %s -",buffer);
	}
	else
	printf("No se pudo leer el archivo!");
	
	fclose(Leer_archivo);
	
	
	return 0;
}
