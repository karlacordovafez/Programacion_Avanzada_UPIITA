//Diseñar un algoritmo que lea 3 números y encuentre si uno de ellos es la suma de los otros dos.

//Córdova Fernández Karla Lilia 
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

int main(){
	float numA = 0, numB = 0, numC = 0;
	int indice = 0;
	
	while(indice != 2){
		printf("Elija una opcion:\n1) Ingresar 3 numeros y compararlos.\n2) Salir.\n");
		scanf("%d",&indice);
		fflush(stdin);
		
		if(indice == 1){
			printf("Ingresa 3 numeros enteros:");
			scanf("%f %f %f",&numA, &numB, &numC);
			fflush(stdin);
	
			((numA + numB) == numC) ? printf("[%.2f + %.2f = %.2f]\n\n",numA,numB,numC):
			((numA + numC) == numB) ? printf("[%.2f + %.2f = %.2f]\n\n",numA,numC,numB):
			((numB + numC) == numA) ?printf("%[%.2f + %.2f = %.2f]\n\n",numB,numC,numA):
			printf("Ninguna pareja de numeros es la suma del otro.\n\n\n");
		}
	}
	
return 0;
}
