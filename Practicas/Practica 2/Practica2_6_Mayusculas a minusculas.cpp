//Crear un programa que cambie un texto de mayúsculas a minúsculas

//Córdova Fernández Karla Lilia
//Programación Avanzada 3EV1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena[250];
	char mayus[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
	'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char minus[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
	'o','p','q','r','s','t','u','v','w','x','y','z'};
	int indice = 0, longitud = 0;
	
while(indice != 2){
	printf("\nElija una opcion:\n1) Cambiar mayusculas por minusculas.\n2) Salir.\n");
	scanf("%d",&indice);
	fflush(stdin);

	if(indice == 1){
		printf("Escribe tu texto:\n");
		scanf("%[^\n]",&cadena);
		fflush(stdin);
		
		longitud = strlen(cadena);
		printf("\nTexto original:\n%s",cadena);
	
		//PRIMER CASO
		strlwr(cadena);
		printf("\n\nTexto sin mayusculas con strlwr:\n%s",cadena);
		
		//SEGUNDO CASO
		for(int i=0; i<longitud; i++){
			for(int j=0; j<26; j++){
				if(cadena[i] == mayus[j])
					cadena[i] = minus[j];
				
			}
		}
		printf("\n\nTexto sin mayusculas con arreglos:\n%s\n\n",cadena);
	}
}
	
return 0;
}
