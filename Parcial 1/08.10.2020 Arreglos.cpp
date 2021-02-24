//Arreglos (es un objeto en POO)
//Crear un programa que me obtenga
//el promedio de calificaciones de 20 alumnos.

#include <stdio.h>
#include <stdlib.h>

#define tam 20 //macro

int main(){
	float calificaciones[tam];
	float promedio = 0;
	
	printf("Ingresa las 20 calificaciones:\n");
	for(int i=0; i<tam; i++){
		scanf("%f",&calificaciones[i]);
	}
	for(int i=0; i<tam; i++){
		promedio = promedio + calificaciones[i];
	}
	//  [%.2f] para dos decimales
	
	promedio = promedio/20;
	printf("\nEl promedio de las calificaciones es: %f",promedio);
	
	return 0;
}
