// Obtener la suma de cualquier número, es decir, si pongo el valor 3 se espera lo siguiente:
//6 (3+2+1) 

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int suma_consecutiva(int numero);

int main(){

int indice = 0, numero = 0, resultado = 0;
	
while(indice != 2){
	numero = 0;
	printf("\nElija una opcion:\n1) Obtener suma consecutiva.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		printf("Obtener la suma del 0 al:\n");
		scanf("%d",&numero);
		fflush(stdin);
		
		if(numero < 0)
			printf("No se pueden sumar numeros menores a cero.\n\n\n",numero);
		else{
			resultado = suma_consecutiva(numero);
			printf("= %d\n\n\n",resultado);
		}
		

	}
}
	return 0;
}

int suma_consecutiva(int numero){
	printf("%d ",numero);
	if(numero<1)
		return 0;
	else{
		printf("+ ");
		return numero+suma_consecutiva(numero-1);
	}
}
