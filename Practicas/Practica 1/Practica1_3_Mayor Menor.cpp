//Crear un programa que obtenga el mayor y el menor de una secuencia de números.

//Córdova Fernández Karla Lilia 
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){

	int numero = 0, indice = 0;
	float mayor = 0,menor = 0;
	
	while(indice != 2){
		printf("Elija una opcion:\n1) Obtener mayor y menor.\n2) Salir.\n");
		scanf("%d",&indice);
		fflush(stdin);
	
		if(indice == 1){
			printf("Ingrese cuantos numeros seran la secuencia:\n");
			scanf("%d",&numero);
			fflush(stdin);
			
			float secuencia[numero] = {};
			printf("Ingrese la secuencia:\n");
			fflush(stdin);
			
			for(int i=0; i<numero; i++){
				scanf("%f",&secuencia[i]);
			}	
			fflush(stdin);
			for(int i=0; i<numero; i++){
				printf("[%.2f] ",secuencia[i]);
			}
			
			//NUMERO MAYOR - MENOR
			mayor = secuencia[0];
			menor = secuencia[0];
			for(int i=0; i<numero; i++){
				(secuencia[i] > mayor) ? mayor = secuencia[i] : mayor = mayor;
				(secuencia[i] < menor) ? menor = secuencia[i] : menor = menor;				

			}
			printf("\n\nEl numero MAYOR es %.2f",mayor);
			printf("\nEl numero MENOR es %.2f",menor);
			printf("\n\n\n");
		}
	}
return 0;
}
