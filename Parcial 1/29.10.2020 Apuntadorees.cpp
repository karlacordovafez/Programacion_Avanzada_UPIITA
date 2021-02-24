#include <stdlib.h>
#include <stdio.h>

//APUNTADORES

int main(){
	
	int x = 10;
	int *apuntador;
	
	printf("El valor de x es %d\n",x);
	printf("La direccion de x es %p\n",&x);
	
	apuntador = &x; //guarda direccion de x
	printf("La direccion de x en el apuntador es %p\n",apuntador); //SIN ASTERISCO es una direcci�n que tiene almacenada
	printf("El valor de x en el apuntador es %d\n",*apuntador); //ASTERISCO indica el valor (dato) en esa direcci�n
	printf("La direccion del apuntador es %p\n",&apuntador);  //AMPERSAND es la direcci�n del apuntador
	// int *apuntador = x; //ES INCORRECTA
	/*
	Porque el apuntador espera guardar una direcci�n
	y est� recibiendo el valor de una variable.
	*/
	
	//*apuntador = &x; //CORRECTA
	
//	printf("%o",*apuntador); //Va a imprimir la direcci�n que tiene almacenada.
	
	
	
	return 0;
}
