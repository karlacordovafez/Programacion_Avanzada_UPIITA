//ESTRUCTURA DE DATOS
/*
Puede almacenar distintos tipos de datos.
Se puede ver como un contenedor que almacena información.
Se considera una variable definida por el programador.
"Miembros" cada elemento que constituye la estructura.
*/
//OPERACIONES
/*
Para acceder/asignar a los miembros: 
Estructura.Miembro			[Estructuras estáticas]
Estructura->Miembro			[Estructuras dinámicas]
*/

#include <stdlib.h>
#include <stdio.h>

struct profesor{
	char nombre[25];
};

struct alumno{
	char nombre[25];
	int edad;
	float promedio;
	profesor profe;
	
};

int main(){
	alumno yo;
	
	printf("Programa de estructuras\n");
	printf("Tama\244o de la estructura: %d\n",sizeof(struct alumno));
	printf("Nombre:");
	scanf("%s",&yo.nombre);
	fflush(stdin);
	printf("Edad:");
	scanf("%d",&yo.edad);
	printf("Promedio:");
	scanf("%f",&yo.promedio);
	
	
	return 0;
}
