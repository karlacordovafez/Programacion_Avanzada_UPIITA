//Ternario
//condicion

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0, b = 0, c = 0;
	int resultado = 0;
	
	printf("Ingresa 3 numeros:");
	scanf("%d %d %d",&a,&b,&c);

	/*
	if(a > b)
		resultado = (a > c) ? a:c;
	else
		resultado = (b > c) ? b:c;
	*/
	resultado = (a > b) ? ( a > c ? a:c ):(b > c ? b:c);
	
	printf("El numero mayor es: %d",resultado);
	
}



		
	
