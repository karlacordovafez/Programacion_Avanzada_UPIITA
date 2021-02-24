#include <stdlib.h>
#include <stdio.h>


int main(){
	int longitud = 0, aux = 0;
	printf("Ordenamiento burbuja:\n");
	
	
	printf("Introduzca la cantidad de numeros:");
	scanf("%d",&longitud);
	printf("\nEscriba los números:\n");
	int grupo[longitud];

	for(int i=0; i<longitud; i++){
		scanf("%d",&grupo[i]);
	}
	fflush(stdin);


		for(int i=0; i<longitud; i++){
				for(int j=0; j<longitud-1; j++){
			aux = grupo[j];
			if(! (grupo[j] < grupo[j+1]) ){
				grupo[j] = grupo[j+1];
				grupo[j+1] = aux;
			}	
		}
	}
	printf("\n\n");
	for(int i=0; i<longitud; i++){
		printf("%d\n",grupo[i]);
	}

	return 0;
}
