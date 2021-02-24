//INCREMENTOS
/*
 n++ incrementa después de que se ejecute la instrucción
 ++n incrementa antes de ejecutar la linea
n=++n incrementa uno
n=n++ NO INCREMENTA

*/

#include <stdlib.h>
#include <stdio.h>


int main(){
	int X = 40;
	int Z = 56;
	
	X+=Z;  //X=96
	printf("%i",X);
	Z=X--;  //Z=96
	printf("%i",Z);
	X=++Z; //97
	//Z=97
	printf("%i",X);
	X=Z*X--; //X=9409
	printf("%i",X);
	//X=9409
	Z=++Z;
	//Z=98
	printf("%i",Z);
	X=Z++*X++;
	//X=922082
	printf("%i",X);
return(0);
}
