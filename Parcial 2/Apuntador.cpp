
#include <stdlib.h>
#include <stdio.h>
// PROGRAMA que sume dos variables mediante apuntadores.

int main(){
	
	int x = 4;
	int y = 6;
	int *apuntador;
	int **apuntador2;
	
	apuntador = &x;
	apuntador2 = &apuntador;
	printf("%d",**apuntador2);
	
	
	
	
	
	return 0;
	
}
