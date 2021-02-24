//Crear programa que determine numero par o impar


//INCREMENTOS
/*
 n++ incrementa después de que se ejecute la instrucción
 ++n incrementa antes de ejecutar la linea
n=++n incrementa 2


*/



#include <stdlib.h>
#include <stdio.h>


int main(){
	int numero = 0;
	
	printf("\nIntroduce un numero:\n");
	scanf("%i",&numero);
	
	if(numero % 2 == 0)   //numero módulo 2
		printf("par\n");
	else
		printf("impar\n");
		
return(0);
}
