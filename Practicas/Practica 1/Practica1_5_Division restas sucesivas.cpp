//Realizar un programa que divida dos n�meros dados, resolverlo mediante el m�todo de restas sucesivas.

//C�rdova Fern�ndez Karla Lilia 
//Programaci�n Avanzada 3EV1

#include <stdio.h>
#include <stdlib.h>

int main(){
	int indice = 0;
	
	while(indice != 2){
		printf("Elija una opcion:\n1) Division con restas.\n2) Salir.\n");
		scanf("%d",&indice);
		fflush(stdin);
		
		if(indice == 1){
			int dividendo = 0,divisor = 0,resta = 0,resultado = 0;
			printf("Introduce 2 numeros (dividendo) (divisor):");
			scanf("%d %d",&dividendo,&divisor);
			fflush(stdin);
			resta = dividendo;
		
			if(divisor <= dividendo && divisor != 0){
				while(resta>=divisor){
					resta=resta-divisor;
					resultado++;
				}
			printf("Resultado: %d con residuo: %d\n\n\n",resultado,resta);				
			}
			else
			printf("Datos invalidos para el metodo de restas sucesivas\n\n\n");
		}
	}
return 0;		
}
