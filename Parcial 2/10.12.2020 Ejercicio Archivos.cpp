//Crear archivo que guarde numeros del 1 al 100

#include <stdlib.h>
#include <stdio.h>

FILE *archivo;
char nombre_archivo[] = "Numeros.html"; //.rtf para un word
char buffer[200];
int main(){
	
	archivo = fopen(nombre_archivo,"w");
	if(archivo != NULL){
	//	fprintf(archivo,"Este es mi primer archivo");
		for(int i=1; i<=100;i++){
			fprintf(archivo,"<label>%d</label></br>\n",i);
		}
	}
	else
	printf("No se pudo abrir el archivo!");
	
	fclose(archivo);
	
	return 0;
}
