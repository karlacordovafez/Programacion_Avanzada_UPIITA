//Crear programa que determine numero par o impar


//INCREMENTOS
/*
 n++ incrementa despu�s de que se ejecute la instrucci�n
 ++n incrementa antes de ejecutar la linea
n=++n incrementa 2


*/



#include <stdlib.h>
#include <stdio.h>


int main(){
	int numero = 0;
	
	printf("\nIntroduce un numero:\n");
	scanf("%i",&numero);
	
	if(numero % 2 == 0)   //numero m�dulo 2
		printf("par\n");
	else
		printf("impar\n");
		
return(0);
}
