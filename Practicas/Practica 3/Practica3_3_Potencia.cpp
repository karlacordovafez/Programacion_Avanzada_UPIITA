// Obtener la potencia de cualquier número.

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>

float Potencia(float numero, int potencia);

int main(){
	float numero = 0;
	int potencia = 0, indice = 0;
	
	while(indice != 2){
	numero = 0;
	potencia = 0;
	printf("\nElija una opcion:\n1) Obtener potencia positiva de un numero.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		printf("Introduce tus valores (potencias mayores o iguales a cero):\nNumero: ");
		scanf("%f",&numero);
		fflush(stdin);
		printf("Potencia: ");
		scanf("%d",&potencia);
		fflush(stdin);
		if(potencia<0)
			printf("\n\nEl programa solo calcula potencias mayores o iguales a cero.\n\n");
	
		else{
			float resultado = Potencia(numero,potencia);
			printf("\n\n(%.2f)^%d = %.2f\n\n\n", numero,potencia,resultado);
		}
	}
	
}
	return 0;
}

float Potencia(float numero, int potencia){
	if(potencia == 1 || potencia == 0){
		return (potencia == 1) ? numero:1;
	}
	else
		return numero*Potencia(numero, potencia-1);
}
