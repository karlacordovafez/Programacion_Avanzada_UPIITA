//Realizar la tabla de multiplicar dado x's número.

//Córdova Fernández Karla Lilia 
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int numero = 0, maximo = 0, mult = 0, indice = 0;

	while(indice != 2){
		printf("\nElija una opcion:\n1) Tabla de multiplicar.\n2) Salir.\n");
		scanf("%d",&indice);
		fflush(stdin);
	
		if(indice == 1){
			printf("Ingrese el numero del que quiere obtener la tabla de multiplicar:\n");
			scanf("%d",&numero);
			fflush(stdin);
			
			printf("Hasta que numero desea la tabla de multiplicar?:\n");
			scanf("%d",&maximo);
			fflush(stdin);
	
			for(int i=1; i<=maximo; i++){
				mult = numero*i;
				printf("%d x %d = %d\n",numero,i,mult);
			}	
		printf("\n\n\n");
		}
	}

return 0;
}


