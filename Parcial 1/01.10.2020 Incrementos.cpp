//INCREMENTOS
/*
 n++ incrementa despu�s de que se ejecute la instrucci�n
 ++n incrementa antes de ejecutar la linea
n=++n incrementa 2

*/

#include <stdlib.h>
#include <stdio.h>


int main(){
	int n = 10;
	
	printf("Demostrando incrementos:\n");
	printf("n++: %d\n",n++);
	printf("++n: %d\n",++n);
	printf("n=n++: %d\n",n=n++);	
	printf("n=++n: %d\n",n=++n);	
	
return(0);
}
