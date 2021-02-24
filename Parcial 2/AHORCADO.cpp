#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int BuscarPalabra(char letra);

char palabra[50];
char oculta[50];

int main(){
	int vidas = 6;
	char letra;
	
	//GUARDAR PALABRA
	printf("Introduzca la frase:");
	scanf("%50[^\n]s",palabra);
	printf("%s",palabra);
	strupr(palabra);
	system("cls");
	
	//OCULTAR PALABRA
	for(int i=0; i<strlen(palabra); i++){
		if(palabra[i]==' ')
			oculta[i] = ' ';
		else
			oculta[i] = '_';
	}
	

	while(vidas > 0){
		if(strcmp(palabra,oculta) == 0){
			printf("Respuesta: '%s'",palabra);
			printf("\nFELICIDADES! Has ganado el juego!");
			exit(0);
		}
		
		printf("\nDescubre la palabra!\nVidas: %d",vidas);
		printf("\n%s\n",oculta);
		fflush(stdin);
		printf("\nIngresa una letra en MAYUSCULAS:");
		scanf("%c",&letra);
		fflush(stdin);
		
		system("cls");
		
		if(BuscarPalabra(letra) == 0){
			printf("\nERROR, la palabra no contiene esa letra!");
			vidas--;
		}
		else
			printf("\n%d letras son '%c'!",BuscarPalabra(letra),letra);
		
	}
	system("cls");
	printf("\nPERDISTE! Mas suerte la proxima!");
	printf("\nRespuesta: '%s'",palabra);
	exit(0);
	
	return 0;
}


int BuscarPalabra(char letra){
	int contador = 0;
	for(int i=0; i<strlen(palabra); i++){
		if(palabra[i]==letra){
			oculta[i] = letra;
			contador++;
		}

	}
	return contador;	
}



/*
*******************
**              ******
**            ** *  * **
**           **  ****  **
**            **      **
**              ******
**                **
**            **  **  **
**          **    **    **
**        **      **      **
**               ****
**             **    **
**           **        **
**         **            **
**
**
**
**

*/
