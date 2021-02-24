#include <stdlib.h>
#include <stdio.h>

int Potencia(int numero, int potencia);

int main(){
	int numero = 0; int potencia = 0;
	printf("Introduce solo numeros mayores o igual a 0:\nNumero: ");
	scanf("%d",&numero);
	printf("Potencia: ");
	scanf("%d",&potencia);
	int resultado = Potencia(numero,potencia);
	printf("%d", resultado);
	
	return 0;
}

int Potencia(int numero, int potencia){
	if(potencia == 1 || potencia == 0){
		return (potencia == 1) ? numero:1;
	}
	else
		return numero*Potencia(numero, potencia-1);
}
