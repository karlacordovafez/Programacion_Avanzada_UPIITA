// Obtener el factorial de un número 

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>
int factorial(int numero);

int main(){
	int indice = 0, numero = 0, resultado = 0;
while(indice != 2){
	numero = 0;
	printf("\nElija una opcion:\n1) Obtener factorial.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		printf("Introduzca el numero entero del que quiere obtener factorial:\n");
		scanf("%d",&numero);
		fflush(stdin);
		if(numero < 0 || numero > 12)
			printf("No existe el factorial o es demasiado grande %d\n\n\n",numero);
		else{
			printf("\n\nFactorial %d! = ",numero);
			resultado = factorial(numero);
			printf(" = %d\n\n\n",resultado);
		}
	}
}
	return 0;
}

int factorial(int numero){
	if(numero != 0)
	printf("%d ",numero);
	if(numero<=1)
		return 1;
	else{
		printf(" * ");
		return numero*factorial(numero-1);
	}
}


