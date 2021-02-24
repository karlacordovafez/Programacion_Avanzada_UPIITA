/*
TYPEDEF
Es una palabra reservada que le permite al programador crear un alias o sinónimo de un
tipo definido por el usuario o ya existente

Declaración:
typedef tipo_dato nombre_apodo
*/

#include <stdlib.h>
#include <stdio.h>

struct alumno_upiita_sistemas{
	char nombre[20];
	int edad;
};

typedef struct alumno_upiita_sistemas upiito;
upiito alumno;

int main(){
	
	int valor_x = 10;
	typedef int mi_enterito;
	mi_enterito valor_y = 25;
	
	printf("El valor de x es: %d\n",valor_x);
	printf("El valor de y es: %d\n",valor_y);
	
	printf("\nIngresa en nombre: ");
	scanf("%s",&alumno.nombre);
	printf("El nombre es %s",alumno.nombre);
	
	return 0;
}
