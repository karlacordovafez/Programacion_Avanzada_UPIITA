/*Crear un programa que reciba una secuencia de números (1,2,3....n),
se debe obtener como salida los números ingresados por el usuario de acuerdo al orden
(posición de cada uno de los números) y después mostrarlos en orden descendiente (n....3,2,1).
*/

//Córdova Fernández Karla Lilia 
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){
	int longitud = 0, indice = 0;
	float aux = 0;
	
	while(indice != 2){
		printf("\nElija una opcion:\n1) Ordenar una secuencia de numeros.\n2) Salir.\n");
		scanf("%d",&indice);
		fflush(stdin);
		system("cls");
		
		if(indice == 1){
			printf("Cuantos numeros quiere en la secuencia?\n");
			scanf("%d",&longitud);
			fflush(stdin);

			float grupo[longitud] = {};
			printf("Ingrese los numeros:");
			for(int i=0; i<longitud; i++){
				scanf("%f",&grupo[i]);
			}
			
			fflush(stdin);
			printf("\nSecuencia en el orden de ingreso:\n");	
			for(int i=0; i<longitud; i++){
				printf("[%.2f],",grupo[i]);
			}
	
			//ORDEN DESCENDENTE
			for(int i=0; i<longitud; i++){
				for(int j=0; j<longitud-1; j++){
					aux = grupo[j];
					if(grupo[j] < grupo[j+1] ){
						grupo[j] = grupo[j+1];
						grupo[j+1] = aux;
					}	
				}
			}
	
			//IMPRIMIR
			printf("\n\nSecuencia en orden descendente:\n");
			for(int i=0; i<longitud; i++){
				printf("[%.2f],",grupo[i]);
			}
			printf("\n\n\n");
		}
	}
	
	return 0;
}
