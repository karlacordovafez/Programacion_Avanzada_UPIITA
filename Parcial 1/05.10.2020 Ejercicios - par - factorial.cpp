
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int contadorPar = 0;
	int contadorImpar = 0;
		
//	1)
	for(int i = 1; i <= 40; i++){
		if(i % 2 == 0){
			contadorPar++;
			printf("%d ",i);
		}
	}

	printf("\nHay %i numeros pares.\n\n",contadorPar);
		
	for(int i = 1; i <= 40; i++){
		if(i % 2 != 0){
			contadorImpar++;
			printf("%d ",i);
		}
	}	
		printf("\nHay %i numeros impares",contadorImpar);
// ---------------------------------------------------------------


//2)

	int numero = 0;
	int factorial = 0;

	printf("\n\nIntroduzca un numero para obtener su factorial:");
	scanf("%i",&numero);
	printf("\n %i! es: ",numero);
	
	if(numero <= 0){
		factorial = 0;
		printf("No existe");
	}
	
	else{
	factorial = numero;	
	while(numero > 1){
		numero--;
		factorial = factorial*numero;
	}
	
		}

	printf("%i",factorial);
	


	
	return 0;
}
